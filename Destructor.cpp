#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double* cgpa;

    Student(string name, double cgpa) {
        this->name = name;
        this->cgpa = new double; 
        *(this->cgpa) = cgpa;
    }
    ~Student() {
    	cout<<"The data has been delete: "<<endl;
        delete cgpa; // creating a destructor to free the memory using (~)
    }

    void show() const {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpa << endl;
    }
};

int main() {
    Student s1("Ayush", 8.92);
    Student s2 = s1; 
    s1.show();
    cout << "Updating the CGPA of the student:" << endl;
    s2.name = "Nidhi";
    *(s2.cgpa) = 9.2;
    s2.show();
    return 0;
}

