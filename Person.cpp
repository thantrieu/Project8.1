#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() {
	this->age = 0;
	this->pId = 0;
	this->firstName = "";
	this->midName = "";
	this->lastName = "";
	this->address = "";
	this->gender = "";
	this->phoneNumber = "";
}

Person::Person(int id, int age, string firstName, string lastName, // = 0
	string midName, string gender, string address, string phoneNumber) {
	setId(id);
	setAge(age);
	setFirstName(firstName);
	setMidName(midName);
	setLastName(lastName);
	setAddress(address);
	setPhoneNumber(phoneNumber);
	setGender(gender);
}

int Person::id = 100;

void Person::setAge(int age) {
	this->age = (age >= 0) ? age : 0;
}

void Person::setId(int id) {
	this->pId = (id >= 100) ? id : Person::id++;
}

void Person::setFirstName(string firstName) {// firstname
	this->firstName = firstName;
}

void Person::setMidName(string midName) {
	this->midName = midName;
}

void Person::setLastName(string lastName) {
	this->lastName = lastName;
}

void Person::setAddress(string address) {
	this->address = address;
}

void Person::setGender(string gender) {
	this->gender = gender;
}

void Person::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

int Person::getAge() {
	return this->age;
}

int Person::getId() {
	return this->pId;
}

string Person::getAddress() {
	return this->address;
}

string Person::getGender() {
	return this->gender;
}

string Person::getPhoneNumber() {
	return this->phoneNumber;
}

string Person::getFirstName() {
	return this->firstName;
}

string Person::getMidName() {
	return this->midName;
}

string Person::getLastName() {
	return this->lastName;
}

void Person::showInfo() {
	cout << "============================================\n";
	cout << "ID: " << getId() << "\n"
		<< "First Name: " << getFirstName() << endl
		<< "Midle Name: " << getMidName() << endl
		<< "Last Name: " << getLastName() << endl
		<< "Gender: " << getGender() << endl
		<< "Age: " << getAge() << " years old." << endl
		<< "Address: " << getAddress() << endl
		<< "Phone Number: " << getPhoneNumber() << endl;
	cout << "============================================\n";
}

string Person::fullName() {
	return getFirstName() + " " + getMidName() + " " + getLastName();
}