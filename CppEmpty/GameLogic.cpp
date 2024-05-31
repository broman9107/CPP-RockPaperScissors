#include <iostream>
#include <string>

using namespace std;

//User input logic
string UserInputLogic() {
	while (true) {

		cout << "Enter your choice: ";
		char input;
		cin >> input;

		if (input == 'r')
		{
			return "Rock";
		}
		else if (input == 'p')
		{
			return "Paper";
		}
		else if (input == 's')
		{
			return "Scissors";
		}
		else if (input == 'q')
		{
			return "Quitting";
		}
		else
		{
			cout << "Invalid input" << endl;
		}
		
		cout << endl; // Empty line
		
	};
}

//Opponent logic
string OpponentLogic() {
	int random = rand() % 3;

	if (random == 0)
	{
		return "Rock";
	}
	else if (random == 1)
	{
		return "Paper";
	}
	else if (random == 2)
	{
		return "Scissors";
	}
	else
	{
		return "Error";
	}
}

//Determine winner
string DetermineWinner(string user, string opponent) {
	if (user == opponent)
	{
		return "Tie";
	}
	else if (user == "Rock" && opponent == "Scissors")
	{
		return "User wins";
	}
	else if (user == "Paper" && opponent == "Rock")
	{
		return "User wins";
	}
	else if (user == "Scissors" && opponent == "Paper")
	{
		return "User wins";
	}
	else
	{
		return "Opponent wins";
	}
}