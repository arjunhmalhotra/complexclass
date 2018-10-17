// This program has a terminal unit test for Rational class.
//===========================================================

#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>
#include "Complex.h"
using namespace std;

//===========================================================
// test default constructor with raised to 0 
//===========================================================
void test100 ( void )
{
    cout << "test32\n";
    Complex c1(2,5);
	Complex c2 = c1^0;
	assert ( c2.getReal() == 1 );
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

