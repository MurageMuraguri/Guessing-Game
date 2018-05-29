#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int generatenumber()
{
	srand(time(0));
	int num;
	num = 23 + (rand() % (167 - 23));
	return num;

}

int main()
{
	int guess, correctguess;
	char choice;
	bool playagain = true;
	correctguess = generatenumber();
	choice = 'Y';
	while (choice == 'Y' | choice == 'y')
	{

		cout << "Guess a number" << endl;
		cin >> guess;
		if (guess != correctguess)
		{
			if (guess < correctguess)
			{
				cout << "Too low!" << endl;
			}
			else
			{
				cout << "Too high" << endl;
			}

			while (guess != correctguess)
			{
				cout << "Guess again" << endl;
				cin >> guess;
				if (guess == correctguess)
				{
					cout << "Congratulations!" << endl;
					cout << "Want to go again?(y/n)" << endl;
					cin >> choice;

				}
				else if (guess < correctguess)
				{
					cout << "Too low!" << endl;
				}
				else
				{
					cout << "Too high" << endl;
				}
			}

		}
		else
		{

			cout << "Congratulations!" << endl;
			cout << "Want to go again?(y/n)" << endl;
			cin >> choice;
		}
		if (choice == 'N' | choice == 'n')
			cout << "See you later!";

	}

	return 0;

}
