#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define NUM 20

struct st{
	char name[20];
	unsigned age;
	unsigned id;
};

class hit_st{
public:
    hit_st():age(18),id(20171212),room(601){strcpy(name,"hit");};
	~hit_st(){printf("see you again,bye....\n");}
    void sayhello(){printf("\n%s says hello to you\n",name);}
private:
	char name[20];
	unsigned age;
	unsigned id;
	unsigned room;
};
void printst(struct st &me)
{
	printf("\nid=%d  name=%s  age=%d", me.id,me.name,me.age);

}

int sum(int a, int b);
int S = 2;
struct st  ics_me;
int main(){
	char string[NUM];
	char ca = '1';
	char strin[20] = { '1' };
	int intg = S,a=1,b=2;
	float f = 1.1;
	double d = 1.2;
	hit_st hitSt;


	S=sum(a, b);
	strcpy(ics_me.name,"no-name");
	ics_me.id = 2007102;
	ics_me.age = 18;


	printst(ics_me);


	hitSt.sayhello();
}
int sum(int a, int b){
	int c;
	c = a + b;
	return c;
}
