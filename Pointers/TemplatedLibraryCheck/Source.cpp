#include<iostream>
#include"FillRand.h"
#include"Memory.h"
#include"Print.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
}