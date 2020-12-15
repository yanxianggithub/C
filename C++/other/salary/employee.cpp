#include"employee.h"
#include<fstream>
using namespace std;
int Employee::totalno = 10000;
Employee::Employee()
{
	no = totalno++;
	salary = 0.0;
	name = " ";
	post = " ";
}
Employee::~Employee(){}
int Employee::getno() { return no; }
string Employee::getname() { return name; }
string Employee::getpost() { return post; }
float Employee::getsalary() { return salary; }
Technician::Technician(string na, int hours)
{
	name = na;
	hourlyrate = 100;
	workhours = hours;
	post = "兼职技术人员";
}
void Technician::pay()
{
	salary = hourlyrate * workhours;
}
Saleman::Saleman(string na, float sa)
{
	commrate = 0.04f;
	name = na;
	salary = sa;
	post = "销售员";
}
void Saleman::pay()
{
	salary = sales * commrate;
}
Manager::Manager(string na)
{
	monthlypay = 8000;
	name = na;
	post = "经理";
}
void Manager::pay()
{
	salary = monthlypay;
}
Salesmanager::Salesmanager(string na, float sa) :Manager(na), Saleman(na, sa)
{
	monthlypay = 5000;
	commrate = 0.005f;
	post = "销售经理";
}
void Salesmanager::pay()
{
	salary = monthlypay + commrate * sales;
}

Hourwork::Hourwork(string na,int hours)
{
	name=na;
	hourlyrate=20;
	workhours=hours;
	post="小时工";
}
void Hourwork::pay()
{
	salary=hourlyrate * workhours;
}
