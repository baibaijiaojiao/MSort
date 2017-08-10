#pragma once

class CMyVector {
public:
	CMyVector(int ix = 0, int iy = 0, int iz = 0); //���캯��

	CMyVector(const CMyVector & other); //�������캯��
	~CMyVector(); //��������
	CMyVector& operator=(const CMyVector &other);

	//һ��+�����صķ�ʽ ��Ĭ���и�this ��Ա���� ��a + b, ����a��Ϊthis������bΪ other����
	CMyVector operator+ (const CMyVector & other);

	//��Ԫ ���� +�� ������ ��Ԫ������ ���Ա������ ֻ�����������˽�г�Ա
	//�������أ��������� ��ʽת���� 
	friend CMyVector operator+ (const CMyVector & other1, const CMyVector & other2);
	//��Ԫ ���� +�� ������ ��Ԫ������ ���Ա������ ֻ����Ҫ������˽�г�Ա
	friend CMyVector operator+(int n, const CMyVector & other);

	void display();

private:
	int x, y, z;

};


class Test
{
public:
	Test(int a);  //��������ʽת��  �磺  Test a = 10;  �Ὣ10ת��Ϊtest��ʱ���� Test t(10); if (t.isSame(10))

	bool isSame(Test other);

	Test& operator=(const Test &other);

private:
	int m_val;
};