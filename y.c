
#include <iostream>


int main()
{

	int x = 10;
	cout << x << '\n'; // print the value of variable x
	cout << &x << '\n'; // print the memory address of variable x
	cout << *&x << '\n'; /// print the value at the memory address of variable x

	*&x = 20;
	cout << x << '\n'; // print the value of variable x

	return 0;
}
