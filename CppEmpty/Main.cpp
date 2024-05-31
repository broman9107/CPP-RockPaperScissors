#include <iostream>
#include <string>
#include "GameLogic.h"


using namespace std;


int main()
{

	cout << "Rock: r  Paper: s  Scissors: s  Quit: q" << endl;
	cout << endl;
	//Game loop
	while (true) {

		//User input logic
		string userInput = UserInputLogic();
		if (userInput == "Quitting")
		{
			cout << "Thanks for playing!" << endl;
			break;
		}
		cout << userInput << endl;

		//Opponent logic
		string opponentInput = OpponentLogic();
		cout << opponentInput << endl;
		cout << endl;

		//Determine winner
		string winner = DetermineWinner(userInput, opponentInput);
		cout << winner << endl;
		cout << endl;
	}

	return 0;
}