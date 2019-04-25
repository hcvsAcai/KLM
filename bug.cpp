# <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	int a1,b1,c1,a2,b2,c2,a3,b3,c3,d;
	cin>>a1>>b1>>c1>>a2>>b2>>c2>>a3>>b3>>c3;
	d=a1*b2*c3+a2*b3*c1+a3*c2*b1-c1*b2*a3-c2*b3*a1-c3*a2*b1;
	

    cout << d;
}
