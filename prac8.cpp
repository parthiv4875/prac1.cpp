#include<iostream>
using namespace std;
int main()
{
	int n,i,fact=1;
	cout<<"ENter the positive No. :"<<endl;
	cin>>n;
	if(n<0)
	{
		cout<<"Error"<<endl;	
	}	
	else
	{
			for(i=1;i<=n;i++)
			{
				fact=fact*i;
			}
				cout<<n<<" "<<"Factorial is:"<<fact<<endl;
	}
	return 0;
}
