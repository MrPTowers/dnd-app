cmake_minimum_required(VERSION 3.15)
project(DND-App VERSION 0.0.1 LANGUAGES CXX)

# Enforce strict Modern C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 1. FIND SYSTEM DEPENDENCIES
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

set(IMGUI_DIR ${CMAKE_CURRENT_SOURCE_DIR}/external/imgui)

# 2. SET APP DEPENDENCIES

# 2.1. IMGUI
set(IMGUI_SOURCES
    ${IMGUI_DIR}/imgui.cpp
    ${IMGUI_DIR}/imgui_demo.cpp
    ${IMGUI_DIR}/imgui_draw.cpp
    ${IMGUI_DIR}/imgui_tables.cpp
    ${IMGUI_DIR}/imgui_widgets.cpp
    ${IMGUI_DIR}/backends/imgui_impl_glfw.cpp
    ${IMGUI_DIR}/backends/imgui_impl_opengl3.cpp
)

# 3. APP CONFIGURATION
add_executable(${PROJECT_NAME} 
    src/main.cpp
    src/ui/application.cpp
    src/core/randomizers.cpp
    ${IMGUI_SOURCES}
)
# 3.1. Include paths
target_include_directories(${PROJECT_NAME} PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui
    ${CMAKE_CURRENT_SOURCE_DIR}/src/core
    ${IMGUI_DIR}
    ${IMGUI_DIR}/backends
)

# Link GLFW and OpenGL to executable
target_link_libraries(${PROJECT_NAME} PRIVATE 
    glfw
    OpenGL::GL
)

# 4. COMPILER WARNINGS
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
elseif(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    target_compile_options(${PROJECT_NAME} PRIVATE /W4)
endif()
