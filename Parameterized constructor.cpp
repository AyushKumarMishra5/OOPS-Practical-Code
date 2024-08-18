#include<iostream>
#include<string>
using namespace std;

class Teacher{
	private:
		float salary;
	
	public:
		string name;
		int age;
		string dept;
		
	Teacher(string n, int a, string d, float sa) // taking some variable for the constructor parameters
	{
		name = n;
		age = a;
		dept = d;
		salary = sa;
	}
	
	void showProfile()         
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Dept: "<<dept<<endl;
	}
};
int main()
{
	Teacher t1("Ayush", 40, "CSE", 89000);
	t1.showProfile();
	return 0;
}
