#include <iostream>
const int MAX=10;

int Fill_array(double num[],int n);
void Show_array(double num[],int n);
void Reverse_array(double num[],int n);



int main()
{
	using namespace std;
	double ar[MAX];
	int size=Fill_array(ar,MAX);
	Show_array(ar,size);
	Reverse_array(ar,size);
	Show_array(ar,size);

	return 0;
}


int Fill_array(double num[],int n)
{
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < n; ++i)
	{
		cout<<"Enter the number "<<i+1<<": ";
		cin>>temp;
		if (!cin)
		{
			cin.clear();
			while(cin.get()!='\n')
				continue;
			cout<<"Bad input!"<<endl;
			break;
		}

		num[i]=temp;
	}
	return i;
}

void Show_array(double num[],int n)
{
	using namespace std;
	cout<<"Number in the array is: "<<endl;
	for (int i = 0; i < n; ++i)
	{
		cout<<num[i]<<"  ";
	}
	cout<<endl;
}

void Reverse_array(double num[],int n)
{
	double temp;
	for (int i = 0; i < (n/2+1); ++i)
	{
		temp=num[i];
		num[i]=num[n-i-1];
		num[n-i-1]=temp;
	}
}
