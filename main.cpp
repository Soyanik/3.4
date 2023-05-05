#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;

class TBook {
public:
	string Name;
	string Author;
	int Count;
};

int main() {
	const int n = 3;
	TBook books[n];
	ifstream fin;
	fin.open("data.txt");
	if (fin.is_open()) {
		for (int i = 0; i < n; i++) {
			string temp;
			getline(fin, books[i].Name);
			getline(fin, books[i].Author);
			getline(fin, temp);
			books[i].Count = stoi(temp);
		}
		fin.close();
	} else return 1;

	string name;
	cout << "Enter name of book: ";
	getline(cin, name);
	bool found = false;
	for (int i = 0; i < n; i++) {
		if (books[i].Name == name) {
			cout << "Name: " << books[i].Name << endl;
			cout << "Author: " << books[i].Author << endl;
			cout << "Count: " << books[i].Count << endl;
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "Book not found" << endl;
	}

	string author;
	cout << "Enter author of book: ";
	cin >> author;
	found = false;
	for (int i = 0; i < n; i++) {
		if (books[i].Author == author) {
			cout << "Name: " << books[i].Name << endl;
			cout << "Author: " << books[i].Author << endl;
			cout << "Count: " << books[i].Count << endl;
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "Book not found" << endl;
	}

	int count;
	cout << "Enter count of books: ";
	cin >> count;
	found = false;
	for (int i = 0; i < n; i++) {
		if (books[i].Count == count) {
			cout << "Name: " << books[i].Name << endl;
			cout << "Author: " << books[i].Author << endl;
			cout << "Count: " << books[i].Count << endl;
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "Book not found" << endl;
	}

	return 0;
}
