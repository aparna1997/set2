#include<iostream>
using namespace std;
int main()
{
	int *a,k,n;
	int sum=0;

	cin>>n>>k;
	a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
		for(int i=0;i<k;i++)
		{
			 
			sum=sum+a[i];
			
		}
		cout<<sum;
		
	
	return 0;
}
