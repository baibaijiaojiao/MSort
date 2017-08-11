#pragma once

class CMyVector {
public:

	/*explicit*/ CMyVector(int ix = 0, int iy = 0, int iz = 0); //构造函数
	CMyVector(const CMyVector & other); //拷贝构造函数
	~CMyVector(); //析构函数
	CMyVector& operator=(const CMyVector &other);

	//+操作符重载，注意：返回值必须以值传递的方式， 引用会导致传递局部变量的引用
	//一种+号重载的方式 ，默认有个this 成员参数 ：a + b, 其中a就为this参数，b为 other参数
	CMyVector operator+ (const CMyVector & other);

	//友元 重载 +号 操作， 友元并不是 类成员函数， 只是允许调用类私有成员
	//这种重载，可以允许 隐式转换， 
//	friend CMyVector operator+ (const CMyVector & other1, const CMyVector & other2);
	//友元 重载 +号 操作， 友元并不是 类成员函数， 只是需要调用类私有成员
	friend CMyVector operator+(int n, const CMyVector & other);

	void display();
private:
	int x, y, z;
};


class Test
{
public:
	Test(int a);  //会引起隐式转换  如：  Test a = 10;  会将10转换为test临时变量 Test t(10); if (t.isSame(10))

	bool isSame(Test other);

	Test& operator=(const Test &other);

private:
	int m_val;
};