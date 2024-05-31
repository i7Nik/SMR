
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

