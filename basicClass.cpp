#include<bits/stdc++.h>
using namespace std;

class Employee{
    private:
        string Name;
        int Age;
    public:
        Employee(string name,int age){
            Name=name;
            Age=age;

        }
        void intro(){
            cout << "Hello,I am " << Name << endl;
            cout << "I am " << Age << " years old" << endl;
        }

};

int main(){
    Employee emp1=Employee("Jim",24);
    Employee emp2=Employee("Dolu",23);
    emp1.intro();
    emp2.intro();

    return 0;
}
