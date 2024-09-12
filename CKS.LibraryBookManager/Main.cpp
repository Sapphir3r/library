
// Library Book Manager
// Cory Sillars

#include <iostream>
#include <conio.h>

using namespace std;
struct Books
{
string Name;
string Author;
int YearPublished;
int NumberOfPages;
};

int main()
{
	const int BOOKS = 4;
	Books books[BOOKS] = 
	{{"Harry Potter and the Sorcerer's Stone","J.K. Rowling",1997,309},
		{"The Tempest","William Shakespere",1623 ,106},
		{ "The Shining","Bob", 2040,3000},
		{ "Dune","Frank Herbert",1965 ,412}
	};
	for (int i = 0; i < BOOKS; i++)
	{
		cout << i+1<<"."<<books[i].Name<<"\n";
		cout << "Author:" << books[i].Author << "\n";
		cout << "Year Published:" << books[i].YearPublished << "\n";
		cout << "Number of Pages:" << books[i].NumberOfPages << "\n\n";
	}
	int id = 0;
	cout << "Enter the ID of the book you would like to update:";
	cin >> id;
	cout << id <<"." << books[id-1].Name<<"\n";
	cout << "Enter the Author (" << books[id - 1].Author << "):";
	string newauthor;
	cin >> newauthor;
	cout<< "Enter the Year Published(" << books[id - 1].YearPublished << "):";
	int newYear;
	cin >> newYear;
	cout<< "Enter the Number of Pages(" << books[id - 1].NumberOfPages << "):";
	int newPages;
	cin >> newPages;
	cout << "Save these changes? (Y,N)";
	char result;
	cin >> result;

	if (result == 'y'||result == 'Y') {

		books[id - 1].Author = newauthor;
		books[id - 1].YearPublished = newYear;
		books[id - 1].NumberOfPages = newPages;
		cout << "\n"<<id + 1 << "." << books[id - 1].Name << "\n";
		cout << "Author:" << books[id-1].Author << "\n";
		cout << "Year Published:" << books[id-1].YearPublished << "\n";
		cout << "Number of Pages:" << books[id-1].NumberOfPages << "\n\n";
	}
	else
	cout << "\nchanges were rolled back";

	(void)_getch();
	return 0;
}
