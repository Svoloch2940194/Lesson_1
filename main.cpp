#include "Header.h"

template<class T>
void checker(T x)
{
	if (x.get_session()) cout << "YES\n";
	else cout << "NO\n";
}

int main()
{
	driver x("sergey", 0);
	engine y(100, 10);
	sportcar z1(x, y, "red", 101, true);
	sportcar z2(x, y, "green", 110, false);
	sportcar z3(x, y, "blue", 111, true);
	sportcar z4(x, y, "perple", 1111, false);
	sportcar z5(x, y, "white", 1121, false);
	truck z6(x, y, "white", 1000, true);

	checker(z1);
	checker(z2);
	checker(z3);
	checker(z4);
	checker(z5);
	checker(z6);
}