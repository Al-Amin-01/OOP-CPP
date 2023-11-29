#include<bits/stdc++.h>
using namespace std;

class Employee{
    private:
        int Age;
    protected:
        string Name;
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
        virtual void work(){
            cout << Name << " is checking E-mails and performing tasks" << endl;
        }

};
class Developer:public Employee{
    private:
        string FavLang;
    public:
        Developer(string name,int age,string lang)
            :Employee(name,age)
        {
            FavLang=lang;
        }

        void fix(){
            cout << Name << " is fixing bug  with " << FavLang << endl; 
        }
        void work(){
            cout << Name << " is coding" << endl;
        }

};

int main(){
    Developer dev1=Developer("Al Amin",24,"C++");
    Employee *e=&dev1;
    e->work();
    
    
    return 0;
}
