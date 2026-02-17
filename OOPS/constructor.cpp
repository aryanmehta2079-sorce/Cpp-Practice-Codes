#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    float cgpa;
    int roll;

    Student(){

    }
    Student(string s,float c,int r){
        name = s;
        cgpa = c;
        roll = r;
    }
};
void print(Student s){
    cout<<s.name<<" "<<s.roll<<" "<<s.cgpa<<endl;
}

// SEE USER DEFINED DATA TYPE FIRST

int main(){
    
    // Student s1;
    // s1.name = "Shyam";
    // s1.cgpa = 8.99;
    // s1.roll = 23053;

    Student s1("Shyam",8.99,23053);
    print(s1);

    
    Student s2;
    s2.name = "Aryan";
    s2.cgpa = 8.96;
    s2.roll = 23053464;

    print(s2);

}