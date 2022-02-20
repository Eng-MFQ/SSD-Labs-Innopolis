cmake_minimum_required(VERSION 3.17)
project(SSD-Labs-Innopolis)

set(CMAKE_CXX_STANDARD 20)

include_directories(lab1)
include_directories(lab2)
include_directories(Landlord)
include_directories(Landlord/landlordSolution)

#add_executable(SSD-Labs-Innopolis LandlordTemplate.cpp)
add_executable(SSD-Labs-Innopolis
#        lab1/Lab1.cpp lab1/Lab1Header.h lab1/lab1.h
#        lab2/lab2.cpp lab2/lab2.h
#        lab2/student/exerciseOne.cpp
#        lab2/student/exerciseTwo.cpp
#        lab2/student/mainSt.cpp
#        lab3/lab3.cpp lab3/lab3.h
#        Lab4/lab4.cpp Lab4/lab4.h
#        LandlordTemplate/main.cpp LandlordTemplate/landlord.h LandlordTemplate/landlord.cpp
        lab5/landlordTemplate/LandlordTemplate.cpp lab5/landlordTemplate/LandlordTemplate.h
#        lab5/landlordSolution/LandlordSolution.cpp lab5/landlordSolution/LandlordSolution.h
        )



