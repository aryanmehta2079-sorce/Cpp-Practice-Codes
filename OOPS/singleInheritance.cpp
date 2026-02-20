#include<iostream>
using namespace std;
class Scooty{
public:
    int topSpeed;
    float milage;
    Scooty(){

    }
    Scooty(int t,float m,int b){
        topSpeed = t;
        milage = m;
        bootSpace = b;
    }
    void display(){
        cout<<topSpeed<<" "<<milage<<" "<<bootSpace<<" ";
    }
private:
    int bootSpace;
};
class Bike: public Scooty{
public:
    int gear;
    Bike(){

    }
    // Bike(int t,float m,int b,int g):Scooty(t,m,b){
    //     gear = g;
    // }
    Bike(int t,float m,int b,int g):Scooty(t,m,b){
        gear = g;
    }
    void display(){
        Scooty::display();
        cout<<gear<<endl;
    }

};
int main(){
    int *arr = new int[5];
    Bike v(180,12.5,9,6);
    v.display();

}