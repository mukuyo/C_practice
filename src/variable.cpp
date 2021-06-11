#include <iostream>

using namespace std;

int main()
{
	int    int_value      = 5;             //整数   -2147483648～2147483647
	//int    int_value      = 5;
	float  float_value    = 4.12;			 //小数点  最小の正の数：1.175494e-38 最大値：3.402823e+38
	//float  float_value    = 3.402823e+39;			
	double double_value   = 3.402823e+39; //小数点　最小の正の数：2.225074e-308 最大値：1.797693e+308

	//画面表示
	cout<< "int型変数int_valueの値は = " << int_value << endl; 
	cout<< "float型変数float_valueの値は = " << float_value << endl; 
	cout<< "double型変数double_valueの値は = " << double_value << endl; 

	return 0;
}