#include <iostream>

using namespace std;

bool checkIfSorted(int array[], int size)
{
	int startedMin = array[0];
	int startedMax = array[size-1];
	int min=array[0];
	int max=array[size-1];

	for (int i = 0; i < size; i++)
	{
		if (min > array[i])
			min = array[i];
		if (max < array[i])
			max = array[i];
	}
	if (startedMin == min && startedMax == max)
		return true;
	else return false;
}

void bubbleSort(int array[], int size)
{
	int changes;
	int p;
	for (int i = 0; i < (size - 1); i++)
	{

		changes = 0;

		for (int j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				p = array[j];
				array[j] = array[j + 1];
				array[j + 1] = p;
				changes++;
			}

		}
		if (changes == 0) break;

	}
}

void showArray(int array[], int size)
{
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "[" << array[i] << "] ";
	}
	cout << endl;
}

int main()
{
	const int size = 10;
	int array[size]{ 999,2,4,6,323,643,777,888,999,1000 };
	bool sorted;

	sorted = checkIfSorted(array, size);

	if (sorted == true)
		cout << "The array is sorted";
	else
	{
		cout << "The array is no sorted";
		bubbleSort(array, size);
		showArray(array, size);
		cout << endl << "But now it is" << endl;
	}	
}