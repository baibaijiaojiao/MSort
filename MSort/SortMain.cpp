#include <iostream>
#include "MyVector.h"
void swap(int i, int j, int a[])
{
	int temp = a[j];
	a[j] = a[i];
	a[i] = temp;
}

void sort1(int a[], int n)  //冒泡排序
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


void sort2(int a[], int n)  //双向冒泡排序
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

// 	int array[5] = { 3,1,5, 2,4 };
// 
// 	sort2(array, 5);
// 
// 	for (int i = 0; i < 5; i++)
// 	{
// 		std::cout << array[i] << "\t";
// 	}
// 	std::cout << "\n";
// 	std::cout << BinarySearch(array, 5, 6) << std::endl;

// 	CMyVector a(1, 2, 3);
// 	CMyVector b(3, 2, 1);
// 
// 	CMyVector c = a + b;  // a + b 中，a作为调用对象， b作为参数。
// 	/*a = a + 1.1;*/

	CMyVector d;
	d = 2.0;
	d = d + 3.0;
	d = 5.0 + d; //必须 友元 重载 operator+ 操作
// 	c.display();
// 	a.display();

	Test t(10);
	if(t.isSame(10)) //该语句将返回true , 发生了隐试转换
	{
		std::cout << "OK" << std::endl;
	}
	Test tt = 10;  //调的是构造函数， 没有调用 operater=
	tt = 5;  //调用的  operater= 
// 	Test tt(2);
// 	tt = 11;
	system("pause");
	return -1;
}