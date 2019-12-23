#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

void save_score(int guess_count)
{
	std::ifstream input("best_score.txt");
	if (!input.is_open())
	{
		std::cout << "Unable to read file" << std::endl;
		return;
	}

	int best_score;
	input >> best_score;

	std::ofstream output("best_score.txt");
	if (!output.is_open())
	{
		std::cout << "Unable to write to file" << std::endl;
		return;
	}

	if (guess_count < best_score)
	{
		output << guess_count;
	}
	else
	{
		output << best_score;
	}
}

void print_vector(std::vector<int>& vector)
{
	for (int n : vector)
	{
		std::cout << n << "\t";
	}
	std::cout << std::endl;
}

void play_game()
{
	std::vector<int> guesses;
	int count = 0;

	int random = rand() % 251;
	std::cout << random << std::endl;
	std::cout << "Guess a number: " << std::endl;
	while (true)
	{
		int guess;
		std::cin >> guess;
		count++;

		guesses.push_back(guess);
		if (random == guess)
		{
			std::cout << "You guessed right! You win!" << std::endl;
			break;
		}
		else if (guess < random)
		{
			std::cout << "You guess too low, try again: " << std::endl;
		}
		else
		{
			std::cout << "You guess too high, try again: " << std::endl;
		}
	}
	
	save_score(count);

	print_vector(guesses);
}


int main() 
{
	srand(time(NULL));
	int choice;
	do
	{
		std::cout << "0. Quit" << std::endl << "1. Play Game" << std::endl;
		std::cin >> choice;

		switch (choice)
		{
		case 0:
			std::cout << "Quitting..." << std::endl;
			return 0;
		case 1:
			std::cout << "Let's play!" << std::endl;
			play_game();
			break;
		}
	} while(choice != 0);
}