#pragma once

#include "Header.h"

class car
{
protected:
	bool session;
	string color;
	driver d;
	engine e;
public:
	car() { color = ""; session = 0; }
	car(driver x, engine y, string s, bool q) { color = s; d = x; e = y; session = q; }
	bool get_session() { re session; }
};