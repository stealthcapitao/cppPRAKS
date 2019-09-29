#include <iostream>
using namespace std;

int main()
{
	int prak;
	cout << "1. 2nd prak variant 6" << endl;
	cout << "2. 3rd prak variant 6" << endl;
	cout << "0. Exit." << endl;
	cout << "choose one: ";
	cin >> prak;

	switch (prak)
	{
	case 1:
		int task;
		cout << "1. Task 1 " << endl;
		cout << "2. Task 2 " << endl;
		cout << "0. Exit." << endl;
		cout << "choose one: ";
		cin >> task;

		switch (task)
		{
		case 1:
			int x, y;
			int use;
			cout <<	"You have chosen task 1" <<endl;
			cout << "1. using 'if' " << endl;
			cout << "2. using '?' " << endl;
			cout << "0. Exit." << endl;
			cout << "choose one: ";
			cin >> use;

			switch (use)
			{
			case 1:
				cout << "x=";
				cin >> x;

				if (x < 6)
				{
					y = x;
					cout << "y=" << y << endl;

				}
				else
				{
					y = 7 * (x * x);
					cout << "y=" << y << endl;
				}
				exit(0);

			case 2:
				cout << "x=";
				cin >> x;

				(x < 6) ? (y = x) : y = 7 * (x * x);
				cout << "y=" << y;
				exit(0);
			case 0:
				exit(1);

			default:
				cout << "Oh no! You just killed my programm! :(";
				exit(1);
			}
			break;
		case 2:
			cout << "You have chosen task 2" << endl;
			cout << "1. using 'if' " << endl;
			cout << "2. using '?' " << endl;
			cout << "0. Exit." << endl;
			cout << "choose one: ";
			cin >> use;

			switch (use)
			{
			case 1:
				cout << "x=";
				cin >> x;

				if (x < -7)
				{
					y = x + 5;
					cout << "y=" << y << endl;
				}
				else if (x >= -7 && x <= 3)
				{
					y = 7 - x;
					cout << "y=" << y << endl;
				}
				else
				{
					y = x * x;
					cout << "y=" << y << endl;
				}
				exit(0);
			case 2:
				cout << "x=";
				cin >> x; 

				(x < -7) ? (y = x + 5) : (x >= -7 && x <= 3) ? (y = 7 - x) : (y = x * x);
				cout << "y=" << y << endl;
				exit(0);
			case 0:
				exit(1);
				
			default:
				cout << "Oh no! You just killed my programm! :(";
				exit(1);

			}
			exit(0);
		}
		break;
	case 2:
		int prak2choose;
		cout << "You have chosen prak 2" << endl;
		cout << "1. Let's begin!" << endl;
		cout << "0. Exit." << endl;
		cout << "choose one: ";
		cin >> prak2choose;

		switch (prak2choose)
		{
		case 1:
			int monthnumber;
			cout << "What's your month numer? 1 - 12!" << endl;
			cout << "Write the number right here or write '0' for exit the programm!: ";
			cin >> monthnumber;

			switch (monthnumber)
			{
			case 1:
					cout << "This month is 31 days long";
					break;
			case 2:
				cout << "This month is called 'February' or just 'Feb' and this guy is only 28 or 29 days long!";
				break;
			case 3:
				cout << "This month is 31 days long";
				break;
			case 4:
				cout << "This month is 30 days long";
				break;
			case 5:
				cout << "This month is 31 days long";
				break;
			case 6:
				cout << "This month is 30 days long";
				break;
			case 7:
				cout << "This month is 31 days long";
				break;
			case 8:
				cout << "This month is 31 days long";
				break;
			case 9:
				cout << "This month is 30 days long";
				break;
			case 10:
				cout << "This month is 31 days long";
				break;
			case 11:
				cout << "This month is 30 days long";
				break;
			case 12:
				cout << "This month is 31 days long";
				break;

			case 0:
				exit(1);
			default:
				cout << "Oh no! You just killed my programm! :(";
				exit(1);

				exit(0);
			}
		}
		break;
	case 0:
		exit(1);
		break;
	default:
		cout << "You violated the law. You are dead now!!";
		exit(1);
		break;
	}
	return 0;
}