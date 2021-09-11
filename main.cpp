#include<iostream>
#include "Rectangle.h"

using namespace std;

int main(){
    Rectangle rectInst;
    rectInst.set(1.6, 1.6);
    cout<<"Rectangle Length: "<< rectInst.getLength() << endl;
    cout <<"Rectangle Width: " << rectInst.getWidth() << endl;
    cout <<"Rectangle Area: " << rectInst.getArea() << endl;
    return 0;
}