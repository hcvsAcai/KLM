#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int choose=0;
int a1=0,b1=0,c1=0,d1=0,a2=0,b2=0,c2=0,d2=0,a3=0,b3=0,c3=0,d3=0;
int d=0,dx=0,dy=0,dz=0;
int ddx=0,ddy=0,ddz=0;
float t,orgina,orginb;
//=================================
void TWO_for_ONE();//運算d,dx,dy 
void THREE_for_ONE();//運算d,dx,dy,dz
void TWO_for_ONE_open();//輸入二元一次方程式組的係數 
void THREE_for_ONE_open();//輸入三元一次方程式組的係數
void Judge_TWO_for_ONE();//判斷是否為無解或無限多組解 
void Judge_THREE_for_ONE();//判斷是否為無解或無限多組解
int main() 
{
	system("color A");
	printf("方程式為二元一次方程式組請輸入代碼(1)\n方程式為三元一次方程式組請輸入代碼(2)\n");
	scanf("%d",&choose);
	switch(choose)
	{
	case 1:
		TWO_for_ONE_open();
		TWO_for_ONE();
		Judge_TWO_for_ONE();
		break;
	case 2:
		THREE_for_ONE_open();
		THREE_for_ONE();
		Judge_THREE_for_ONE();
		break;
	}
	return 0;
}
void TWO_for_ONE_open()
{
	printf("{a1X+b1Y=c1\n{a2X+b2Y=c2\n");
	printf("請輸入第一式的a1係數: ");
	scanf("%d",&a1);
	printf("請輸入第一式的b1係數: ");
	scanf("%d",&b1);
	printf("請輸入第一式的c1係數: ");
	scanf("%d",&c1);
	printf("請輸入第二式的a2係數: ");
	scanf("%d",&a2);
	printf("請輸入第二式的b2係數: ");
	scanf("%d",&b2);
	printf("請輸入第二式的c2係數: ");
	scanf("%d",&c2);	
}
void TWO_for_ONE()
{
	d=a1*b2-a2*b1;
	dy=a1*c2-a2*c1;
	dx=c1*b2-b1*c2;
	printf("△=%d\n",d);
	printf("△x=%d\n",dx);
	printf("△y=%d\n",dy);
	orgina = dx;
	orginb = d;
	while(d != 0)
	{
		t = dx%d;
		dx = d;
		d = t;
	}
	printf("(x,y)=(%.f/%.f,",orgina/dx,orginb/dx);
	d=a1*b2-a2*b1;
	orgina = dy;
	orginb = d;
	while(d != 0)
	{
		t = dx%d;
		dy = d;
		d = t;
	}
	printf("%.f/%.f)\n",orgina/dy,orginb/dy);
}
void Judge_TWO_for_ONE()
{
	d=a1*b2-a2*b1;
	if(d==0&&dx==0&&dy==0)
		{
			printf("無限多組解!");
		}
	if(d==0&&(dx!=0||dy!=0))
		{
			printf("無解!");
		}
}
void THREE_for_ONE_open()
{
	printf("{a1X+b1Y+c1Z=d1\n{a2X+b2Y+c2Z=d2\n{a3X+b3Y+c3Z=d3\n");
	printf("請輸入第一式的a1係數: ");
	scanf("%d",&a1);
	printf("請輸入第一式的b1係數: ");
	scanf("%d",&b1);
	printf("請輸入第一式的c1係數: ");
	scanf("%d",&c1);
	printf("請輸入第一式的d1係數: ");
	scanf("%d",&d1);
	printf("請輸入第二式的a2係數: ");
	scanf("%d",&a2);
	printf("請輸入第二式的b2係數: ");
	scanf("%d",&b2);
	printf("請輸入第二式的c2係數: ");
	scanf("%d",&c2);
	printf("請輸入第二式的d2係數: ");
	scanf("%d",&d2);
	printf("請輸入第二式的a3係數: ");
	scanf("%d",&a3);
	printf("請輸入第二式的b3係數: ");
	scanf("%d",&b3);
	printf("請輸入第二式的c3係數: ");
	scanf("%d",&c3);
	printf("請輸入第二式的d3係數: ");
	scanf("%d",&d3);
}
void THREE_for_ONE()
{
	d=a1*b2*c3+a2*b3*c1+a3*c2*b1-c1*b2*a3-c2*b3*a1-c3*a2*b1;
	dx=d1*b2*c3+d2*b3*c1+d3*c2*b1-c1*b2*d3-c2*b3*d1-c3*d2*b1;
	dy=a1*d2*c3+a2*d3*c1+a3*c2*d1-c1*d2*a3-c2*d3*a1-c3*a2*d1;
	dz=a1*b2*d3+a2*b3*d1+a3*d2*b1-d1*b2*a3-d2*b3*a1-d3*a2*b1;
	printf("△=%d\n",d);
	printf("△x=%d\n",dx);
	printf("△y=%d\n",dy);
	printf("△z=%d\n",dz);	
	orgina = dx;
	orginb = d;
	while(d != 0)
	{
		t = dx%d;
		dx = d;
		d = t;
	}
	printf("(x,y,z)=(%.f/%.f,",orgina/dx,orginb/dx);
	d=a1*b2*c3+a2*b3*c1+a3*c2*b1-c1*b2*a3-c2*b3*a1-c3*a2*b1;
	orgina = dy;
	orginb = d;
	while(d != 0)
	{
		t = dy%d;
		dy = d;
		d = t;
	}
	printf("%.f/%.f,",orgina/dy,orginb/dy);
	d=a1*b2*c3+a2*b3*c1+a3*c2*b1-c1*b2*a3-c2*b3*a1-c3*a2*b1;
	orgina = dz;
	orginb = d;
	while(d != 0)
	{
		t = dz%d;
		dz = d;
		d = t;
	}
	printf("%.f/%.f)\n",orgina/dz,orginb/dz);
}
void Judge_THREE_for_ONE()
{
	d=a1*b2*c3+a2*b3*c1+a3*c2*b1-c1*b2*a3-c2*b3*a1-c3*a2*b1;
	if(d==0&&dx==0&&dy==0&&dz==0)
		{
			printf("無限多組解!");
		}
	if(d==0&&(dx!=0||dy!=0||dz!=0))
		{
			printf("無解!");
		}
}
