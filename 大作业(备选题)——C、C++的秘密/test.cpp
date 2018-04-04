#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void zheng()//整型的实现
{
	char a='+';
	int  b = 1;
	short c =2;
	long d = 3;
	unsigned e = 4;
	long long f = 5;
	
}

void fudian()//浮点型-存储、拷贝、运算
{
	float  a = 5.20,b = 13.14;
	float c;
	c = a;
	c = a + b;
}

void lxzh()//类型转换
{
	int a = 1;
	unsigned b = 2;
	long c = 3;
	float d = 5.2;

	a = (int)b;		//	无符号整数--有符号整数
	b = (unsigned)a;//	有符号整数--无符号整数

	a = (int) c;	//大整型--小整型
	c = (long) a;	//小整型--大整型

	a = (int) d;	//浮点--整型
	d = (float) a;  //整型--浮点

}

int fenzhi()//分支结构
{
	int a = 1;
	if(a) return a;
	else  return 0;
}

int xunhuan()//循环结构
{
	int i,sum=0;
	for(i=0;i<3;i++)
		sum += i;
	return sum;
}

void zhizhen_swap(int *p, int *q)//指针
{
	int t = *p;
	*p = *q;
	*q = t;
}
void yinyong_swap(int &p, int &q)//引用
{
	int t = p;
	p = q;
	q = t;
}
class test
{
	public:
		void func(){printf("Hello World\n");}
};
void class_test()
{
	test* ptest = NULL;
	ptest->func();
}
int main(){
	int test;
	int a=1,b=2;
	int *p=&a, *q=&b;
	int &m=a, &n=b;
	zheng();
	fudian();
	lxzh();
	test = fenzhi();
	test = xunhuan();
	zhizhen_swap(p,q);
	yinyong_swap(m,n);
	class_test();
}

