
#include<iostream>
#include<cstdlib>
#include<time.h>
#include<windows.h>
#include <string>
#include <string.h>
#include<stdio.h>
#include <fstream>
#include <cstring>
#include <algorithm>;

#include <list>
#include <vector>
#include <deque>
#include<stack>
#include<queue>
using namespace std;




struct worker
{
	double under1 = 0, under3 = 0.05, under5 = 0.08, over5 = 0.15, award = 0;
	std::string familia;
	double exp;
	int hour_salary;
	int hours_worked;

	void Data_reading() {
		std::cout << "\n������� �������: ";
		std::cin >> familia;
		std::cout << "\n������� ����: ";
		std::cin >> exp;
		std::cout << "\n������� ������� ��������: ";
		std::cin >> hour_salary;
		std::cout << "\n������� ���-�� ������������ �����: ";
		std::cin >> hours_worked;
	}

	void Award_calculation() {
		if (exp < 1)
		{
			award = hour_salary * hours_worked * under1;
		}
		else if (exp > 1 && exp < 3)
		{
			award = hour_salary * hours_worked * under3;
		}
		else if (exp >= 3 && exp < 5)
		{
			award = hour_salary * hours_worked * under5;
		}
		else if (exp >= 5)
		{
			award = hour_salary * hours_worked * over5;
		}

	}

	void Print_worker() {

		std::cout << "�������: " << familia << std::endl;
		std::cout << "����: " << exp << std::endl;
		std::cout << "������� ��������: " << hour_salary << std::endl;
		std::cout << "���-�� ������������ �����: " << hours_worked << std::endl;
		std::cout << "��������: " << hours_worked * hour_salary << std::endl;
		std::cout << "������: " << award << std::endl;
		std::cout << "�������� �����: " << hours_worked * hour_salary + award << std::endl;

	}

	void f00()
	{
		ofstream file;
		file.open("popan.txt");
		Data_reading();
		void Award_calculation();
		file << "\n�������: " << familia << "\n";
		file << "����: " << exp << "\n";
		file << "������� ��������: " << hour_salary << "\n";
		file << "������������ ����: " << hours_worked << "\n";
		file << "��������: " << hours_worked * hour_salary << "\n";
		file << "�����: " << award << "\n";
		file << "������� �������: " << hours_worked * hour_salary + award << "\n";

		file.close();
	}

};








int main()
{

	setlocale(LC_ALL, "ru");

	worker chel;



	chel.f00();

	return(0);
}