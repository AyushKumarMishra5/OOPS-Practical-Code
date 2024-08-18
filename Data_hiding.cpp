// data hiding is wrapping the confidential data in private class and writting the data into it!
#include <iostream>
#include <string>
using namespace std;

class Bank{
	private:
		float balance;
		string password;
	
	public:
		string name;
		string ac;
};
int main()
{
	Bank b1;
	b1.name = "Union Bank";
	b1.ac = "233388888888889292992";
//	b1.password = "12345";  as password is in private class it throws an error!
//	b1.balance = 98789000; as balance is private class it thorws an error!
    cout<<b1.ac<<endl;
	return 0;
}

