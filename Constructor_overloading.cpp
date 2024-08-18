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
		this->age = age;                               // as there can be many constructors and even their varibale can be 
		this->dept = dept;                             // the same so in that case it's best to use the this->
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
	t1.show();
	return 0;
}
