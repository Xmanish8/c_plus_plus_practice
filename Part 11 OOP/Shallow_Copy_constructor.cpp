#include<iostream>
#include<string>
using namespace std;
class Manish
{
    int *ageptr;
    string name;

public:
    Manish(int age , string name){
    this->name=name;
    ageptr = new int(age);
    *ageptr = age;
    }
    Manish(Manish &d){
        this->ageptr=d.ageptr;
        this->name=d.name;

    }

    void Display(){
        cout<<" age address "<<ageptr<<endl;
        cout<<" age is "<<*ageptr<<endl;
        cout<<" name is "<<name<<endl;
    }
    int* newage(){
        return ageptr;
    }

};

int main(){
    Manish m1(20 , "Manish");
    m1.Display();
    Manish m2(m1);
    m2.Display();
    *(m2.newage()) = 21;
    m1.Display();
    m2.Display();
    return 0;

}