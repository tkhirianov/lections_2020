cmake_minimum_required(VERSION 2.8)	 # Проверка версии CMake.

project(main)			# Название проекта
set(SOURCE_EXE main.cpp)	# Установка переменной со списком исходников для исполняемого файла
set(SOURCE_LIB mylib.cpp)	# Тоже самое, но для библиотеки
add_library(mylib STATIC ${SOURCE_LIB})	# Создание статической библиотеки с именем foo
add_executable(main ${SOURCE_EXE})	# Создает исполняемый файл с именем main

target_link_libraries(main mylib)		# Линковка программы с библиотекой

