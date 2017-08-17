/************************************************************************
** Author: Cuyler Frisby
** Date: 8/12/2017
** Description: This is the implementation file for the Product class.
**              The declaration for this class can be found in
**              "Product.hpp". A Product object represents a product
**              with an ID code, title, description, price, and
**              quantity available.
************************************************************************/

#include <string>
#include "Product.hpp"

using std::string;

/********************************************************************
** Description: This is the  constructor for the Product class. It
**              takes five values as parameters and uses them to
**              initialize the corresponding data members.
********************************************************************/
Product::Product(string id, string t, string d, double p, int qa)
{
    idCode = id;
    title = t;
    description = d;
    price = p;
    quantityAvailable = qa;
}

/*************************************************************************
** Description: Get method for idCode.
*************************************************************************/
string Product::getIdCode()
{
    return idCode;
}

/*************************************************************************
** Description: Get method for title.
*************************************************************************/
string Product::getTitle()
{
    return title;
}

/*************************************************************************
** Description: Get method for description.
*************************************************************************/
string Product::getDescription()
{
    return description;
}

/*************************************************************************
** Description: Get method for price.
*************************************************************************/
double Product::getPrice()
{
    return price;
}

/*************************************************************************
** Description: Get method for quantityAvailable.
*************************************************************************/
int Product::getQuantityAvailable()
{
    return quantityAvailable;
}

/***************************************************************************
** Description: This method decreases the quantityAvailable for the Product
**              by one.
***************************************************************************/
void Product::decreaseQuantity()
{
    quantityAvailable--;
}
