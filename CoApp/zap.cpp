#include"zap.h"

void zap(vector<tabl> pred, int a)
{
	for (int i = 0; i < a; i++)
	{
		string name;
		int rab;
		int many;
		cout << "\nвведите название фирмы: "; cin >> name;pred[i].setName(name);
		cout << "\t\tвведите кол-во сотрудников: "; cin >> rab; pred[i].setRab(rab);
		cout << "\t\tвведите прибыль: "; cin >> many; pred[i].setMany(many);
	}
}
