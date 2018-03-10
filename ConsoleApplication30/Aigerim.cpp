#include <stdio.h>
#include<iostream>
#include<locale.h>
#include <time.h>
#include <math.h>
#include"Header.h"
using namespace std;
void Swap(float *y, float *x)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;

}
void ShiftRight3(float *a, float*b, float *c)
{
	Swap(b, a);
	Swap(a, c);

}
void ShiftRight4(float *a, float *b, float *c)
{
	Swap(a, b);
	Swap(c, b);

}
int IsLeapYear(int year)
{
	if (((year % 4) == 0) && ((year % 400) == 0))
		return 1;
	else
		return 0;
}
int MonthDays(int month, int N, int year)
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return N;
	case 4:
	case 6:
	case 9:
	case 11:
		return N - 1;
		break;
		if (IsLeapYear(year))
			return N - 2;
		else return N - 3;
	default:
		return 0;
		break;
	}


}
int PrevDate(int month, int N, int year)
{
	if (MonthDays(month, N, year))
		return N - 1;
	else return N;

	return 0;
}
int doublef(double *x, double *y)
{
	cout << "¬вести сторону х: " << endl;
	cin >> *x;
	cout << "¬вести сторону y: " << endl;
	cin >> *y;
	if (*x != 0 && *y!= 0)
	{
		double z = sqrt(pow(*x,2)+pow(*y,2));
		cout<<z<<endl;

	}
	else cout << "Error " << endl;

	return 0;
}