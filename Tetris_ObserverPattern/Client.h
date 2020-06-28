#pragma once
#include <iostream>
#include "Observer.h"

// A client that implements the Observer interface
class Client : public Observer
{
	int i_id;

public:
	Client(int id);

	virtual void UpdateScore(int score) override;
	virtual void UpdateLife(bool dead) override;
};
