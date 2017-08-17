/********************************************************************
** Author: Cuyler Frisby
** Date: 7/24/2017
** Description: This file contains a class declaration for a class
**              called Quadratic. The function definitions for this
**              class can be found in "Quadratic.cpp".
********************************************************************/

#ifndef QUADRATIC_HPP
#define QUADRATIC_HPP

class Quadratic
{
    private:
        double a, b, c;
    public:
	Quadratic();
	Quadratic(double, double, double);
	double getA();
	double getB();
	double getC();
	void setA(double);
	void setB(double);
	void setC(double);
	double valueFor(double);
	int numRealRoots();
};
#endif
