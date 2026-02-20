#include<iostream>
using namespace std;
class Fraction{
    public:
    int num;
    int den;
    Fraction(int num,int den){
        this->num = num;
        this->den = den;
    }
    void display(){
        cout<<num<<" / "<<den;
    }

    // Fraction add(Fraction f){
    //     int newNum = this->num*f.den + this->den*f.num;
    //     int newDen = this->den*f.den;
    //     Fraction ans(newNum,newDen);
    //     return ans;
    // }
    Fraction operator+(Fraction f){
        int newNum = this->num*f.den + this->den*f.num;
        int newDen = this->den*f.den;
        Fraction ans(newNum,newDen);
        return ans;
    }
};
int main(){
    Fraction f1(1,3);
    Fraction f2(1,4);
    // Fraction f3 = f1.add(f2);
    Fraction f3 = f1 + f2;
    f3.display();
}