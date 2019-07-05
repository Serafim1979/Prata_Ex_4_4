#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string fname;
	string lname;
	string fullName;
	char select;

	do
	{
		cout << "Enter your first name: ";
		getline(cin, fname);

		cout << "Enter your last name: ";
		getline(cin, lname);

		fullName = lname + ", " + fname;

		cout << "Here's the information in a single string: " << fullName << endl;
		
		cout << "Continue(y/n)?" << endl;
		cin >> select;

	} while (select != 'n');

	cout << "Good bye!" << endl;

	system("pause");
	return 0;
}