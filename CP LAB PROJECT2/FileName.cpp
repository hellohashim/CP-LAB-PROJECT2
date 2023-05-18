#include < iostream >
using namespace std;
int main()
{
	cout << "\033[1m\033[4m\033[92m                                                           DEALS\033[0m\033[0m\n\033[0m" << endl;
	cout << "\033[91m\033[1m\033[4m |                   Deal 1                    |                    Deal 2                     |                     Deal 3                   |\033[0m\033[0m\033[0m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |  change*                                 |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[91m\033[1m\033[4m |                   Deal 4                    |                    Deal 5                     |                     Deal 6                   |\033[0m\033[0m\033[0m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << "\033[33m |                                             |                                               |                                              |\033[33m" << endl;
	cout << endl << endl;
	char choice;
	cout << "\033[91m 1. Deals \033[0m" << endl;
	cout << "\033[91m 2. Custom Order \033[0m" << endl;
	cout << "\033[97m\n Enter your choice : \033[0m";
	cin >> choice;
	switch (choice)
	{
	case'1':
	{
		char deal;
		cout << " Enter the Deal Number : ";
		cin >> deal;
		switch (deal)
		{
		case'1':
		{
			cout << " Price =       ";
			break;
		}
		case'2':
		{
			cout << " Price =       ";
			break;
		}
		case'3':
		{
			cout << " Price =       ";
			break;
		}
		case'4':
		{
			cout << " Price =       ";
			break;
		}
		case'5':
		{
			cout << " Price =       ";
			break;
		}
		case'6':
		{
			cout << " Price =       ";
			break;
		}
		break;
		}
	}
	case'2':
	{
		char choice1;
		cout << "\033[97m Select from options below \033[0m" << endl;
		cout << "\033[33m 1. Starters \033[0m" << endl;
		cout << "\033[33m 2. Entrees    \033[0m" << endl;
		cout << "\033[33m 3. Desserts   \033[0m" << endl;
		cout << "\033[33m 4. Drinks     \033[0m" << endl;
		cout << "\033[97m\n Enter the assigned number : \033[0m";

		cin >> choice1;
		switch (choice1)
		{
		case'1':
		{
			char choice2;
			cout << "\033[35m                                   STARTERS \033[0m" << endl;
			cout << "\033[97m Select from options below \033[0m" << endl;
			cout << "\033[33m 1. Salad \033[0m" << endl;
			cout << "\033[33m 2. Soup \033[0m" << endl;
			cout << "\033[33m 3. Chips and Dips \033[0m" << endl;
			cout << "\033[33m 4. Cheese Fries \033[0m" << endl;
			cout << "\033[33m 5. Chicken Wings \033[0m" << endl;
			cout << "\033[33m 6. Cheese Sticks \033[0m" << endl;
			cout << "\033[33m 7. Pakoras \033[0m" << endl;
			cout << "\033[33m 8. Samosas \033[0m" << endl;
			cout << "\033[97m\n Enter the assigned number : \033[0m";


			cin >> choice2;
		}
		case'2':
			char choice3;
			char choice4;
			cout << "\033[35m                                   ENTREES \033[0m" << endl;
			cout << "\033[97m Select from options below \033[0m" << endl;
			cout << "\033[33m 1.  Pizza \033[0m\n";
			cout << "\033[33m 2.  Burger \033[0m\n";
			cout << "\033[33m 3.  Chicken Pulao \033[0m\n";
			cout << "\033[33m 4.  Chicken Biryani \033[0m\n";
			cout << "\033[33m 5.  Chicken Karahi \033[0m\n";
			cout << "\033[33m 6.  White Chicken Karahi \033[0m\n";
			cout << "\033[33m 7.  Chicken Tikka Karahi \033[0m\n";
			cout << "\033[33m 8.  Chicken Kofta \033[0m\n";
			cout << "\033[33m 9.  Chicken Barbecue \033[0m\n ";
			cout << "\033[33m 10. Chicken Tikka \033[0m\n";
			cout << "\033[33m 11. Chicken Malai Tikka \033[0m\n";
			cout << "\033[33m 12. Chicken Chargha \033[0m\n";
			cout << "\033[33m 13. Chicken Sandwich \033[0m\n ";
			cout << "\033[33m 14. Chicken Wings \033[0m\n";
			cout << "\033[33m 15. Chicken Nuggets \033[0m\n";
			cout << "\033[33m 16. Chicken Roll \033[0m\n";
			cout << "\033[33m 17. Chicken Seekh Kebab\033[0m\n";
			cout << "\033[33m 18. Chicken Chapal Kebab \033[0m\n";
			cout << "\033[97m\n Enter the assigned number : \033[0m";
			cin >> choice3;
			switch (choice3)
			{
			case'1':
			{
				cout << " PIZZA " << endl;
				cout << " 1.  Beef Pizza" << endl;
				cout << " 2.  Mortadella Pizza" << endl;
				cout << " 3.  Cheese & Tomato Pizza" << endl;
				cout << " 4.  Grilled Chicken Pizza" << endl;
				cout << " 5.  BBQ Pizza" << endl;
				cout << " 6.  Smoked Chicken Pizza" << endl;
				cout << " 7.  Pepperoni Pizza" << endl;
				cout << " 8.  Chicken Tikka Pizza" << endl;
				cout << " 9.  Chicken Fajita Pizza" << endl;
				cout << " 10. Chicken Tandoori Pizza" << endl;
				cout << " 12. Vegetable Pizza" << endl;
				cout << " 13. Behari Kebab Pizza" << endl;
				cout << "\033[97m\n Enter the assigned number : \033[0m";
				cin >> choice4;


			}



			}
		}
	}
	}
}
