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

void change(Student *s){
    // (*s).name = "Hari";
    s->name = "Hari";
}

// SEE USER DEFINED DATA TYPE FIRST

int main(){

    Student s1("Shyam",8.99,23053);
    s1.print();
    Student* p1 = &s1;
    // cout<<(*p1).name<<endl;
    (*p1).name = "Ram";
    cout<<p1->name<<endl;

    change(&s1);
    cout<<s1.name;

}