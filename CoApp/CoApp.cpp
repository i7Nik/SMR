#include <iostream>
#include "tabl.h"
#include <Windows.h>
#include<vector>//динамический векторный массив;
int main()
{
	SetConsoleCP(1251);//для корректной локализации
	SetConsoleOutputCP(1251);
	int a;
	cout << "Введите кол-во предприятий для заполнения"; cin >> a;
	vector<tabl>pred(a);
 

}