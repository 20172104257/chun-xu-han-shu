// chun-xu-han-shu.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CBace//�������麯���Ľг����࣬�����಻�ܴ�������ֻ�ܼ̳�
{
public:
	virtual void test() = 0;//���麯�� 
	virtual void display()
	{
		cout << "����" << endl;
	}
};
class CDervid:public CBace
{
public:
	void test()
	{

	}                                 //�̳�ʱ�Ѻ�����д��
	void display()
	{
		cout << "������" << endl;
	}
};
int main()
{
	CBace *p;
	CDervid obj2;
	p = &obj2;
	p->display();//����ָ�����ָ�����������
	return 0;
}

