#include <iostream>
#include <cmath>

using namespace std;

float function(float _obj1_x, float _obj1_y, float _obj2_x, float _obj2_y)
{
	float _radian;
	_radian = atan2(_obj1_y - _obj1_y, _obj1_x - _obj2_x);

	return _radian;
}

int main()
{
	float radian;

	float obj1_x = 0.0, obj1_y = 0.0;
	float obj2_x = 1.0, obj2_y = 1.0;

	radian = atan2(obj1_y - obj1_y, obj1_x - obj2_x);
	//radian = function(obj1_x, obj1_y, obj2_x, obj2_y);

	cout<<radian*180/M_PI<<endl;

	return 0;
}