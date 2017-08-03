#include <iostream>

void swap(int i, int j, int a[])
{
	int temp = a[j];
	a[j] = a[i];
	a[i] = temp;
}

void sort1(int a[], int n)  //√∞≈›≈≈–Ú
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				swap(j, j - 1, a);
			}
		}
	}
}


void sort2(int a[], int n)  //À´œÚ√∞≈›≈≈–Ú
{
	int left = 0, right = n - 1;
	while (left < right)
	{
		for (int i = left; i < right - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(i, i + 1, a);
			}
		}
		right--;

		for (int i = right; i > left; i--)
		{
			if (a[i] < a[i - 1])
			{
				swap(i, i - 1, a);
			}
		}
		left++;
	}
}

int BinarySearch(int a[], int n, int Value)
{
	int left = 0, right = n - 1;
	int mid = 0;

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (Value < a[mid])
		{
			right = mid - 1;
		}
		else if (Value > a[mid])
		{
			left = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;


}


int main()
{

	int array[5] = { 3,1,5, 2,4 };

	sort2(array, 5);

	for (int i = 0; i < 5; i++)
	{
		std::cout << array[i] << "\t";
	}
	std::cout << "\n";
	std::cout << BinarySearch(array, 5, 6) << std::endl;
	system("pause");
	return -1;
}