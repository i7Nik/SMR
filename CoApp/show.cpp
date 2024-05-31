#include "show.h"
#include<iomanip>
void show(vector<tabl> pred, int a)
{
	cout << setw(25) << "Название предприятия" << setw(5) << "раб:" << setw(7) << "приб:" << endl;
	for (int i = 0; i < a; i++) 
	{
		cout << setw(25) << pred[i].getName() << setw(5) << pred[i].getRab() << setw(7) << pred[i].getMany()<<endl;
	}
}
