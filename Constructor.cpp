#include<iostream>
#include<string>
using namespace std;

class Teacher{
	
	public:
		string name;
		int age;
		string dept;
		
		Teacher(){
		cout<<"This is a non-parameterized constructor. "<<endl;  // constructor with no values or parameters in the public class
	}
	private:
		float salary;
		
};
int main()
{
	Teacher t1;
	t1.age = 23;
	cout<<t1.age<<endl;
	return 0;
}
