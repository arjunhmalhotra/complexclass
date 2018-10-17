//===========================================================
// Arjun Malhotra
// project7.cpp
// This program has non-terminal unit tests for Complex class.
//===========================================================

#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>
#include "Complex.h"
using namespace std;

//===========================================================
// test default constructor
//===========================================================
void test1 ( void )
{
	cout << "test1\n";
	Complex c1;
	assert(c1.getReal() == 0 && c1.getImag() == 0);
}
//===========================================================
// test specifying constructor
//===========================================================
void test2 ( void )
{
	cout << "test2\n";
	Complex c1(5,-2);
	assert(c1.getReal() == 5 && c1.getImag() == -2);
}
//===========================================================
// test copy constructor
//===========================================================
void test3 ( void )
{
	cout << "test3\n";
	Complex c2(5,3);
	Complex c1(c2);
    assert(c1.getReal() == 5 && c1.getImag() == 3);
}
//===========================================================
// test addition complex complex
//===========================================================
void test4 ( void )
{
	cout << "test4\n";
	Complex c1(5,3);
	Complex c2(4,-2);
	Complex c3 = c1 + c2;
	assert(c3.getReal() == 9 && c3.getImag() == 1);
}
//===========================================================
// test addition complex float
//===========================================================
void test5 ( void )
{
	cout << "test5\n";
	Complex c1(5,3);
	float f = 3.5;
	Complex c3 = c1 + f;
	assert(c3.getReal() == 8.5 && c3.getImag() == 3);
}
//===========================================================
// test addition complex int
//===========================================================
void test6 ( void )
{
	cout << "test6\n";
	Complex c1(5,3);
	float f = 3;
	Complex c3 = c1 + f;
	assert(c3.getReal() == 8 && c3.getImag() == 3);
}
//===========================================================
// test subtraction complex complex
//===========================================================
void test7 ( void )
{
	cout << "test7\n";
	Complex c1(5,3);
	Complex c2(4,-2);
	Complex c3 = c1 - c2;
	assert(c3.getReal() == 1 && c3.getImag() == 5);
}
//===========================================================
// test subtraction complex float
//===========================================================
void test8 ( void )
{
	cout << "test8\n";
	Complex c1(5,3);
	float f = 3.5;
	Complex c3 = c1 - f;
	assert(c3.getReal() == 1.5 && c3.getImag() == 3);
}
//===========================================================
// test subtraction complex int
//===========================================================
void test9 ( void )
{
	cout << "test9\n";
	Complex c1(5,3);
	float f = 3;
	Complex c3 = c1 - f;
	assert(c3.getReal() == 2 && c3.getImag() == 3);
}
//===========================================================
// test multiplication complex complex
//===========================================================
void test10 ( void )
{
	cout << "test10\n";
	Complex c1(5,3);
	Complex c2(4,-2);
	Complex c3 = c1 * c2;
	assert(c3.getReal() == 26 && c3.getImag() == 2);
}
//===========================================================
// test multiplication complex float
//===========================================================
void test11 ( void )
{
	cout << "test11\n";
	Complex c1(5,3);
	float f = 3.5;
	Complex c3 = c1 * f;
	assert(c3.getReal() == 17.5 && c3.getImag() == 10.5);
}
//===========================================================
// test multiplication complex int
//===========================================================
void test12 ( void )
{
	cout << "test12\n";
	Complex c1(5,3);
	float f = 3;
	Complex c3 = c1 * f;
	assert(c3.getReal() == 15 && c3.getImag() == 9);
}
//===========================================================
// test division complex complex
//===========================================================
void test13 ( void )
{
	cout << "test13\n";
	Complex c1(5,3);
	Complex c2(4,-2);
	Complex c3 = c1 / c2;
	assert(c3.getReal() == 0.7 && c3.getImag() == 1.1);
}
//===========================================================
// test division complex float
//===========================================================
void test14 ( void )
{
	cout << "test14\n";
	Complex c1(5,10);
	float f = 2.5;
	Complex c3 = c1 / f;
	assert(c3.getReal() == 2 && c3.getImag() == 4);
}
//===========================================================
// test division complex int
//===========================================================
void test15 ( void )
{
	cout << "test15\n";
	Complex c1(15,3);
	float f = 3;
	Complex c3 = c1 / f;
	assert(c3.getReal() == 5 && c3.getImag() == 1);
}
//===========================================================
// test conjugate operator
//===========================================================
void test16 ( void )
{
	cout << "test16\n";
	Complex c1(15,3);
	Complex c2 = ~c1;
	assert(c2.getReal() == 15 && c2.getImag() == -3);
}
//===========================================================
// test negation operator
//===========================================================
void test17 ( void )
{
	cout << "test17\n";
	Complex c1(15,3);
	Complex c2 = -c1;
	assert(c2.getReal() == -15 && c2.getImag() == -3);
}
//===========================================================
// test exponentiation with int
//===========================================================
void test18 ( void )
{
	cout << "test18\n";
	Complex c1(2,3);
	int a = 5;
	Complex c2 = c1^a;
	assert(c2.getReal() == 122 && c2.getImag() == -597);
}
//===========================================================
// test getReal modifier
//===========================================================
void test19 ( void )
{
	cout << "test19\n";
	Complex c1(2,3);
	double a = c1.getReal();
	assert(a == 2);
}
//===========================================================
// test getImag modifier
//===========================================================
void test20 ( void )
{
	cout << "test20\n";
	Complex c1(2,3);
	double b = c1.getImag();
	assert(b == 3);
}
//===========================================================
// test setReal modifier
//===========================================================
void test21 ( void )
{
	cout << "test21\n";
	Complex c1;
	c1.setReal(2);
	double a = 2;
	assert(c1.getReal() == a);
}
//===========================================================
// test setImag modifier
//===========================================================
void test22 ( void )
{
	cout << "test22\n";
	Complex c1;
	c1.setImag(2);
	double a = 2;
	assert(c1.getImag() == a);
}
//===========================================================
// test assignment operator
//===========================================================
void test23 ( void )
{
	cout << "test23\n";
	Complex c1(4,5);
	Complex c2;
	c2 = c1;
	assert(c2.getReal() == 4 && c2.getImag() == 5);
}
//===========================================================
// test equality operator
//===========================================================
void test24 ( void )
{
	cout << "test24\n";
	Complex c1(4,5);
	Complex c2(4,5);
	assert( c1 == c2 );
}
//===========================================================
// test inequality operator
//===========================================================
void test25 ( void )
{
	cout << "test25\n";
	Complex c1(4,5);
	Complex c2(5,5);
	assert( c1 != c2 );
}
//===========================================================
// test conjugate operator
//===========================================================
void test26 ( void )
{
	cout << "test26\n";
	Complex c1(15,-3);
	Complex c2 = ~c1;
	assert(c2.getReal() == 15 && c2.getImag() == 3);
}
//===========================================================
// test negation operator
//===========================================================
void test27 ( void )
{
	cout << "test27\n";
	Complex c1(-15,-3);
	Complex c2 = -c1;
	assert(c2.getReal() == 15 && c2.getImag() == 3);
}
//===========================================================
// test addition of individual parts
//===========================================================
void test28 ( void )
{
	cout << "test28\n";
	Complex c1(5,0);
	Complex c2(0,-2);
	Complex c3 = c1 + c2;
	assert(c3.getReal() == 5 && c3.getImag() == -2);
}
//===========================================================
// test subtraction of individual parts while checking sign changes
//===========================================================
void test29 ( void )
{
	cout << "test29\n";
	Complex c1(5,0);
	Complex c2(0,-2);
	Complex c3 = c1 - c2;
	assert(c3.getReal() == 5 && c3.getImag() == 2);
}
//===========================================================
// test exponentiation with negative base
//===========================================================
void test30 ( void )
{
	cout << "test30\n";
	Complex c1(1,-1);
	Complex c2 = c1^2;
	assert(c2.getReal() == 0 && c2.getImag() == -2);
}
//===========================================================
// main
//===========================================================
int main ( void )
{

	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
	test9();
	test10();
	test11();
	test12();
	test13();
	test14();
	test15();
	test16();
	test17();
	test18();
	test19();	
	test20();
	test21();
	test22();
	test23();
	test24();
	test25();
	test26();
	test27();
	test28();
	test29();
	test30();
	return 0;
}
//===========================================================
//===========================================================

