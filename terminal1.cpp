// This program has a terminal unit test for Rational class.
//===========================================================

#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>
#include "Complex.h"
using namespace std;

//===========================================================
// test constructor with divide by zero error
//===========================================================
void test100 ( void )
{
    cout << "test31\n";
    Complex c1(2,5);
	Complex c2 = c1 / 0;
	assert ( exit );
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

