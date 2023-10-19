#include <iostream>
#include "Student.h"
#include<vector>
#include<iterator>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
extern vector<Student> stud_vec;
int main(int argc, char** argv) {
	
	Student s1,s2,s3;
	//s1.setId(25);
	s1.setName("Anuj");
	s1.setPercentage(69.69);
	
	//s2.setId(31);
	s2.setName("Aman");
	s2.setPercentage(71.69);
	
	//s3.setId(69);
	s3.setName("Pooja");
	s3.setPercentage(65.1);
	
	
	stud_vec.push_back(s1);
	stud_vec.push_back(s2);
	stud_vec.push_back(s3);
	
	//java
	//ITERATOR
	//lISTiTERATOR
	
	vector<Student>::iterator itr;
	for(itr=stud_vec.begin();itr!=stud_vec.end();itr++)
	itr->display();	
	
	
	//s.display();
	return 0;
}
