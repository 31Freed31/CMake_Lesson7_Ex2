# CMakeList.txt: проект CMake для Lesson7_Ex2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Lesson7_Ex2 "src/Lesson7_Ex2.cpp"  "include/cpu.h" "include/ram.h" "include/disk.h" "include/gpu.h" "include/kbd.h" "src/cpu.cpp" "src/ram.cpp" "src/disk.cpp" "src/gpu.cpp" "src/kbd.cpp")
target_include_directories(Lesson7_Ex2 PUBLIC include)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Lesson7_Ex2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
