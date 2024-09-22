#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	int x;
	int y;

	cout << "What is the length: ";
	cin >> x;

	cout << "What is the breadth: ";
	cin >> y;

	int area = x * y;

	cout << "The area of the rectangle is: " << area << endl;

}