#ifndef SHAP_H
#define SHAP_H
#include <iostream>
using namespace std;

class Shap
{
	public:
		Shap(){}
		virtual float getArea() const = 0;
		virtual float getPerimeter() const = 0;
};

#endif