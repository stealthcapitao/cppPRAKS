#include <iostream>
using namespace std;

int main()
{
	int a, b, i;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;

	for (i = a; i <= b; i++)
	{
		if (i % 5 == 0) {
			a = a * i;
		}


	}

	cout << "a= " << a;



	return 0;
}