cmake_minimum_required(VERSION 3.16)
project(cells C) # Added 'C' language specification

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 1. Include FetchContent module
include(FetchContent)

# 2. Declare the raylib dependency
FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG master # Use 'master' or a specific release commit hash
)

# 3. Make the dependency available in the current build
FetchContent_MakeAvailable(raylib)

# Ensure the executable builds correctly by explicitly listing the main source file
# Assuming your main file is in 'src/main.c'
add_executable(cells src/main.c)

# 4. Link the newly created 'cells' executable to the 'raylib' target
target_link_libraries(cells PRIVATE raylib)

# 5. Optional: Keep your include directory, though raylib paths are handled by FetchContent
include_directories(include)
