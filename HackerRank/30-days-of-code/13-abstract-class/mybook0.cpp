#include <iostream>
#include <string>

using namespace std;

class Book
{
protected:
	string title;
	string author;
public:
	Book(string t, string a)
	{
		this->title = t;
		this->author = a;
	}
	virtual void display()=0;
};

class MyBook : public Book
{
private:
	int price;
public:
	MyBook(string t, string a, int p) : Book (t, a)
	{
		this->price = p;
	}
	void display ()
	{
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
		cout << "Price: " << price << endl;
	}
};

int main ()
{
	string title, author;
	int price;
	getline(cin, title);
	getline(cin, author);
	cin>>price;
	MyBook novel(title, author, price);
	novel.display();
	return 0;
}