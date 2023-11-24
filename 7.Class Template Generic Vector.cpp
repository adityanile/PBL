#include <iostream>
using namespace std;
template <class T>
class vect
{
	int size;
	T*v;
public:
	vect(int a)
	{
		size=a;
		v= new T[size];
	}
	void display();
	void create();
	void multiply(int a);
	void update();

};
template <class T>
void vect<T>::create()
{
	cout<<"Enter the value for the vector: "<<endl;
	for(int i=0 ;i <size ;i++)
	{
		cin>>v[i];
	}
}
template <class T>
void vect<T>::display()
{
	cout<<"Displaying the vector: ( ";
for(int i=0 ;i <size ;i++)
		{
			cout<<v[i];
			if(i < size-1)
				cout<<", ";
		}
	cout<<" )\n";
}
template <class T>
void vect<T>::multiply(int a)
{
	for(int i=0 ;i <size ;i++)
		{
			v[i] *=a;
		}
}
template <class T>
void vect<T>::update()
{

	while(1)
	{
		int ch1;
		cout<<"What you wish to do?"<<endl;
		cout<<"1. Update at location \n2. Delete at value \n3. Arrange in ascending order"<<endl;
		cout<<"4. Arrange in descending order \n 5. Exit"<<endl;
		cin>>ch1;
		switch(ch1)
				{
				case 1:
				{
					int loc;
					T val;
					cout<<"Enter the location: ";
					cin>>loc;
					cout<<"Enter the new value: ";
					cin>>val;
					this->v[loc]=val;
					cout<<"Value updated"<<endl;
					cout<<"---------------------------------------------------------\n";
					this->display();
					cout<<"---------------------------------------------------------\n"; //update
				}
					break;

				case 2:
				{
					T val;
					cout<<"Enter the value you want to delete: ";
					cin>>val;
					int index=0;
					while(v[index]!=val)
					{
						if(index<=size)
							index++;
						else
						{
							cout<<"Data not found"<<endl;
							break;
						}
					}
					for(int i = index; i < size; i++)
					{
						T temp=v[i];
						v[i]=v[i+1];
v[i+1]=temp;
					}
					delete &v[size];
					cout<<"---------------------------------------------------------\n";
					this->display();
					cout<<"---------------------------------------------------------\n";
				} // delete
					break;

				case 3:
				{
					int min = 0;
					for(int j = 0; j < size; j++ )
					{
						min=j;
						for(int i = j ;i < size; i++)
						{
							if(v[min]>v[i])
								min=i;
						}
						T temp=v[min];
						v[min]=v[j];
						v[j]=temp;

					}
					cout<<"---------------------------------------------------------\n";
this->display();
					cout<<"---------------------------------------------------------\n";
				}
					//ascending
					break;

				case 4:
				{
					int max = 0;
					for(int j = 0; j < size; j++ )
					{
						max=j;
						for(int i = j+1 ;i < size; i++)
						{
							if(v[max]<v[i])
								max=i;
						}
						T temp=v[max];
						v[max]=v[j];
						v[j]=temp;
					}
					cout<<"---------------------------------------------------------\n";
					this->display();
					cout<<"---------------------------------------------------------\n";
				}//desending
					break;
			case 5: exit(0);

				default: cout<<"Invalid input please try again."<<endl;
				}
		cout<<"____________________________________________________________\n";
	}
}

int main() {
	vect <int>v1(5);
	string space="---------------------------------------------------------\n";
	string us="____________________________________________________________\n";
	while(1)
	{
		int ch;
		cout<<space<<space;
		cout<<"Enter the choice:"<<endl;
		cout<<"1. Create \n2. Display \n3. Multiply by scalar\n4. Modify \n5. Exit"<<endl;
		cin>>ch;
		cout<<space;
		switch(ch)
		{
		case 1: v1.create();
			break;

		case 2: v1.display();
			break;

		case 3:
			{
				int val;
			cout<<"Enter the scalar value: ";
			cin>>val;
			v1.multiply(val);
			}
			break;

		case 4: v1.update();
			break;

		case 5: exit(0);

		default: cout<<"Invalid input please try again."<<endl;
		}
	}
	v1.create();
	v1.display();
	return 0;
}

