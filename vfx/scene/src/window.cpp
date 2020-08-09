#include "vfx/scene/window.h"

#include <stdexcept>

namespace vfx::scene {

Window::Window(const WindowParameters& window_parameters)
  : parameters_(window_parameters) {
}

void Window::open() {
  // Initialize GLFW.
  if (!glfwInit()) {
    throw std::runtime_error("Failed to initialize GLFW.");
  }

  // Create the GLFW window.
  window_ = glfwCreateWindow(
    parameters_.dimensions.width,
    parameters_.dimensions.height,
    parameters_.title.c_str(),
    nullptr,
    nullptr);
  if (!window_) {
    throw std::runtime_error("Failed to create GLFW window.");
  }
  glfwMakeContextCurrent(window_);

  // Initialize GLEW.
  glewExperimental = true;
  if (glewInit() != GLEW_OK) {
    throw std::runtime_error("Failed to initialize");
  }

  // Enable key capture.
  glfwSetInputMode(window_, GLFW_STICKY_KEYS, GL_TRUE);

  // Run the main window loop.
  while (!glfwWindowShouldClose(window_)) {
    glfwSwapBuffers(window_);
    glfwPollEvents();
  }
}
}