//kcsj2.cpp
#include"employee.h"
#include<fstream>
int main()
{
	handlemenu();
	return 0;
}
//处理菜单函数
void handlemenu()
{
	for (; ; )
	{
		switch (selectmenu())
		{
		case 1:
			write();
			break;
		case 2:
			read();
			break;
		case 3:
			cout << "\t再见!\n";
			return;
		}
	}
}
//选择菜单函数
int selectmenu()
{
	int choose;
	cout << "\n\t*******小型公司工资管理程序*******\n";
	cout << "\t1.计算当月工资并保存\n";
	cout << "\t2.查看当月工资\n";
	cout << "\t3.退出程序\n";
	cout << "\t选择1-3：\n";
	cout << "\n\t*********************************\n";
	for (;;)
	{
		cin >> choose;
		if (choose < 1 || choose >3)
			cout << "\n输入错误，重选1-3：";
		else
			break;
	}
	return choose;
}
void write()
{
	Manager m1("张峰");
	cout << "请输入兼职人员王杰本月工作时间（小时）：";
	int hours;
	cin >> hours;
	Technician t1("王杰", hours);
	cout << "请输入销售员李铜本月销售额（元）：";
	float sale;
	cin >> sale;
	Saleman s1("李铜", sale);
	cout << "请输入销售经理董力民所管部门本月销售量（元）：";
	cin >> sale;
	Salesmanager sm1("董力民", sale);
	Hourwork h1("王二", hours);
	cout << "请输入小时工王二本日工作时间（小时）：";
	cin >> hours;
 	Employee* em[4] = { &m1,&t1,&s1,&sm1 };
	ofstream ofile("employee.txt");
	for (int i = 0; i < 4; i++)
	{
		em[i]->pay();
		ofile << em[i]->getname() << "(" << em[i]->getpost() << ",工号为" <<
			em[i]->getno() << ")";
		ofile << "本月工资：" << em[i]->getsalary() << endl;
	}
	ofile.close();
	cout << "本月工资信息以存入文件" << endl << endl;
}
void read()
{
	char line[101];
	ifstream infile("employee.txt");
	try
	{
		if (!infile)
			throw FileException();
	}
	catch (FileException fe)
	{
		cout << fe.what() << endl;
	}
	for (int i = 0; i < 4; i++)
	{
		infile.getline(line, 100);
		cout << line << endl;
	}
}