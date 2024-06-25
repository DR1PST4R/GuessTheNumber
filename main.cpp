#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(nullptr));
	bool guessedNumber = false;
	int guessCount = 0;
	int ourGuess;
	int computerNumber = rand() % 100 + 1;



	while (!guessedNumber)
	{
		cout << "Enter your guess"<< endl;
		cin >> ourGuess;

		if (ourGuess > 100 || ourGuess < 1)
		{
			cout << "Guess for real this time" << endl;
			guessCount++;
			continue;
		}
		if (ourGuess == computerNumber)
		{
			cout << "Congratulations you guessed the real number in " << guessCount << " guesses! " << endl;
			cout << "Thanks for playing" << endl;
			guessedNumber = true;
		}
		else if (ourGuess > computerNumber)
		{
			cout << "Your guess is too high!" << endl;
		}
		else
		{
			cout << "Your guess is too low!" << endl;

		}
		guessCount++;

	}


	getwchar();
	return 0;
}
