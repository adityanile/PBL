#include <iostream>
using namespace std;

class Set
{
    int total[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int pizza[5] = {1, 5, 8, 2, 3};
    int burger[5] = {2, 4, 6, 8, 7};

public:
    void only_pizza();
    void only_burger();
    void both();
    void neither();
};
void Set::neither()
{
    int neitherCount = 0;
    for (int i = 0; i < 10; i++)
    {
        int likesPizza = 0;
        int likesBurger = 0;

        for (int j = 0; j < 5; j++)
        {
            if (total[i] == pizza[j])
            {
                likesPizza = 1;
                break;
            }
        }

        for (int j = 0; j < 5; j++)
        {
    if (total[i] == burger[j])
            {
                likesBurger = 1;
                break;
            }
        }

        if (!likesPizza && !likesBurger)
        {
            cout << total[i] << " ";
            neitherCount++;
        }
    }

    cout << "\nNumber of customers who like neither pizza nor burger: " << neitherCount << endl;
}
void Set::both()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            if (pizza[i] == burger[j])
                cout << pizza[i] << " ";
    }
    cout<<endl;
}
void Set::only_burger()
{
    for (int j = 0; j < 5; j++)
    {
        int flag = 0;
        for (int i = 0; i < 5; i++)
        {
            if (pizza[i] == burger[j])
                flag = 1;
        }
       if (flag == 0)
            cout << burger[j] <<" ";
    }
    cout<<endl;
}
void Set::only_pizza()
{
    for (int i = 0; i < 5; i++)
    {
        int flag = 0;
        for (int j = 0; j < 5; j++)
        {

            if (pizza[i] == burger[j])
                flag = 1;
        }
        if (flag == 0)
            cout << pizza[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    Set s;
    int ch;
    string space = "---------------------------------------------------------\n";
    cout <<space<<space<< "\n\t\tWelcome to Data Analytics" << endl;
    while (1)
    {
        cout <<space<< "Enter the data you want for : " << endl;
        cout << "1. Only Pizza \n2. Only burger \n3. Both Pizza and Burger \n4. Like either Pizza or Burger or Both \n5. No. of customers who like neither Pizza nor Burger \n6. Exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
       s.only_pizza();
            break;

        case 2:
            s.only_burger();
            break;

        case 3:
            s.both();
            break;

        case 4:
			{
				s.only_pizza();
				s.only_burger();
				s.both();
			}
            break;

        case 5:
            s.neither();
            break;

        case 6: exit(0);
        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
    return 0;
}
