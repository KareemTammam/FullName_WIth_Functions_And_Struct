#include<iostream>

using namespace std;

struct stPersonInfo
{
	string FirstName;
	string LastName;
	int Age=0;
};

stPersonInfo ReadInfo(stPersonInfo PersonInfo)
{
	cout << "Please Enter The First Name : ";
	cin >> PersonInfo.FirstName;

	cout << "\nEnter The Last Name : ";
	cin >> PersonInfo.LastName;

	cout << "\nEnter The Age : ";
	cin >> PersonInfo.Age;

	return PersonInfo;
}

void PrintFullName(stPersonInfo PersonInfo ,bool Reverse)
{
	cout << endl;
	cout << "Do You want Reverse Your Name : (1 / 0) ?? ";
	cin >> Reverse;

	cout << endl << endl;

	if(Reverse==true)
		cout << "The Full is Name is : " << PersonInfo.FirstName + " " + PersonInfo.LastName << endl;
	else
		cout << "The Full is Name is : " << PersonInfo.LastName + " " + PersonInfo.FirstName << endl;

	cout << endl;
	cout << "With Age is : " << PersonInfo.Age << endl;
}

int main()
{
	stPersonInfo PersonInfo;
	bool Reverse = false;

	PrintFullName(ReadInfo(PersonInfo), Reverse);

	return 0;
}