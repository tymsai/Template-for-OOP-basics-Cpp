#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class classname{
    public:
    void function();
};
void classname::function(){
    cout<<"\n This is printed using object";
}

int main(){

    cout<<"This program provides the basics of OOP concept in C++ \n This is printed without using OBJECT";
    classname object;
    object.function();
    return 0;
}
