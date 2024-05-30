#include <iostream>
#include <string>
#include "GameLogic.h"


using namespace std;


int main()
{
	while (true) {
		string userInput = UserInputLogic();
		if (userInput == "Quitting")
		{
			cout << "Thanks for playing!" << endl;
			break;
		}
		cout << userInput << endl;

		string opponentInput = OpponentLogic();
		cout << opponentInput << endl;
		cout << endl;

		string winner = DetermineWinner(userInput, opponentInput);
		cout << winner << endl;
		cout << endl;
	}

	return 0;
}