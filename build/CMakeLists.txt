# CMakeLists.txt

# cmake_minimum_required(VERSION 3.10)
# project(MathUtilsApp)

# set(CMAKE_CXX_STANDARD 17)

# add_executable(MathUtilsApp main.cpp MathUtils.cpp)


# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(MathUtilsApp)

set(CMAKE_CXX_STANDARD 17)

# Step 1: Create DLL from MathUtils.cpp
add_library(MathUtils SHARED MathUtils.cpp)

# Step 2: Build main executable without MathUtils.cpp
add_executable(MathUtilsApp main.cpp)

# Step 3: Link the app with the DLL
target_link_libraries(MathUtilsApp PRIVATE MathUtils)

# Step 4: Make headers available
target_include_directories(MathUtilsApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(MathUtils PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
