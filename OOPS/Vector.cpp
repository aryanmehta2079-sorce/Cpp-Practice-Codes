#include<iostream>
using namespace std;
class Vector{
    public:
    int size;
    int capacity;
    int *arr;
    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int n){
        if(size==capacity){
            capacity *= 2;
            int *arr1 = new int[capacity*2];
            for(int i = 0;i<size;i++){
                arr1[i] = arr[i];
            }
            arr = arr1;
        }
        arr[size++] = n;
    }
    void print(){
        for(int i = 0;i<size;i++){
                cout<<arr[i]<<" ";
            }
    }
    int getElement(int index){
        if (size==0){
            cout<<"Array is empty";
            return -1;
        }
        if(index<0 || index>size){
            cout<<"Index out of bound";
            return -1;
        }
        return arr[index];
    }
    void remove(){
        if(size==0){
            cout<<"Array is empty";
        }
        size--;
    }

};
int main(){
    int *arr = new int[5];
    Vector v;
    v.add(10);
    v.add(20);
    v.add(30);
    v.add(40);
    // v.print();
    cout<<v.getElement(3);
}