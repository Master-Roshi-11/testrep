#include<string>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H


class Student
{
	protected : static int cnt;
	private :
		int id;
		string name;
		double percentage;
	public:
		//Constructor Default
		Student();
		
		//Destructor
		~Student();
		
		//Getters
		int getId();
		string getName();
		double getPercentage();
		
		//Setters
		void setId(int);
		void setName(string);
		void setPercentage(double);
		
		void display();
	protected:
		
};


#endif
