#pragma once
#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{
	char *name;
	char ID[19];
	char number[10];
	char speciality[20];
	int age;
public:
	Student();
	~Student();
	char* GetName();
	char* GetNumber();
	void Display();
	void Input();

};

#endif // !_STUDENT


