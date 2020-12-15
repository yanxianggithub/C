#pragma once
//employee.h
#include<iostream>
#include<string>
using namespace std;
class Employee
{
protected:
	float salary;
	static int totalno;
	int no;
	string name;
	string post;
public:
	Employee();
	~Employee();
	int getno();
	string getname();
	string getpost();
	float getsalary();
	virtual void pay() = 0;
};

class Technician:public Employee
{
protected:
	float hourlyrate;
	int workhours;
public:
	Technician(string na,int hours);
	void pay();
};

class Saleman:virtual public Employee
{
protected:
	float commrate;
	float sales;
public:
	Saleman(string na,float sa);
	void pay();
};

class Manager:virtual public Employee
{
protected:
	float monthlypay;
public:
	Manager(string na);
	void pay();
};

class Hourwork:public Technician
{
public:
	Hourwork(string na,int hours);
	void pay();
};

class Salesmanager:public Manager,public Saleman
{
public:
	Salesmanager(string na,float sa);
	void pay();
};

class FileException
{
public:
	FileException() :message("本月工资未到") {}
	const char* what()const { return message; }
private:
	const char* message;
};

void write();
void read();
int selectmenu();
void handlemenu();