#include<bits/stdc++.h>
using namespace std;
class Bank
{
	protected:
		int AtmPin=1557;
		double BankBalance=1000;
};
class User:public Bank
{
	public:
		string BankName="State Bank Of India";
		string IFSC="SBIN0001";
		long int AccountNum=2343123221;
		
		void Detail()
		{
			int Choice,ATM,AddMoney,RemoveMoney;
			string Retun;
			string Continue;
			cout<<"1.Deposite The Money\n2.Withdraw The Money\n3.Check Balance"<<endl;
			cout<<"Enter Your Choice : ";
			cin>>Choice;
			switch(Choice)
			{
				case 1:cout<<"Enter Your Pin : ";
						cin>>ATM;
						if(ATM==AtmPin){
							cout<<"Welcome User..\n"<<"How Much Money You Want To Deposite : ";
							cin>>AddMoney;
							BankBalance+=AddMoney;
							cout<<"You Have Total Balnce of :"<<BankBalance;
						}else{
							cout<<"Sorry You Entered Wrong Pin"<<endl;
						}
						break;
				case 2:cout<<"Enter Your Pin :";
				cin>>ATM;
				if(ATM==AtmPin){
							
							cout<<"Welcome User..\n"<<"How Much Money You Want To Withdraw : ";
							cin>>RemoveMoney;
							if(RemoveMoney>BankBalance){
								cout<<"You Have Insufficient Balance\n";
							}else{
								BankBalance=BankBalance-RemoveMoney;
								cout<<"You Have Withdraw "<<RemoveMoney<<" Rupees"<<endl;
								cout<<"You Have Total Balnce of :"<<BankBalance;
							}
							
						}else{
							cout<<"Sorry You Entered Wrong Pin"<<endl;
						}
						break;
						
				case 3:cout<<"Enter Your Pin :";
				cin>>ATM;
				if(ATM==AtmPin){
					cout<<"Welcome User\n"<<"You Total Balance is :"<<BankBalance;
				}
				break;
				default:cout<<"You Have Entered Wrong Choice"<<endl;
			}
			cout<<"\nDo you want to continue :";
			cin>>Retun;
			if(Retun=="Yes" || Retun=="yes" || Retun=="y" || Retun=="YES"){
				return Detail();
			}else{
				cout<<"\nThank You.. :)"<<endl;
			}
		}
};
int main(){
	
	User Obj;
	Obj.Detail();
	return 0;
}