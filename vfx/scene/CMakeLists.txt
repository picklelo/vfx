add_library(scene
  src/window.cpp
)

target_include_directories(scene PUBLIC include)
target_link_libraries(scene glfw GLEW OpenGL)
