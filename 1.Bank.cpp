#include<iostream>
	using namespace std;
	class bank
	{
		string name;
		int acc_no,balance;
	
		public:
		void display();
		void deposit();
		void withdraw();
	
		bank()
	 {
		 name="VED";
		 acc_no=123;
		 balance=50000;
	 }
	};
	
	void bank::display()
	{
		cout<<"Account Holder Name: "<<name<<endl;
		cout<<"Account no: "<<acc_no<<endl;
		cout<<"Balance : "<<balance<<endl;
	}
	void bank::deposit()
	{
		int deposit;
		cout<<"Enter deposited amount: ";
		cin>>deposit;
		balance+=deposit;
	}
	void bank::withdraw()
	{
		int withdraw;
		cout<<"Enter withdrawal amount: ";
		cin>>withdraw;
		balance-=withdraw;
	}
	int main()
	{
		bank b;
		b.display();
		b.deposit();
		b.display();
		b.withdraw();
		b.display();
		return 0;
	}
