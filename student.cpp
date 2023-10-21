#include<iostream>
#include "Student.h"
using namespace std;

class Student1{
	
	void  Student:: setStudid(int sid){
		this->studid=sid;
	}
	void Student:: setName(string name)
	{
		this->name=name;
	}
	void Student::setM1(int m1){
		this->m1=m1;
	}
	void Student::Student::setM2(int m2){
		this->m2=m2;
	}
	void Student:: setm3(int m3){
		this->m3=m3;
	}
	int Student::getStudid(){
		return this->studid;
	}
	string Student::getName(){
		return this->name;
	}
	int Student::getM1(){
		return this->m1;
	}
	int Student::getM2()
	{
		return this->m2;
	}
	int Student::getM3(){
		return this->m3;
	}
	void Student::calMarks(){
		this->sum=this->m1+this->m2+this.m3;
		this->per=sum/3;
		
	}
	void Student::display(){
		cout<<this->studid<<" "this->name<<endl;
		cout<<this->m1<<" "<<this->m2<<" "<<this->m3<<endl;
		cout<<this->sum<<" "<<this->per;
	}
};
