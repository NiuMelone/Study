#include <iostream>
double jc(int n);

int main()
{
	using namespace std;
	int a;
	double res;
	cout<<"Please input a number(q to quit): ";
	while(cin>>a)
	{
		if(a<0)
			cout<<"Bad input!"<<endl;
		else
		{
			res=jc(a);
			cout<<res<<endl;
		}	
		cout<<"Please input a number(q to quit): ";
	}
	
	return 0;
}


double jc(int n)
{
	if(n==0)
		return 1;
	return (n*jc(n-1));
}