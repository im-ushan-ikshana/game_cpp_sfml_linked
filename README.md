# 🌈 Rainbow Transition with SFML 🎮

This C++ code, using the Simple and Fast Multimedia Library (SFML), creates a mesmerizing 🌈 rainbow transition effect on a rectangle 🟩 that covers the entire window. The rectangle smoothly changes colors over time, creating a rainbow-like animation.

## 📦 Dependencies

Before running the code, make sure you have SFML correctly set up in your development environment.

## 💻 Code Description

The code was designed by **Ushan Ikshana, MIT(UG), University of Kelaniya**.

### 🌈 HSV to RGB Conversion

A custom function, `HSVtoRGB`, is defined to convert Hue-Saturation-Value (HSV) color values to Red-Green-Blue (RGB) color values. This function is used to generate the rainbow color transition.

### 🎯 Main Function

In the `main` function:

- We create an SFML window of size 800x600 pixels.
- We define an SFML `Clock` to measure time.
- An `sf::RectangleShape` named `rectangle` is created, initially covering the entire window.

### 🌟 Rainbow Transition

Inside the main loop:

- We calculate the current color based on elapsed time, resulting in a smooth color transition.
- The color transition speed can be adjusted by changing the factor used in `fmod(time * 50, 360)`.
- The `setFillColor` method is used to set the fill color of the rectangle to the calculated color.

### 🎨 Rendering

We clear the window, draw the rectangle with the current color, and display it.

## ▶️ Running the Code

Compile this C++ code with SFML properly linked to your project. When you run the executable, a window will appear, displaying the rainbow transition effect on a rectangle covering the entire window.

Feel free to adjust the code parameters, such as the window size or color transition speed, to customize the effect according to your preferences.

---

**Code designed by Ushan Ikshana, MIT(UG), University of Kelaniya.**

📅 Date and Time: '2023/09/01-10:50pm'

**Note:** If you encounter any issues with missing DLLs or errors, ensure that you have the necessary SFML DLLs in the same directory as your executable or in a directory included in the system's PATH environment variable.

Happy coding! 🚀
