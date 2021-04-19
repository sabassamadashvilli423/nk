#pragma once
#include<iostream>
#include<fstream>
using namespace std;
class Rectangle
{
public:
	int a, b;
	Rectangle();
	Rectangle(int a, int b);
	Rectangle(ifstream &ifs);
};

