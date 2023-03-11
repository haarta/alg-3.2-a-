#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int n;
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	cout << "Введите количество элементов массива" << endl;
	cin >> n;
	int* mas = new int[n];
	int k = 0;

	cout << "Массив А:" << endl;
	for (int i = 0; i < n; i++)
	{
		mas[i] = (rand() %20) - 10;
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << "//////////////////" << endl;
	cout << "Массив Б:" << endl;

	for (int i = 0; i < n; i++) {
		if (mas[i] < 0 && mas[i] % 2 == 0)
		{
			k++;
		}
	}

	int* masb = new int[k];
	int j = 0;

	for (int i = 0; i < n; i++) 
	{
		if (mas[i] < 0 && mas[i] % 2 == 0)
		{
			masb[j] = mas[i];
			j++;
		}
	}

	for (int i = 0; i < k; i++)
	{
		cout << masb[i] << " ";
	}

	delete[] mas;
	delete[] masb;
	return 0;
}