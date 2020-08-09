cmake_minimum_required(VERSION 3.10)
project(vfx)

# Add 3rd party libraries.
find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)

# Main vfx libraries.
add_subdirectory(vfx)

# Apps subdirectory.
add_subdirectory(apps)