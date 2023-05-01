#include<iostream>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	cout<<"Enter Value of n : ";
	cin>>n;
	int arr[n];
	int max = 1;
	for(int i = 0; i < n; i++)
	{
		cout<<"Enter value at ["<<i<<"] : ";
		cin>>arr[i];
		if(arr[i] > arr[i+1])
		{
			max = arr[i];
		}else{
			max = arr[i+1];
		}
	}
	cout<<"Max in an Array is : "<<max;
	
	return 0;
}