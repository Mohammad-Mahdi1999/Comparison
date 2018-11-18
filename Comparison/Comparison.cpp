// In the name of God !
//Comparison
//V2.0
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int num, i,Max=-100000;
	cout << "Enter two numbers :" << endl;
	for (i = 1; i <= 2; i++)
	{
		cin >> num;
			if (num > Max)
		Max = num;
	}
	cout << Max << " is more ! "<< endl;
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\