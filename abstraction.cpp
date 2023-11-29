#include<bits/stdc++.h>
using namespace std;
class AbstractEmployee{
    virtual void isPromoted()=0;
};
class Employee:AbstractEmployee{
    private:
        string Name;
        int Age;
    public:
        Employee(string name,int age){
            Name=name;
            Age=age;

        }
        void setName(string name){
            Name=name;

        }
        void getName(){
            cout << "I am " << Name << endl;
        }
        void setAge(int age){
            Age=age;
        }
        void getAge(){
            cout << "I am " << Age << " years old" << endl;
        }
        void intro(){
            cout << "Hello,I am " << Name << endl;
            cout << "I am " << Age << " years old" << endl;
        }
        void isPromoted(){
            if(Age>23) cout << "Hey," << Name << " ,You are promoted" << endl;
            else cout << "Hey, " << Name << " ,sorry!" << endl;
        }

};

int main(){
    Employee emp1=Employee("Jim",24);
    Employee emp2=Employee("Dolu",23);
    emp1.intro();
    emp2.intro();
    emp1.setName("Al Amin");
    emp2.setName("Beni Yeamin");
    emp1.getName();
    emp2.getName();
    emp1.isPromoted();
    emp2.isPromoted();

    return 0;
}
