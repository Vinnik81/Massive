#include <iostream>
using namespace std;

#define HOUSE


void main()
{
	setlocale(LC_ALL, "Russian");


#ifdef HOUSE
	int num = 0;
	const int house = 40;
	int kv[house] = { 2, 4, 8, 10, 5, 7, 9, 3, 1, 6, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2, 6, 8, 6, 4, 9, 5, 6, 5, 3, 5, 6, 8, 6, 2, 5, 8, 2, 6, 4 };
	int p_1 = 0, p_2 = 0, p_3 = 0, p_4 = 0;

	//�) �� ���������� ������ �������� ���������� ���������� �������, � ����� �� ������� ����������� �� ����� �����;

	cout << "������� ����� ��������: ";
	for (int i = 0; i < house; i++)
	{
		kv[i];
	}
	cout << "������� ����� ��������: "; cin >> num;
	cout << "���������� ������� �������� � " << num << " : " << kv[num - 1] << endl;
	if ((num - 1) % 2 == 0)
	{
		cout << "���������� ������� �������� ��.� " << num + 1 << " : " << kv[num];
	}
	else
	{
		cout << "���������� ������� �������� ��.� " << num - 1 << " : " << kv[num - 2];
	}
	//�) ���������� ��������� ���������� ������� ��� ������� ��������;
	cout << endl;
	for (int i = 0; i < house; i++)
	{
		if (i >= 0 && i <= 9)
		{
			p_1 += kv[i];
		}
		else if (i >= 10 && i <= 19)
		{
			p_2 += kv[i];
		}
		else if (i >= 20 && i <= 29)
		{
			p_3 += kv[i];
		}
		else if (i >= 30 && i <= 39)
		{
			p_4 += kv[i];
		}
	}
	cout << "���������� ������� ���.� 1 : " << p_1 << endl;
	cout << "���������� ������� ���.� 2 : " << p_2 << endl;
	cout << "���������� ������� ���.� 3 : " << p_3 << endl;
	cout << "���������� ������� ���.� 4 : " << p_4 << endl;

	/*�) ���������� ������ �������, ��� ����� ����������� �����.������� ����� ������� ��������, � �������
		���������� ������ ����� ��������� ���� �������.*/
	cout << "������ ������� � ������������ �������: " << endl;
	for (int i = 0; i < house; i++)
	{
		if (kv[i] > 5)
			cout << "�������� � " << i + 1 << "; " << endl;
	}
#endif // HOUSE

}