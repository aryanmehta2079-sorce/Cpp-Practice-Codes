#include<iostream>
using namespace std;
class Cricketer{
public:
    int runs;
    int wicket;
};
class Engineer{
public:
    int Experience;
    string domain;
};
class Phodu: public Cricketer,Engineer{
public:
    int start;
};
int main(){
    Phodu p;
}