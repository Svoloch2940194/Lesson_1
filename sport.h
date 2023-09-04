#pragma once

#include "Header.h"

class sportcar :public car
{
	ll max_speed;
public:
	sportcar() { max_speed = 0; }
	sportcar(driver x, engine y, string s, ll z, bool q) : car(x, y, s, q) { max_speed = z; }
};