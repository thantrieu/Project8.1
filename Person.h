#pragma once
#include <string>
using namespace std;

class Person
{
private:
	int age;
	int pId;
	string firstName;
	string lastName;
	string midName;
	string address;
	string phoneNumber;
	string gender;

public:
	static int id;
	Person();
	Person(int, int, string, string, string, string, string, string);
	int getAge();
	void setAge(int);
	int getId();
	void setId(int);
	string getFirstName();
	void setFirstName(string);
	string getMidName();
	void setMidName(string);
	string getLastName();
	void setLastName(string);
	string getAddress();
	void setAddress(string);
	string getGender();
	void setGender(string);
	string getPhoneNumber();
	void setPhoneNumber(string);
	void showInfo();
	string fullName();
};

