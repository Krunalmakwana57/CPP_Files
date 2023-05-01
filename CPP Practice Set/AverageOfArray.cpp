#include<iostream>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	cout<<"Enter Value of n : ";
	cin>>n;
	int arr[n];
	
	for(int i = 0; i < n; i++)
	{
		cout<<"Enter element at ["<<i<<"] : ";
		cin>>arr[i];
		sum += arr[i];
	}
	
	cout<<"Average of an Array is : "<<sum/n<<endl;
	
	
	return 0;
}