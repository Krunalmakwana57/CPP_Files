#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter Value of n : ";
	cin>>n;
	int arr[n];
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		cout<<"Enter Element at ["<<i<<"] : ";
		cin>>arr[i];
		sum += arr[i];
	}
	cout<<"Sum of an Array is : "<<sum;
	return 0;
}