#include<iostream>
using namespace std;


int main(){
	int num;
	do{	cout<<"--Guess The Number Game--"<<endl;
		cout<<"Guess any number from 1 to 100 : ";
		cin>>num;
		if(num<50){
			cout<<"Too low\n";
		}else if(num>50){
			cout<<"Too high\n";
		}else{
			cout<<"You won"<<endl;
		}
	}while(num!=50);
	return 0;
}