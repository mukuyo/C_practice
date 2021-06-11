#include <iostream>
#include <cmath>

using namespace std;

class Calc
{
public:
	Calc()
	{
		_obj1_x = 0;
		_obj1_y = 0;
		_obj2_x = 1;
		_obj2_y = 1;
	}

	float function()
	{
		_radian = atan2(_obj1_y - _obj1_y, _obj1_x - _obj2_x);

		return _radian;
	}

	void print(int value)
	{
		cout<<"代入された値は = "<<value<<endl;
	}

private:
	float _radian;

	float _obj1_x;
	float _obj1_y;
	float _obj2_x;
	float _obj2_y;

};


int main()
{
	Calc calc;

	cout<<calc.function()*180/M_PI<<endl;

	calc.print(5);

	return 0;
}