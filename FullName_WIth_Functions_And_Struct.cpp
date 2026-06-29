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

	cout << "Enter The Last Name : ";
	cin >> PersonInfo.LastName;

	cout << "Enter The Age : ";
	cin >> PersonInfo.Age;

	return PersonInfo;
}

void PrintFullName(stPersonInfo PersonInfo)
{
	cout << endl;
	cout << "The Full is Name is : " << PersonInfo.FirstName + " " + PersonInfo.LastName << endl;
	cout << "With Age is : " << PersonInfo.Age << endl;
}

int main()
{
	stPersonInfo PersonInfo;

	PrintFullName(ReadInfo(PersonInfo));
}