// In the name of God !
//Comparison
//V3.0
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int num, i=1,Max=-10000000;
	cout << "Enter two numbers :" << endl;
	while (i<=2)
	{
		cin >> num;
		if (num > Max)
			Max = num;
		i++;
	}
	cout << Max << " is more ! "<< endl;
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\