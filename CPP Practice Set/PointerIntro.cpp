#include<iostream>
using namespace std;

void fun(int *p)
{
	*p = *p + 10;
}

int main()
{
	int x = 10;
	fun(&x);
	cout<<x;
	return 0;
}