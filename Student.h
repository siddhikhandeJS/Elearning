#include<iostream>
using namespace std;

class Student{
public:	int studid;
	string name;
	int m1,m2,m3,sum=0;
	float per;
	
public:	

	Student(int id,string name,int m1,int m2, int m3){
		studid=id;
		this->name=name;
		this->m1=m1;
		this->m2=m2;
		this->m3=m3;
	}
	
	void setStudid(int sid);
	void setName(string name);
	void setM1(int m1);
	void setM2(int m2);
	void setm3(int m3);
	
	int getStudid();
	string getName();
	int getM1();
	int getM2();
	int getM3();
	void calMarks();
	void display();
	
};
