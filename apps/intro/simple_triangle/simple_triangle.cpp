#include <iostream>

#include "vfx/scene/window.h"

using vfx::scene::Window;
using vfx::scene::WindowParameters;

int main() {
  // Default parameters
  WindowParameters parameters{};
  parameters.title = "Simple Triangle";

  Window window(parameters);
  window.open();
}