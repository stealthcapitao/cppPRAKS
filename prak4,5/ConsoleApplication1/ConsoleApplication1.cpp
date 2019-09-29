#include <iostream>
using namespace std;

int main()
{
	int x, y, n, i;
	cout << "x: ";
	cin >> x;
	cout << "n: ";
	cin >> n;
		
	for (i = 1; i <= n; i++)
	{
		y = 4 * x * i * i / (1 + i);

	}

	cout << "y= " << y;



	return 0;
}