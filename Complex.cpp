//=============================================================================
// Arjun Malhotra
// Complex.cpp
// Class Methods for Complex class. (Full Screen for Comments)
//=============================================================================

#include "Complex.h"
#include <math.h>

//=============================================================================
// CONSTRUCTORS
//=============================================================================
//-----------------------------------------------------------------------------
// Default Constructor
// Initialize value to c = 0 + 0i.
//-----------------------------------------------------------------------------
			Complex::Complex ( void )
{
	real = 0;
	imaginary = 0;
}
//-----------------------------------------------------------------------------
// Copy Constructor
// Copy existing Complex object into new Complex object
//-----------------------------------------------------------------------------
			Complex::Complex ( const Complex &c )
{
	real = c.real;
	imaginary = c.imaginary;
}
//-----------------------------------------------------------------------------
// Constructor
// Specifies a new Complex type by giving the real and imaginary components.
//-----------------------------------------------------------------------------
			Complex::Complex ( double r, double i )
{
		real = r;
		imaginary = i;
}
//=============================================================================

//============================== DESTRUCTOR ===================================
//-----------------------------------------------------------------------------
// Destructor
// Does nothing for the class -- Place holder. 
//-----------------------------------------------------------------------------
			Complex::~Complex ( void )
{
}
//=============================================================================


//=============================================================================
// OPERATORS
//=============================================================================
//-----------------------------------------------------------------------------
// Assignment operator
// Allows assignment of values between complex numbers.
//-----------------------------------------------------------------------------
Complex		Complex::operator= ( const Complex c )
{
		real = c.real;
		imaginary = c.imaginary;
		return *this;
}
//-----------------------------------------------------------------------------
// print 
// prints to the screen "a + bi". Also prints a "\n" at the end.
//-----------------------------------------------------------------------------
void	Complex::print ( void ) const
{		
		cout << real << "+" << imaginary << "i" << endl;	
}
//-----------------------------------------------------------------------------
// cout << 
// Overloads the cour ostream << operator to allow printing a + bi.
//-----------------------------------------------------------------------------
ostream & operator<< ( ostream &os, Complex c )
{
		if ( c.real == 0 && c.imaginary == 0 )				// case when only imaginary part is present
			os << "0";

		else if ( c.real == 0 && c.imaginary == 1 )
			os << "i";

		else if ( c.real == 0 && c.imaginary == -1 )
			os << "-i";

		else if ( c.real == 0 )
			os << c.real;	


		else if ( c.imaginary == 0 )			// case when only real part is present
			os << c.real;

		else if ( c.real != 0 && c.imaginary == 1 )
			os << c.real << "+i";

		else if ( c.real != 0 && c.imaginary == -1 )
			os << c.real << "-i";

		else if ( c.imaginary < 0 )			// case when the imaginary part is negative
			os << c.real << c.imaginary << "i";
		
		else
			os << c.real << "+" << c.imaginary << "i";				// standard case

		
		return os;
}
//-----------------------------------------------------------------------------
// operator==
// allows comparison of equality between complex numbers
//-----------------------------------------------------------------------------
bool		Complex::operator== ( const Complex c ) const
{
	return ( real == c.real && imaginary == c.imaginary );
}
//-----------------------------------------------------------------------------
// operator!=
// allows comparison of inequality betweem complex numbers.
//-----------------------------------------------------------------------------
bool		Complex::operator!= ( const Complex c ) const
{
	return ( real != c.real || imaginary != c.imaginary );
}
//-----------------------------------------------------------------------------
// operator+
// computes the addition of -- two complex numbers; complex & float.
//----------------------------- both complex ----------------------------------
Complex		Complex::operator+ ( const Complex c ) const
{

	Complex ret;											// return object

	ret.real = real + c.real;
	ret.imaginary = imaginary + c.imaginary;

	return ret;

}
//---------------------------- complex & float --------------------------------
Complex		Complex::operator+ ( double r ) const
{
	Complex ret;											// return object

	ret.real = real + r;
	ret.imaginary = imaginary;

	return ret;
}
//-----------------------------------------------------------------------------
// operator-
// computes the subtraction of -- two complex numbers; complex & float
//-----------------------------------------------------------------------------
Complex		Complex::operator- ( const Complex c ) const
{

	Complex ret;											// return object

	ret.real = real - c.real;
	ret.imaginary = imaginary - c.imaginary;

	return ret;

}
//---------------------------- complex & float --------------------------------
Complex		Complex::operator- ( double r ) const
{
	Complex ret;											// return object

	ret.real = real - r;
	ret.imaginary = imaginary;

	return ret;
}
//-----------------------------------------------------------------------------
// operator~
// returns the complex conjugate
//-----------------------------------------------------------------------------
Complex		Complex::operator~ ( void ) const
{
	Complex ret;											// return object

	ret.real = real;
	ret.imaginary = imaginary * (-1);

	return ret;
}
//-----------------------------------------------------------------------------
// negation
// returns the negative of a complex number
//-----------------------------------------------------------------------------
Complex		Complex::operator- ( void ) const
{
	Complex ret;											// return object

	ret.real = real * (-1);
	ret.imaginary = imaginary * (-1);

	return ret;
}
//-----------------------------------------------------------------------------
// multiplication
// returns the product of -- two complex numbers; complex & float
//----------------------------- both complex ----------------------------------
Complex		Complex::operator* ( const Complex c ) const
{
	Complex ret;											// return object

	ret.real = ( real * c.real ) - ( imaginary * c.imaginary );					// according to mathematical formula
	ret.imaginary = ( real * c.imaginary ) + ( imaginary * c.real );

	return ret;
}
//--------------------------- complex & float ---------------------------------
Complex		Complex::operator* ( double r ) const
{
	Complex ret;

	ret.real = real * r;
	ret.imaginary = imaginary * r;

	return ret;	
}
//-----------------------------------------------------------------------------
// division
// returns the quotient -- two complex numbers; complex & float
//----------------------------- both complex ----------------------------------
Complex		Complex::operator/ ( const Complex c ) const
{
	Complex ret;

	double a = pow ( c.real, 2 );									// squaring floats of the denominator in formula
	double b = pow ( c.imaginary, 2 ); 

	ret.real = (( real * c.real ) + ( imaginary * c.imaginary )) / ( a + b );
	ret.imaginary = (( imaginary * c.real ) - ( real * c.imaginary )) / ( a + b);

	if ( a + b == 0 )
    	{
         cout << "Error: divide by zero not permitted\n";		// program does not accept a divide by zero
	exit(1);       
    	}

		return ret;
}
//--------------------------- complex & float ---------------------------------
Complex		Complex::operator/ ( double r ) const
{
	Complex ret;

	ret.real = real / r;
	ret.imaginary = imaginary / r;

	if ( r == 0 )
    	{
         cout << "Error: divide by zero not permitted\n";		// program does not accept a divide by zero
	exit(1);
        
    	}
	
		return ret;
		
}
//-----------------------------------------------------------------------------
// exponentiation
// raises a complex number to the power n
//-----------------------------------------------------------------------------
Complex		Complex::operator^ ( int n ) const
{

	Complex ret( real, imaginary );								// default return object
	Complex z( real, imaginary );								// storing complex multiplier in for loop
	Complex n1(1,0);									// complex number 1
	Complex n2 = n1/ret;									// complex number for negative exponent

	if ( ret.real == 0 && ret.imaginary == 0 && n == 0 )
		{cout << "undefined" << endl;	exit(1);}

	else if ( n == 0 )										// case where n = 0
		{
		return n1;
		}
	else if ( n < 0 )									// negative exponent case
		{
			for ( int j = 2; j <= n; j++ )
				{
					ret = z * ret;
				}	
			return n2;
		}
	else											// standard case
		{

			for ( int j = 2; j <= n; j++ )
				{
					ret = z * ret;
				}	
			return ret;
		}
	
}	
//-----------------------------------------------------------------------------
//=============================================================================


//=============================================================================
// MODIFIERS
//=============================================================================
//-----------------------------------------------------------------------------
// setReal
// sets the real part of the complex number
//-----------------------------------------------------------------------------
void		Complex::setReal ( double r )
{
		this-> real = r;
}
//-----------------------------------------------------------------------------
// setImag
// sets the imaginary part of the complex number
//-----------------------------------------------------------------------------
void		Complex::setImag ( double i )
{
		this-> imaginary = i;
}
//-----------------------------------------------------------------------------
// getReal
// returns the real part of the complex number
//-----------------------------------------------------------------------------
double		Complex::getReal ( void ) const
{
		return real;			
}
//-----------------------------------------------------------------------------
// getImag
// returns the imaginary part of the complex number
//-----------------------------------------------------------------------------
double		Complex::getImag ( void ) const
{
		return imaginary;			
}
//-----------------------------------------------------------------------------
//=============================================================================


//=============================== END =========================================
