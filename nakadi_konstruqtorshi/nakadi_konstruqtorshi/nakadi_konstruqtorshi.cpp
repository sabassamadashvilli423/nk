#include <iostream>
#include<fstream>
#include"Rectangle.h"
using namespace std;
int main()
{
    ifstream fin("input.txt");
    Rectangle r;
    Rectangle r1(4, 5);
    cout << r1.a << endl << r1.b << endl;
    Rectangle* p;
    for (int i = 0; i < 5; i++) {
        p = new Rectangle(fin);
        cout << p->a <<" " << p->b << endl;
    }/*
    int* a;
    a = new int[10];
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    for (int i = 0; i < 10; i++) {
        cout << a[i]<<" ";
     }
    int* tmp;
    tmp = a;
    a = new int[20];
    for (int i = 0; i < 10; i++) {
        a[i] = tmp[i];
    }
    for (int i = 10; i < 20; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 20; i++) {
        cout << a[i]<<" ";
    }*/
}
