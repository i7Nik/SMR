#include"zap.h"

void zap(vector<tabl> pred, int a)
{
	for (int i = 0; i < a; i++)
	{
		string name;
		int rab;
		int many;
		cout << "\n������� �������� �����: "; cin >> name;pred[i].setName(name);
		cout << "\t\t������� ���-�� �����������: "; cin >> rab; pred[i].setRab(rab);
		cout << "\t\t������� �������: "; cin >> many; pred[i].setMany(many);
	}
}
