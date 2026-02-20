#include<iostream>
using namespace std;
class Student{
    public:
    int roll;
    string name;
    Student(){

    }
    Student(int r,string n,string s){
        roll = r;
        name = n;
        section = s;
    }
    void display(){
        cout<<roll<<" "<<name<<" "<<section<<endl;
    }
    private:
        string section;
        void display1(){
        cout<<roll<<" "<<name<<" "<<section<<endl;
    }
};
int main(){
    int *arr = new int[5];

    Student s(20,"Shyam","CSE-1");
    Student v;
    v.roll = 50;
    v.name = "Aryan";
    // v.section = "CSE-5";// private variable

    s.display();
    v.display();

    // s.display1();// private method

}