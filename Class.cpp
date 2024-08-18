#include <iostream>
#include <string>
using namespace std;

class Teacher{
	public:                      // need to mention the access modifiers as the class automatically takes the private:
	string name;
	string sub;                  // properties
	string dept;
	double salary;
	
	
	void changeDept(string newDept)
	{
		dept = newDept;                  // member-functions
	}
};
int main()
{
	Teacher t1;
	t1.name = "Ayush";
	t1.sub = "Maths";
	t1.dept = "CSE";
	t1.salary = 29000;
	
	cout<<"salary: "<<t1.salary<<endl;
	return 0;
}
