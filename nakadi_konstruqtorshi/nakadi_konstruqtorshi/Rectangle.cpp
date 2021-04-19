#include "Rectangle.h"
#include<iostream>
using namespace std;
Rectangle::Rectangle() {
	cout << "created" << endl;
}
Rectangle::Rectangle(int a, int b) {
	this->a = a;
	this->b = b;

}
Rectangle::Rectangle(ifstream& ifs) {
	ifs >> a >> b;
}