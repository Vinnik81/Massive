#include <iostream>
using namespace std;

//#define HOUSE
//#define GRADE
//#define CAR
//#define POV
#define ARR


void main()
{
	setlocale(LC_ALL, "Russian");


#ifdef HOUSE
	int num = 0;
	const int house = 40;
	int kv[house] = { 2, 4, 8, 10, 5, 7, 9, 3, 1, 6, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2, 6, 8, 6, 4, 9, 5, 6, 5, 3, 5, 6, 8, 6, 2, 5, 8, 2, 6, 4 };
	int p_1 = 0, p_2 = 0, p_3 = 0, p_4 = 0;

	//а) по выбранному номеру квартиры определить количество жильцов, а также их соседей проживающих на одном этаже;


	for (int i = 0; i < house; i++)
	{
		kv[i];
	}
	cout << "Введите номер квартиры: "; cin >> num;
	cout << "Количество жильцов квартиры № " << num << " : " << kv[num - 1] << endl;
	if ((num - 1) % 2 == 0)
	{
		cout << "Количество жильцов соседней кв.№ " << num + 1 << " : " << kv[num];
	}
	else
	{
		cout << "Количество жильцов соседней кв.№ " << num - 1 << " : " << kv[num - 2];
	}
	//б) определить суммарное количество жильцов для каждого подъезда;
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
	cout << "Количество жильцов под.№ 1 : " << p_1 << endl;
	cout << "Количество жильцов под.№ 2 : " << p_2 << endl;
	cout << "Количество жильцов под.№ 3 : " << p_3 << endl;
	cout << "Количество жильцов под.№ 4 : " << p_4 << endl;

	/*в) определить номера квартир, где живут многодетные семьи.Условно будем считать таковыми, у которых
		количество членов семьи превышает пять человек.*/
	cout << "Номера квартир с многодетными семьями: " << endl;
	for (int i = 0; i < house; i++)
	{
		if (kv[i] > 5)
			cout << "Квартира № " << i + 1 << "; " << endl;
	}
#endif // HOUSE

#ifdef GRADE
	/*Дана температура воздуха за каждый день января.
Определить:
а) среднюю температуру за месяц;
б) сколько раз температура воздуха опускалась ниже указанной метки*/

	const int n = 31;
	float s = 0;
	int m, k = 0;
	int a[n];
	cout << "Метка >> "; cin >> m;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 50 - 40;
		cout << a[i] << "; ";
		s += a[i];
		if (a[i] < m)
		{
			k++;
		}
	}

	cout << "\nСредняя температура: " << s / n << endl;
	cout << "Опускалась ниже метки: " << k << " раз." << endl;

#endif // GRADE

#ifdef CAR
	/*В массиве хранится информация о стоимости 10 марок автомобилей. Определить сумму наиболее дорогого
автомобиля и узнать его номер.*/


	const int car = 10;
	int arr[car] = { 1, 2, 6, 4, 9, 8, 9, 7, 2, 1 };
	int max = arr[0];
	cout << "Стоимость 10 автомобилей:" << endl;
	for (int i = 0; i < car; i++)
	{
		cout << "Автомабиль " << i + 1 << ": " << arr[i] << " млн.руб." << endl;
		if (max < arr[i]) max = arr[i];
	}
	cout << "Стоимость самого дорогово автомобиля:" << endl;
	for (int i = 0; i < car; i++)
	{
		if (max <= arr[i])
		{
			cout << "Автомобиль " << i + 1 << ": " << max << " млн.руб.; " << endl;
		}

	}
#endif // CAR

#ifdef POV
	/*Написать программу, которая находит в массиве значения, повторяющиеся два и более раз, и показывает
их на экран*/

	const int size = 10;
	int arr[size] = {};
	cout << "Введите значение элементов массива:" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "Повторяющие элементы: " << endl;
	for (int i = 0; i < size; i++)
	{
		if ((arr[i + 1] == arr[i]) || (arr[i - 1] == arr[i]))
		{
			cout << arr[i] << "; ";
		}
	}
#endif // POV

#ifdef ARR


	/*Заполнить два целочисленных массива A[10] и B[10].Сформировать третий массив X[20], элементы которого будут взяты из A и B.*/


	const int AB = 10;
	const int X = 20;
	int a[AB];
	int b[AB];
	int x[X];
	int i = 0;
	int j = 0;
	int k = 0;
	for (int i = 0; i < AB; i++)
	{
		a[i] = rand();
		b[i] = rand();
	}
	cout << "Массив a:" << endl;
	for (i = 0; i < AB; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl << "Массив b:" << endl;
	for (i = 0; i < AB; i++)
	{
		cout << b[i] << "\t";
	}
	cout << endl;
	for (int c = 0; c < X; c++)
	{
		while (j < X)
		{
			(j < AB) ? x[j] = a[j] : x[j] = b[j - i];
			j++;
		}
	}
	cout << "Массив x с последовательным расположением элементов:" << endl;
	for (int c = 0; c < X; c++)
	{
		cout << x[c] << "\t";
	}
	cout << endl;
	for (int c = 0; c < X; c++)
	{
		while (k < X)
		{
			(k % 2 == 0) ? x[k] = a[k / 2] : x[k] = b[(k - 1) / 2];
			k++;
		}
	}
	cout << "Массив x с чередующимся расположением элементов:" << endl;
	for (int c = 0; c < X; c++)
	{
		cout << x[c] << "\t";
	}
	cout << endl;
#endif // ARR

}