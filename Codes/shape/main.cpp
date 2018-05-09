#include <iostream>
using namespace std;
#include "rectangle.h"
#include "shap.h"
int main()
{
	Shap *abc = new Rectangle(5, 6);
	cout << abc->getArea() << endl;
	return 0;
}
