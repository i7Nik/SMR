#include "show.h"
#include<iomanip>
void show(vector<tabl> pred, int a)
{
	cout << setw(25) << "�������� �����������" << setw(5) << "���:" << setw(7) << "����:" << endl;
	for (int i = 0; i < a; i++) 
	{
		cout << setw(25) << pred[i].getName() << setw(5) << pred[i].getRab() << setw(7) << pred[i].getMany()<<endl;
	}
}
