#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Employee {
public:
    string name;
    string position;
    int age;
    Employee(string n,string p, int a) : name(n),position(p), age(a) {}
    friend ostream &operator<<(ostream &s, const Employee &e) {
		s<<"Name:"<<e.name<<" ,position:"<<e.position<<" ,Age:"<<e.age;
	return s;
	}
};
