#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shap.h"
class Rectangle: public Shap
{
	private:
		float width;
		float height;
	public:
		Rectangle():width(0.0),height(0.0){}
		Rectangle(float a, float b)
		{
			this->width = a;
			this->height = b;
		}
		//setters
		void setWidth(float a)
		{
			this->width = a;
		}

		void setHeight(float b)
		{
			this->height = b;
		}
		//getters
		float getWidth()const
		{
			return this->width;
		}
		float getHeight()const
		{
			return this->height;
		}
		float getArea() const
		{
			return this -> width * this -> height;
		}

		float getPerimeter() const
		{
			return 2*(this -> width + this -> height);
		}
};
#endif