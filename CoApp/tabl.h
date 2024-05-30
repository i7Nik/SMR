/*Во входном файле хранится информация о 100 предприятиях города в
виде: название предприятия, число работающих, прибыль. Определить
предприятие с максимальной прибылью с учетом количества работающих
на нем людей*/
#pragma once
#include<string>
#include<iostream>
using namespace std;
class tabl
{
private:
	string name;//название предприятий
	int rab;//кол-во рабочих
	int many;//прибыль предприятия
public:
	string getName();
	void setName(string name);
	int getRab();
	void setRab(int rab);
	int getMany();
	void setMany(int many);
};

