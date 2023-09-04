#pragma once

#include "Header.h"

class truck :public car
{
	ll load_capacity;
public:
	truck() { load_capacity = 0; }
	truck(driver x, engine y, string s, ll z, bool q) : car(x, y, s, q) { load_capacity = z; }
};