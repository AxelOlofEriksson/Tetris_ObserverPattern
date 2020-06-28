#include "Client.h"

void Client::UpdateScore(int score)
{
	// Print the changed values
	std::cout << "---Observer (" << i_id << ") Data---\tScore: " << score << '\n';
}

void Client::UpdateLife(bool dead)
{
	// Print the changed values
	std::cout << "---Observer (" << i_id << ") Data---\tLife: You are Dead" <<'\n';
}

Client::Client(int id)
{
	this->i_id = id;
}