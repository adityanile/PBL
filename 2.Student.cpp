#include <iostream>
	using namespace std;
	static int count=0;
	class student
	{
		string name;
		int roll;
		string class1;
		string div;
		string dob;
		string blood_grp;
		string address;
		long long phone_no;
	public:
		student();

		void insert();
		void display();
		static inline int funtion();

	};
	static int funtion()
	{
		return count;
	}
	student::student()
	{
			name="a";
			roll= 0;
			class1= "a";
			div="a";
			dob="a";
			blood_grp="-";
			address="-";
			phone_no= 0;
	}
	void student ::display()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Roll no. : "<<roll<<endl;
		cout<<"Class: "<<class1<<endl;
		cout<<"Divisions: "<<div<<endl;
		cout<<"Date of Birth: "<<dob<<endl;
		cout<<"Blood Group: "<<blood_grp<<endl;
		cout<<"Address: "<<address<<endl;
		cout<<"Phone number: "<<phone_no<<endl;
	}
	void student ::insert()
	{
		cout<<"Name: "<<endl;
		cin>>name;
		cout<<"Roll no. : "<<endl;
		cin>>roll;
		cout<<"Class: "<<endl;
		cin>>class1;
		cout<<"Divisions: "<<endl;
		cin>>div;
		cout<<"Date of Birth: "<<endl;
		cin>>dob;
		cout<<"Blood Group: "<<endl;
		cin>>blood_grp;
		cout<<"Address: "<<endl;
		cin>>address;
		cout<<"Phone number: "<<endl;
		cin>>phone_no;
	}
	int main()
	{
		student s[2];
		while(1)
		{
			int ch=0;
			cout<<"What do you want to do ?"<<endl<<"1.Insert new data "<<endl<<"2. Display"<<endl<<"3. Exit"<<endl;
			cin>>ch;
			switch(ch)
			{
				case 1:
					for(int i=0;i<2;i++)
					{
						s[i].insert();
						cout<<endl;
						count++;
					}
					break;
				case 2:
					for(int j=0;j<2;j++)
					{
						s[j].display();
						cout<<endl;
					}
					break;
				case 3:
					exit(0);
				default:
					cout<<"You entered invalid input!!"<<endl;
			}
			int cnt=funtion();
			cout<<"Count: "<<cnt<<endl<<endl;

		}
		return 0;
	}


