//============================== CLASS HEADER =================================
// Arjun Malhotra
// Complex.h
// Class definition for Complex Class. ( Full Screen for Comments )
//=============================================================================

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

#ifndef COMPLEX_H
#define COMPLEX_H

//=============================================================================
// Complex Class
//=============================================================================

class Complex
{
private:

	    double              real;
        double              imaginary;

public:

            Complex 	( void );		                                                                        // default constructor
            Complex 	( const Complex & );                                                                    // copy constructor
			        Complex    ( double r, double i );
			        Complex    ( double r );
		         ~Complex 	( void );     	                                                                    // destructor
	    void	print		( void ) const;
    Complex operator=   ( const Complex c );                                                                    // assignment operator
    Complex operator*	( const Complex c ) const;                                                              // for operators for complex numbers
    Complex operator+	( const Complex c ) const;
    Complex operator-	( const Complex c ) const;
    Complex operator/	( const Complex c ) const;
    Complex operator-  ( void ) const;
    Complex operator*  ( double r ) const;                                                                      // for operators for complex nos and floats
    Complex operator/  ( double r ) const;
    Complex operator+  ( double r ) const;
    Complex operator-  ( double r ) const;
    Complex operator^  ( int n ) const;                                                                         // for exponents
    Complex operator~  ( void ) const;                                                                          // for conjugates

void		setReal ( double r );                                                                               // for modifiers and accessors
void		setImag ( double i );
double		getReal ( void ) const;
double		getImag ( void ) const;
    bool     operator== ( const Complex c ) const;                                                              // for boolean operators
    bool     operator!= ( const Complex c ) const;

	friend ostream & operator<< ( ostream &os, Complex c );


};

#endif
