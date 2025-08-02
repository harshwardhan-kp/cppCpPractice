#include <iostream>
using namespace std;


void convert(char &c) {
	c = (c - 'a' + 'A');
}

int main()
{
	char ca;
	cin >> ca;

	convert(ca);

	cout<<ca;
	return 0;
}
