#include <iostream>
using namespace std;
class Diem
{
private:
	float hoanhdo;
	float tungdo;
public:
	Diem():hoanhdo(0),tungdo(0){}
	Diem(float a, float b):hoanhdo(a),tungdo(b){}
	void prfloat()
	{
		cout<<"("<<this->hoanhdo<<","<<this->tungdo<<")"<<endl;
	}
	//setter
	void setHoanhDo(float a)
	{
		this->hoanhdo = a;
	}
	void setTungDo(float b)
	{
		this->tungdo = b;
	}
	//getter
	float getX()const
	{
		return this->hoanhdo;
	}
	float getY()const
	{
		return this->tungdo;
	}

};