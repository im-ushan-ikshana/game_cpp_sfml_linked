
#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>
#include <cmath>

// Function to convert HSV to RGB
sf::Color HSVtoRGB(float hue, float saturation, float value) {
    int hi = static_cast<int>(hue / 60) % 6;
    float f = hue / 60 - hi;
    float p = value * (1 - saturation);
    float q = value * (1 - f * saturation);
    float t = value * (1 - (1 - f) * saturation);

    switch (hi) {
    case 0:
        return sf::Color(static_cast<sf::Uint8>(value * 255), static_cast<sf::Uint8>(t * 255), static_cast<sf::Uint8>(p * 255));
    case 1:
        return sf::Color(static_cast<sf::Uint8>(q * 255), static_cast<sf::Uint8>(value * 255), static_cast<sf::Uint8>(p * 255));
    case 2:
        return sf::Color(static_cast<sf::Uint8>(p * 255), static_cast<sf::Uint8>(value * 255), static_cast<sf::Uint8>(t * 255));
    case 3:
        return sf::Color(static_cast<sf::Uint8>(p * 255), static_cast<sf::Uint8>(q * 255), static_cast<sf::Uint8>(value * 255));
    case 4:
        return sf::Color(static_cast<sf::Uint8>(t * 255), static_cast<sf::Uint8>(p * 255), static_cast<sf::Uint8>(value * 255));
    case 5:
        return sf::Color(static_cast<sf::Uint8>(value * 255), static_cast<sf::Uint8>(p * 255), static_cast<sf::Uint8>(q * 255));
    default:
        return sf::Color::White;
    }
}

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Rainbow Transition");

    sf::Clock clock;

    // Create a rectangle that matches the window size
    sf::RectangleShape rectangle(sf::Vector2f(window.getSize().x, window.getSize().y));

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Calculate the color based on time
        float time = clock.getElapsedTime().asSeconds();
        float hue = fmod(time * 50, 360); // Change the 50 to adjust the speed of the transition
        sf::Color color = HSVtoRGB(hue, 1.0f, 1.0f);

        // Set the rectangle's fill color
        rectangle.setFillColor(color);

        window.clear();
        window.draw(rectangle);
        window.display();
    }

    return 0;
}

