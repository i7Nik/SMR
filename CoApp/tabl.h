/*�� ������� ����� �������� ���������� � 100 ������������ ������ �
����: �������� �����������, ����� ����������, �������. ����������
����������� � ������������ �������� � ������ ���������� ����������
�� ��� �����*/
#pragma once
#include<string>
#include<iostream>
using namespace std;
class tabl
{
private:
	string name;//�������� �����������
	int rab;//���-�� �������
	int many;//������� �����������
public:
	string getName();
	void setName(string name);
	int getRab();
	void setRab(int rab);
	int getMany();
	void setMany(int many);
};

