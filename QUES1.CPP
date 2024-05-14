//Q1 : Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int* p1=&x;
    int* p2=&y;
    cout<<"the product is "<<(*p1)*(*p2);
}