#include <iostream>
#include "Person.h"
#include <string>
using namespace std;

void getPersonInfo(Person* ps, size_t n) {
	int age;
	string first, last, mid, addr, phone, gender;
	for (size_t i = 0; i < n; i++)
	{
		cout << "First name: ";
		cin >> first;
		cout << "Last name: ";
		cin >> last;
		cout << "Middle name: ";
		cin.ignore();
		getline(cin, mid);
		cout << "Address: ";
		getline(cin, addr);
		cout << "Gender: ";
		cin >> gender;
		cout << "Phone number: ";
		cin >> phone;
		cout << "Age: ";
		cin >> age;

		Person p(0, age, first, last, mid, gender, addr, phone);
		ps[i] = p;
	}
}

void showInfo(Person* ps, size_t n) {
	for (size_t i = 0; i < n; i++)
	{
		ps[i].showInfo();
	}
}

int main() {
	Person* people;
	size_t N;
	cout << "Enter number of people: (N > 0) ";
	cin >> N;

	// cap phat:
	people = new Person[N];

	// nhap du lieu:
	getPersonInfo(people, N);

	// hien thi danh sach cac person len man hinh
	showInfo(people, N);

	return 0;
}