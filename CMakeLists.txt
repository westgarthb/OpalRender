cmake_minimum_required(VERSION 3.1)

project(OpalRender LANGUAGES CXX)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(glfw)
add_subdirectory(glm)

find_package(Vulkan REQUIRED)

add_library(OpalRender
  "src/OpalRenderer.cpp"
  "src/OpalWindow.cpp"
  "src/OpalGlfwWindow.cpp")

target_include_directories(OpalRender PRIVATE ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(OpalRender PRIVATE
Vulkan::Vulkan
glfw
glm
)
set_property(TARGET OpalRender PROPERTY CXX_STANDARD 17)
