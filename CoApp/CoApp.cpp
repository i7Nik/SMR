/*Во входном файле хранится информация о 100 предприятиях города в
виде: название предприятия, число работающих, прибыль. Определить
предприятие с максимальной прибылью с учетом количества работающих
на нем людей*/
#include <iostream>
#include "tabl.h"
#include <Windows.h>
#include <vector>	//динамический векторный массив;
#include "zap.h"	//модуль для функции заполнения
#include "show.h"
int main()
{
	SetConsoleCP(1251);//для корректной локализации
	SetConsoleOutputCP(1251);
	int a;
	cout << "Введите кол-во предприятий для заполнения:\t"; cin >> a;
	vector<tabl>pred(a);
	zap(pred, a);
	show(pred, a);
}