/************************************************************************
** Author: Cuyler Frisby
** Date: 8/12/2017
** Description: This is the implementation file for the Store class.
**              The declaration for this class can be found in
**              "Store.hpp". A Store object represents a store, which
**              has some number of products in its inventory and some
**              number of customers as members.
************************************************************************/

#include <iostream>
#include <cctype>
#include <iomanip>
#include "Store.hpp"

using std::string;
using std::vector;
using std::toupper;
using std::tolower;
using std::cout;
using std::endl;

/********************************************************************
** Description: This method adds a product to the inventory.
********************************************************************/
void Store::addProduct(Product* p)
{
   inventory.push_back(p);
}

/********************************************************************
** Description: This method adds a customer to the members.
********************************************************************/
void Store::addMember(Customer* c)
{
   members.push_back(c);
}

/*********************************************************************
** Description: This method returns a pointer to a Product with
**              matching ID. Returns NULL if no matching ID is found.
*********************************************************************/
Product* Store::getProductFromID(string id)
{
    Product* matchingProduct = NULL;

    for (int count = 0; count < inventory.size(); count++)
        {
	    if (inventory[count]->getIdCode() == id)
	    {
	        matchingProduct = inventory[count];
	    }
	}

    return matchingProduct;
        
}

/*********************************************************************
** Description: This method returns a pointer to a Customer with
**              matching ID. Returns NULL if no matching ID is found.
*********************************************************************/
Customer* Store::getMemberFromID(string id)
{
    Customer* matchingCustomer = NULL;

    for (int count = 0; count < members.size(); count++)
        {
	    if (members[count]->getAccountID() == id)
	    {
	        matchingCustomer = members[count];
	    }
	}

    return matchingCustomer;
        
}

/*********************************************************************
** Description: This method prints out the Product title, ID code,
**              price, and description for every product whose title
**              or description contains the search string.
*********************************************************************/
void Store::productSearch(string str)
{
    string strUpper = str;
    string strLower = str;

    strUpper[0] = toupper(strUpper[0]);
    strLower[0] = tolower(strLower[0]);

    for (int count = 0; count < inventory.size(); count++)
        {
	    if (inventory[count]->getTitle().find(strUpper) != string::npos || inventory[count]->getDescription().find(strUpper) != string::npos || inventory[count]->getTitle().find(strLower) != string::npos || inventory[count]->getDescription().find(strLower) != string::npos )
	    {
	        cout << inventory[count]->getTitle() << endl;
		cout << "ID Code: " << inventory[count]->getIdCode() << endl;
	        cout << "Price: $" << inventory[count]->getPrice() << endl;
	        cout << inventory[count]->getDescription() << endl;
		cout << endl;
	    }
	}  
}

/*********************************************************************
** Description: This method adds a Product to a Person's cart.
**              If the Product or Person does not exist, or if the
**              item is out of stock, a message prints out.
*********************************************************************/
void Store::addProductToMemberCart(string pID, string mID)
{
    Product* product = getProductFromID(pID);
    Customer* member = getMemberFromID(mID);

    if (product)
    {
        if (member)
	{
	    if (product->getQuantityAvailable() > 0)
            {
	        member->addProductToCart(pID);
	    }     
	    else
	    {
	        cout << "Sorry, product #" << pID << " is currently out of stock." << endl;
	    }
	}
    }

    if (!product)
        cout << "Product #" << pID << " not found." << endl;
    if (!member)
        cout << "Member #" << mID << " not found." << endl;
}

/**********************************************************************
** Description: This method prints out the title and price for each
**              Product in the cart and decreases the available
**              quantity by 1. If any product has already sold out or
**              the member ID is not found, corresponding messages
**              will be displayed. At the bottom, the method prints
**              the subtotal for the cart, the shipping cost, and the
**              final cost for the cart. IStore.addProduct("001", "Giant Robot", "Description for Giant Robot", 7000, 2);f the cart is empty, the
**              method simply prints a message.
i**********************************************************************/
void Store::checkOutMember(string mID)
{
    Customer* member = getMemberFromID(mID);
    double shippingCostPercentage = 0.07;
    double cartSubtotal = 0;  
    
    if (!member)
    {
        cout << "Member #" << mID << " not found." << endl;
    }
    else
    {
        if (member->isPremiumMember())
            shippingCostPercentage = 0;

        if (member->getCart().empty())
        {
            cout << "There are no items in the cart." << endl;
        }
        else
        {
            for (int count = 0; count < member->getCart().size(); count++)
	    {
		Product* product = getProductFromID(member->getCart()[count]);

		if (product->getQuantityAvailable() > 0)
	        {
		    cout << product->getTitle() << " - $" << product->getPrice() << endl;
		    cartSubtotal += product->getPrice();
                    product->decreaseQuantity();
		}
		else
		{
	            cout << "Sorry, product #" << product->getIdCode() << ", \"" << product->getTitle() << "\", is no longer available." << endl;
		}
	    }
            double shippingCost = cartSubtotal * shippingCostPercentage;

            cout << "Subtotal: $" << std::fixed << std::setprecision(2) << cartSubtotal << endl;
            cout << "Shipping Cost: $" << std::fixed << std::setprecision(2) << shippingCost << endl;
	    cout << "Total: $" << cartSubtotal + shippingCost << endl;
	    member->emptyCart();
        }
    }
}

