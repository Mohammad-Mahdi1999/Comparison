// In the name of God !
//Comparison
//V1.7
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int num[50], i=0,Max;
	cout << "Enter two numbers :" << endl;
	while (i<2)
	{
		cin >> num[i];
		i++;
	}
	Max = num[0];
	for (i=0;i<2;i++)
		if (num[i] > Max)
			Max = num[i];
	cout << Max << " is more ! "<< endl;
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\