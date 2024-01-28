#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book{
	public:
	string author;
	string category;
	bool available; //true-available false-borrowed
	unsigned int pages;
	Book(string au, string c, bool a, unsigned int p):author(au),category(c), available(a),pages(p){}
	friend ostream &operator<<(ostream &s, const Book &b) {
		s<<"Author:"<<b.author<<" ,category:"<<b.category<<" ,number of pages:"<<b.pages<<" ,available: "<<b.available;
	return s;
	}	 
	
};
