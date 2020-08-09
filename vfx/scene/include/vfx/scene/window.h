#pragma once

#include <string>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace vfx::scene {

// Constants.
constexpr int DEFAULT_WINDOW_WIDTH = 1024;
constexpr int DEFAULT_WINDOW_HEIGHT = 768;

/**
 * Specify the window size.
 */
struct WindowDimensions {
  int width{ DEFAULT_WINDOW_WIDTH };
  int height{ DEFAULT_WINDOW_HEIGHT };
};

/**
 * Specify the window display parameters.
 */
struct WindowParameters {
  std::string title{ "" };
  WindowDimensions dimensions{};
};

/**
 * A wrapper around GLFW to manage the creation of windows.
 */
class Window {
public:
  /**
   * Create a new window object. This does not open the window.
   *
   * @param window_parameters The parameters to create the window with.
   */
  Window(const WindowParameters& window_parameters);

  /**
   * Open the window. This will run in the main thread.
   */
  void open();

private:
  // The window parameters.
  WindowParameters parameters_;

  // The underlying GLFW window.
  GLFWwindow* window_;
};
}