#include <iostream>
#include "Diem.h"
using namespace std;

class HinhChuNhat
{
protected:
	Diem tt;
	Diem dp;
public:
	HinhChuNhat():tt(0,0), dp(0,0){}
	HinhChuNhat(float xa, float ya, float xb, float yb)
	: tt(xa,ya), dp(xb,yb){}
	//setter
	void settt(float xa, float ya)
	{
		this -> tt = Diem(xa,ya);
	}
	void setdp(float xb, float yb)
	{
		this -> dp = Diem(xb,yb);
	}
	//getter
	Diem gettt()const
	{
		return this->tt;
	}
	Diem getdp()const
	{
		return this->dp;
	}
	bool kiemtraThuoc(float x, float y)const
	{
		float xMin = tt.getX() > dp.getX()?dp.getX():tt.getX();
		float xMax = tt.getX() > dp.getX()?tt.getX():dp.getX();
		float yMin = tt.getY() > dp.getY()?dp.getY():tt.getY();
		float yMax = tt.getY() > dp.getY()?tt.getY():dp.getY();
		
		if((x>=xMin && x<= xMax)&&(y>= yMin && y<= yMax))
			return 1;
		return 0;	 
	}

};