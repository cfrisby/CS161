/************************************************************************
** Author: Cuyler Frisby
** Date: 8/12/2017
** Description: This is the implementation file for the Customer class.
**              The declaration for this class can be found in
**              "Customer.hpp". A Customer object represents a 
**              customer with a name and account ID. Customers must be
**              members of the Store to make a purchase. Premium
**              members get free shipping.
************************************************************************/

#include <string>
#include <vector>
#include "Customer.hpp"

using std::string;
using std::vector;

/********************************************************************
** Description: This is the  constructor for the Customer class.
**              It takes three values as parameters and uses them to
**              initialize the corresponding data members.
********************************************************************/
Customer::Customer(string n, string a, bool pm)
{
    name = n;
    accountID = a;
    premiumMember = pm;
}

/***************************************************************************
** Description: Get method for accountID.
***************************************************************************/
string Customer::getAccountID()
{
    return accountID;
}

/***************************************************************************
** Description: Get method for cart.
***************************************************************************/
vector<string> Customer::getCart()
{
    return cart;
}

/**************************************************************************
** Description: This method adds a product ID code to the Customer's cart.
**************************************************************************/
void Customer::addProductToCart(string id)
{
    cart.push_back(id);
}

/**************************************************************************
** Description: This method returns whether the customer is a premium
**              member.
**************************************************************************/
bool Customer::isPremiumMember()
{
    if (premiumMember == true)
        return true;
    else
        return false;
}

/**************************************************************************
** Description: This method empties the Customer's cart.
**************************************************************************/
void Customer::emptyCart()
{
    cart.clear();
}
