#pragma once
#include <iostream>
using namespace std;
enum struct Gender
{
    Male,
    Female,
    Other
};
struct Student
{
    string id, name, major, address;
    int yearOfBirth;
    float score;
    Gender gender;
};