/*
Define a class for rational numbers. A rational number is a number that can be represented as the quotient of two integers. 
For example, 1/2, 3/4, 64/2, and so forth are all rational numbers. 
(By 1/2, etc., we mean the everyday meaning of the fraction, not the integer division this expression would produce in a C++ program.) 
Represent rational numbers as two values of type int, one for the numerator and one for the denominator. 
Call the class Rational.
Include a constructor with two arguments that can be used to set the member variables of an object to any legitimate values. 
Also include a constructor which has only a single parameter of type int; 
call this single parameter whole_number and define the constructor so that the object will be initialized to the rational number whole_number/1. 
Also include a default constructor that initializes an object to 0 (that is, to 0/1).
Overload the input and output operators >> and <<. Numbers will be input and output in the form 1/2, 15/32, 300/401, and so forth. 
Note that the numerator, the denominator, or both may contain a minus sign, so -1/2, 15/32, and -300/-401 are also possible inputs. 
Overload all of the following operators so that they correctly apply to the type Rational: ==, <, <=, >, >=, +, -, *, and /. 
Also write a test program to test your class.

*/