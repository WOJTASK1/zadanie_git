#include "Map.h"
#include "Book.h"
#include "Employee.h"														// Defines template Map<Key, Value>
#include <iostream>

// g++ -g -Wall -pedantic TestMap.cpp -o hello



typedef unsigned int ID; 												// Identification number of employee
typedef Map<ID, Employee> Database; 									// Database of employees

using namespace std;

void addEmployees(Database& database);
void modifyEmployees(Database& database);

int main() {
	Database database;
	addEmployees(database);
	
	Database newDatabase = database;									// Make a copy of database
	newDatabase.add(830505432, Employee("Ewa Nowak", "charwoman", 43));	// Add fourth employee
	modifyEmployees(newDatabase);

	cout << "Original database:" << endl << database << endl;
	cout << "Modified database:" << endl << newDatabase << endl;

	database = newDatabase;												// Update original database

	cout << "Database after the assignment:" << endl << database << endl;
};

void addEmployees(Database& database) {
	database.add(761028073, Employee("Jan Kowalski", "salesman", 28)); 	// Add first employee: name: Jan Kowalski, position: salseman, age: 28,
	database.add(510212881, Employee("Adam Nowak", "storekeeper", 54));	// Add second employee
	database.add(730505129, Employee("Anna Zaradna", "secretary", 32));	// Add third employee
}

void modifyEmployees(Database& database) {
	Employee* employeePtr;

	employeePtr = database.find(510212881);								// Find employee using its ID
	employeePtr->position = "salesman";									// Modify the position of employee
	
	employeePtr = database.find(761028073);								// Find employee using its ID
	employeePtr->age = 29;												// Modify the age of employee
}
/*


typedef string title; 												
typedef Map<title, Book> Database; 									
using namespace std;

void addBooks(Database& database);
void modifyBooks(Database& database);

int main() {
	Database database;
	addBooks(database);

	Database newDatabase = database;									// Make a copy of database
	newDatabase.add("Lord of the Rings", Book("Tokien", "fantasy", true, 990));	// Add fourth employee
	modifyBooks(newDatabase);

	cout << "Original database:" << endl << database << endl;
	cout << "Modified database:" << endl << newDatabase << endl;

	database = newDatabase;												// Update original database

	cout << "Database after the assignment:" << endl << database << endl;
};

void addBooks(Database& database) {
	database.add("Harry Potter", Book("J K Rowling", "fantasy", false, 340)); 	// Add first employee: name: Jan Kowalski, position: salseman, age: 28,
	database.add("Cpp basics", Book("XXX", "Rocket Science", true, 666));	// Add second employee
	database.add("Phisics", Book("ABC", "science", true, 123));	// Add third employee
}

void modifyBooks(Database& database) {
	Book* b=nullptr;

	b = database.find("Lord of the Rings");								// Find employee using its ID
	b->category = "scienie-fiction";									// Modify the position of employee
	
	b = database.find("Harry Potter");								// Find employee using its ID
	b->pages = 229;												// Modify the age of employee
}
*/
