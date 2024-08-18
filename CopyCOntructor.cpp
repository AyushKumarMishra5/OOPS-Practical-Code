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
		
	Teacher(string name, int age, string dept, float salary) 
	{
		this->name = name;
		this->age = age;                              
		this->dept = dept;                             
		this->salary = salary;
	}
	
	void show()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Dept: "<<dept<<endl;
		cout<<"Salary: "<<salary<<endl;
	}
};
int main()
{
	Teacher t1("Ayush", 98, "CSE", 89000);
	Teacher t2(t1); // here in the t2 the values in the t1 constructor is being copied!
	t1.show();
	cout<<"SHowing the elements of t2: "<<endl;
	t2.show();
	return 0;
}
