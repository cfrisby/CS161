/********************************************************************
** Author: Cuyler Frisby
** Date: 7/20/2017
** Description: This file contains a class declaration for a class
**              called Box. The function definitions for this class
**              can be found in "Box.cpp".
********************************************************************/

#ifndef BOX_H
#define BOX_H

// Box class declaration
class Box
{
    private:
        double height;
	double width;
	double length;
    public:
        Box();
	Box(double h, double w, double l);
	bool setHeight(double);
	bool setWidth(double);
	bool setLength(double);
	double calcVolume();
	double calcSurfaceArea();
};
#endif
