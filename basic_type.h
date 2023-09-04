#pragma once
#include "Header.h"

class driver
{
	string name;
	ll expirience;
public:
	driver() { name = ""; expirience = 0; }
	driver(string s, ll x) { name = s; expirience = x; }
};

class engine
{
	ll power;
	ll year;
public:
	engine() { power = 0; year = 0; }
	engine(ll x, ll y) { power = x; year = y; }
};