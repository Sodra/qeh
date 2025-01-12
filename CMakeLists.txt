cmake_minimum_required(VERSION 3.5)

project(qeh VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT MSVC)
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O2")
    set(CMAKE_CXX_FLAGS_INIT "${CMAKE_CXX_FLAGS_INIT} -O2")
endif()

find_package(QT NAMES Qt6 COMPONENTS Gui REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Gui REQUIRED)

add_executable(qeh main.cpp Viewer.cpp Viewer.h)

target_link_libraries(qeh PRIVATE Qt6::Gui Qt6::GuiPrivate xcb-icccm xcb)
install(TARGETS qeh)
