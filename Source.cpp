#include <iostream>
using namespace std;

#include <string>

#define OUTPUT cout <<
#define INPUT cin >>
#define NEWLINE endl

void main() {

	string username;
	int usernameLength;
	string password;
	int passwordLength;

	OUTPUT "Please type a username with fewer than 10 characters. \nYour Ugly Name here:";
	INPUT username;
	usernameLength = username.size();

	while (usernameLength > 10) {
		OUTPUT "Can you count? Try again:";
		INPUT username;
		usernameLength = username.size();
	}

}
