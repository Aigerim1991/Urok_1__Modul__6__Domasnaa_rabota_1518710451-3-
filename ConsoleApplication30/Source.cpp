#include <stdio.h>
#include<locale.h>
#include<iostream>
#include <time.h>
#include<math.h>
#include"Header.h"
using namespace std;
int F;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	do
	{cout << "������ ����� �������" << endl;
cin >> F;
	switch (F)
	{
	case 1:
	{
printf("������ ����������� �����: �������� � ��������� � �, �������� � - � �, �������� �- � �:\n");
float a, b, c;
				printf("A:");
				scanf("%f", &a);
				printf("B:");
				scanf("%f", &b);
				printf("C:");
				scanf("%f", &c);
				ShiftRight3(&a, &b, &c);
				printf("A:%f; B:%f; C:%f\n", a, b, c);
	}
	break;
	case 2:
	{
	printf("����� ����������� �����: �������� � ��������� � C, �������� C - � B, �������� B- � �:\n");
				float g,d, v;
				printf("A:");
				scanf("%f", &g);
				printf("B:");
				scanf("%f", &d);
				printf("C:");
				scanf("%f", &v);
				ShiftRight4(&g, &d, &v);
				printf("A:%f; B:%f; C:%f\n", g,d,v);
	}
	break;
	case 3:
	{
		int year;
		cout << "������� ���:" << endl;
		cin >> year;
		cout << "��������� �� ���� ���? - "<< IsLeapYear(year)<< endl;
	}
	break;
	case 4:
	{
		int N = 31;
		int year;	
		cout << "������� ���:" << endl;
		cin >> year;
		int month;
		cout << "������� �����:" << endl;
		cin >> month;
		cout <<"���������� ���� � ���� ����, � ���� ������: "<< MonthDays(month, N, year) << endl;
	}
	break;
	case 5:
	{
		int N = 31;
		int year;
		cout << "������� ���:" << endl;
		cin >> year;
		int month;
		cout << "������� �����:" << endl;
		cin >> month;
		cout << "���������� ���� " << PrevDate(month, N, year) << endl;
	}
	break;
	case 6:
	{
		double x,y;		
		doublef(&x, &y);
	}
	break;
	default:
		break;
	}

	} while (F>0);

}
