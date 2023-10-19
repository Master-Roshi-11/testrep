#include "Student.h"
#include<iostream>
using namespace std;

Student::Student()
{
	Student::cnt++;
	setId(cnt);
	
}

Student::~Student()
{
}
//Return_Type ClassName::Fun_Name(args...List)
//	{
//	}

//Getters
int Student::getId()
{
	return this->id;
}
string Student::getName()
{
	return this->name;
}
double Student::getPercentage()
{
	return this->percentage;
}

//Setters
void Student::setId(int id)
{
	this->id=id;
}
void Student::setName(string name)
{
	this->name=name;
}
void Student::setPercentage(double p)
{
	this->percentage=p;
}

void Student::display()
{
	cout<<"ID : "<<id<<endl;
	cout<<"Name : "<<this->getName()<<endl;
	cout<<"Percentage : "<<this->getPercentage()<<endl;
}

int Student::cnt=2000;
