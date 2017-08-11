#include "MyVector.h"
#include <iostream>

using namespace std;


CMyVector::CMyVector(int ix, int iy, int iz) : x(ix), y(iy), z(iz)
{
	cout << "构造函数 CMyVector: x = " << x << "\t y = " << y << "\t z = " << z << endl;
}


CMyVector::CMyVector(const CMyVector & other)
{
	x = other.x;
	y = other.y;
	z = other.z;
	cout << "拷贝构造函数 CMyVector: x = " << x << "\t y = " << y << "\t z = " << z << endl;
}


CMyVector::~CMyVector()
{
	cout << "析构函数 ~CMyVector: x = " << x << "\t y = " << y << "\t z = " << z << endl;
}

CMyVector& CMyVector::operator=(const CMyVector &other)
{
	if (this != &other)
	{
		x = other.x;
		y = other.y;
		z = other.z;
	}
	cout << "赋值函数 operator=: x = " << x << "\t y = " << y << "\t z = " << z << endl;
	return *this;
}

CMyVector CMyVector::operator+(const CMyVector & other)
{
	CMyVector v1;
	v1.x = x + other.x;
	v1.y = y + other.y;
	v1.z = z + other.z;
	cout << "重载操作符 operator+: x = " << v1.x << "\t y = " << v1.y << "\t z = " << v1.z << endl;
	return v1;
}

// CMyVector operator+ (const CMyVector & other1, const CMyVector & other2)
// {
// 	CMyVector v1;
// 	v1.x = other1.x + other2.x;
// 	v1.y = other1.y + other2.y;
// 	v1.z = other1.z + other2.z;
// 	cout << "友元1 重载操作符 operator+: x = " << other1.x << "\t y = " << other1.y << "\t z = " << other1.z << endl;
// 	return v1;
// }

CMyVector operator+(int n, const CMyVector & other)
{
	CMyVector v1;
	v1.x = n + other.x;
	v1.y = n + other.y;
	v1.z = n + other.z;
	cout << "友元2 重载操作符 operator+: x = " << v1.x << "\t y = " << v1.y << "\t z = " << v1.z << endl;
	return v1;
}

void CMyVector::display()
{
	cout << "x: " << x << "\t y: " << y << "\t z: " << z << endl;
}

Test::Test(int a)
{
	m_val = a;
}

bool Test::isSame(Test other)
{
	return m_val == other.m_val;
}

Test& Test::operator=(const Test &other)
{
	if (this != &other)
	{
		m_val = other.m_val;
	}
	
	return *this;
}
