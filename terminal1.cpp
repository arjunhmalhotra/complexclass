// This program has a terminal unit test for Rational class.
//===========================================================

#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>
#include "Complex.h"
using namespace std;

//===========================================================
// test default constructor with raised to negative number
//===========================================================
void test100 ( void )
{
	cout << "test33\n";
	Complex c1(1,1);
	Complex c2 = c1^-2;
	assert(c2.getReal() == 0.5 && c2.getImag() == -0.5);
}
//===========================================================
// main
//===========================================================
int main ( void )
{

	test100();
	return 0;
}
//===========================================================
//===========================================================

