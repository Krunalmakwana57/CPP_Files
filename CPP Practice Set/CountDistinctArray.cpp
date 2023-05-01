#include<iostream>
using namespace std;

int countDistinct(int a[],int n)
{
	int count = 0;
	int isDistinct = 1;
	for(int i = 0; i < n; i++)
	{
		isDistinct = 1;
		for(int j = i-1; j >= 0; j--)
		{
			if(a[i] == a[j])
			{
				isDistinct = 0;
				break;
			}
		}
		if(isDistinct == 1)
		{
			count ++;
		}
	}
	return count;
}

int main()
{	
	int n;
	cout<<"Enter Value of n : ";
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cout<<"Enter Element : ";
		cin>>a[i];
	}
	cout<<countDistinct(a,n);
	return 0;
}