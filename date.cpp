#include <iostream>
#include <string>
using namespace std;
class date
{
	protected:
		int ngay;
		int thang;
		int nam;
	public:
		date()
		{
			this -> ngay = 1;
			this -> thang = 1;
			this -> nam = 1;
		}
		date(int ng, int th, int nam):ngay(ng), thang(th), nam(nam){}
		friend ostream &operator <<(ostream & out, date &a)
		{
			cout<<a.ngay<<"/"<<a.thang<<"/"<<a.nam;
			return out;
		}
};
class maytinh: public date
{
	protected:
		date date;
		string hangsanxuat;
	public:
		maytinh():date(0,0,0),hangsanxuat(""){}
		maytinh(int ng, int th, int nam, string h):date(ng,th,nam),hangsanxuat(h){}
		int getNamsanxuat()
		{
			return this->nam;
		}
		int getNamsudung(int snsd)
		{
			return (snsd-this->nam);
		}
		friend ostream &operator << (ostream & out, maytinh &mt)
		{
			cout<<mt.date<<"/"<<mt.hangsanxuat;
			return out;
		}
		
		
};
class maytinhdeban: public maytinh
{
	protected:
		maytinh mt1;
		bool casee;
	public:
		maytinhdeban():maytinh(),casee(1){}
		maytinhdeban(int ng, int th, int nam, string h, bool casee):maytinh(ng, th, nam, h),casee(casee){}
			friend ostream &operator <<(ostream & out, maytinhdeban &mtdb)
		{
			cout<<mtdb.mt1<<"/"<<mtdb.casee;
			return out;
		}
};
class maytinhsachtay: public maytinh
{
	protected:
		maytinh mt;
		float cannang;
	public:
		maytinhsachtay():maytinh(),cannang(0){}	
		void setCannang(float c)
		{
			this -> cannang = c;
		}
		float getCannang()
		{
			return this -> cannang;
		}
		maytinhsachtay(int d, int m, int y,string h,float gam):maytinh(d,m,y,h),cannang(gam){}
		friend ostream &operator << (ostream & out, maytinhsachtay &mtxt)
		{
			cout<<mtxt.mt<<"/"<<mtxt.cannang;
			return out;
		}
		
};
int main()
{
	date d1(18,6,2014),d2(1,1,2014);
	cout<<d1<<";"<<d2<<endl;
	maytinh m1(18,6,2014,"Dell"),m2(1,1,2014,"HP");
	cout<<m1.getNamsanxuat();
	maytinhdeban mb1(18,6,2014,"Dell",true);
	maytinhsachtay mt(1,1,2014,"Sony",2.2);
	cout<<mb1.getNamsanxuat();
	cout<<mt.getNamsudung(2017);
	return 0;
}
