#include <iostream>
#include <string>
using namespace std;

class Person{
	public:
	string name;
	int age;
	
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	void show()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
	}
};

class PersonMark: public Person{
	public:
	int roll;
};
int main()
{
	Person p1("Ayush", 87);
	p1.show();
	
	return 0;
}
