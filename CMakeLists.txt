cmake_minimum_required(VERSION 3.15)
project(Projects_CPP)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_FLAGS "-Wall -c")
#set(CMAKE_CXX_FLAGS_DEBUG "-g")

set(SourceFolder "Exercises/Exercise 13")
#set(SourceInnerFolder "Exercises/Exercise 10 (TODO 2)/People")
#set(SourceInnerFolder2 "Exercises/Exercise 10 (TODO 2)/Home")

#set(SourceFiles "${SourceFolder}/Main.cpp")
#set(SourceFiles2 "${SourceInnerFolder}/Persona.h" "${SourceInnerFolder}/Studente.h" "${SourceInnerFolder}/Docente.h")
#set(SourceFiles3 "${SourceInnerFolder}/Persona.cpp" "${SourceInnerFolder}/Studente.cpp" "${SourceInnerFolder}/Docente.cpp")
#set(SourceFiles4 "${SourceInnerFolder2}/Casa.h" "${SourceInnerFolder2}/Casa.cpp")

#add_executable(Projects_CPP ${SourceFiles} ${SourceFiles2} ${SourceFiles3} ${SourceFiles4})

set(SourceFiles "Exercises/Exercise 14 (TODO 3)/Dolce.h" "Exercises/Exercise 14 (TODO 3)/Merendina.cpp" "Exercises/Exercise 14 (TODO 3)/Merendina.h" "Exercises/Exercise 14 (TODO 3)/Dolce.cpp" "Exercises/Exercise 14 (TODO 3)/Ciambellone.cpp" "Exercises/Exercise 14 (TODO 3)/Ciambellone.h" "Exercises/Exercise 15/Main.cpp" "Lessons/Lesson 14/Project14.cpp" "Lessons/Lesson 15/Project15.cpp" "Lessons/Lesson 16/Project16.cpp")

add_executable(Projects_CPP ${SourceFiles})