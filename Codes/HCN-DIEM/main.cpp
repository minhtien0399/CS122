#include "HinhChuNhat.h"
#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>     
int main(int argc, char const *argv[])
{
	srand (time(NULL));
	int count = 0;
	HinhChuNhat a(7,5,3,7);
	for (int i = 0; i < 100; ++i)
	{
		int x = rand() % 11;
		int y = rand() % 11;
		cout<<"("<<x<<","<<y<<"); ";
		if(a.kiemtraThuoc(x,y))
			count++;
	}
	cout<<endl<<count<<endl;

	return 0;
}