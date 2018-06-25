// chun-xu-han-shu.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CBace//包含纯虚函数的叫抽象类，抽象类不能创建对象只能继承
{
public:
	virtual void test() = 0;//纯虚函数 
	virtual void display()
	{
		cout << "基类" << endl;
	}
};
class CDervid:public CBace
{
public:
	void test()
	{

	}                                 //继承时把函数体写上
	void display()
	{
		cout << "派生类" << endl;
	}
};
int main()
{
	CBace *p;
	CDervid obj2;
	p = &obj2;
	p->display();//基类指针可以指向派生类对象
	return 0;
}

