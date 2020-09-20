#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

struct fri
{
	string name;
	int phone_number;
};

int main() {

	struct fri s[5];
	int i;

	for (i = 0; i < 5; i++) {                   	
		cout << "FRIEND " << i + 1 << endl;
		cout << "Enter name" << endl;
		cin >> s[i].name;
		cout << "Enter phone number" << endl;
		cin >> s[i].phone_number;
	}

	for (i = 0; i < 5; i++) {							

		cout << "FRIEND " << i + 1 << endl;
		cout << "Name : " << s[i].name << endl;
		cout << "Phone no : " << s[i].phone_number << endl;
	}
	return 0;
}