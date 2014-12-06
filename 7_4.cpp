#include <iostream>
long double probability(int a,int b);

int main()
{
	using namespace std;
	int total=47,choices=5;
	long double res;
	res=probability(total,choices);
	cout<<"the choices is "<<res<<endl;
	return 0;
} 

long double probability(int a,int b)
{
	long double temp=1.0;
	int x=27;
	for (int n=a,m=b;b>0;a--,b--)
	{
		temp=temp*a/b;
	}
	temp=temp*27;
	return temp;
}
