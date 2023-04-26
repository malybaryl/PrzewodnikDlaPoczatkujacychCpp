#include <iostream>

using namespace std;

int getNumbers()
{
	int number;
	cin >> number;
	return number;
}

int findMin(int array[], int size)
{
	int min = array[0];
	for (int i = 0; i < size; i++)
	{
		if (min > array[i])
		{
			min = array[i];
		}
	}
	return min;
}

int findMax(int array[], int size)
{
	int max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
	}
	return max;
}

int average(int array[], int size)
{
	int sum = 0;
	int average;
	for (int i = 0; i < size; i++)
	{
		sum = sum + array[i];
	}
	average = sum / size+1;
	return average;
}

void showArray(int array[], int size)
{
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "[" << array[i] << "]";
	}
	cout << endl;
}
int main()
{
	const int size = 49;
	int array[size];
	int min;
	int max;
	int average_;

	cout << "Enter " << size+1 << " numbers; " << endl;
	for (int i = 0; i < size; i++)
	{
		array[i] = getNumbers();
	}

	min = findMin(array, size);
	cout << "Min= " << min << endl;
	max = findMax(array, size);
	cout << "Min= " << max << endl;
	average_ = average(array,size);
	cout << "Average= " << average << endl;
	showArray(array, size);
}