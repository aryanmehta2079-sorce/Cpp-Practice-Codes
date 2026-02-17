#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    float cgpa;
    int roll;

    Student(string name,float cgpa,int roll){
        this->name = name;
        this->cgpa = cgpa;
        this->roll = roll;
    }
    void print(){
        cout<<name<<" "<<roll<<" "<<cgpa<<endl;
    }
};

// SEE USER DEFINED DATA TYPE FIRST

int main(){

    Student s1("Shyam",8.99,23053);
    s1.print();

}