#include <iostream>
#include <string>

using namespace std;

bool Palindrome(string input) {
	if (input == string(input.rbegin(), input.rend()))
		return true;
	else
		return false;
}

int main()
{
	string input;
	
	cout << "Please input a string:\n> ";
	cin >> input;
	
	if (Palindrome(input))
		cout << input << " is a Palindrome\n";
	else
		cout << input << " is not a Palindrome\n";
	
}
