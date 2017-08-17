/************************************************************************
** Author: Cuyler Frisby
** Date: 8/12/2017
** Description: Main method for testing the Store class.
************************************************************************/

#include <string>
#include "Store.hpp"

using std::string;

int main()
{
    Store myStore;

    Product product1("001", "Giant Robot", "Description for Giant Robot", 6998.35, 2);
    Product product2("002", "Live Goat", "Just what it sounds like - a goat that is alive.", 695.97, 1);
    Product product3("003", "red blender", "sturdy blender perfect for making smoothies and sauces", 350, 1);
    Product product4("004", "hot air ballon", "fly into the sky in your own balloon - comes in red, blue, or chartreuse", 700, 1);
    Product product5("005", "whoopie cushion", "Perfect for playing jokes on the unsuspecting victim", 5, 2);
    Product product6("006", "Nintendo Switch", "The hottest console out there - get yours today!", 299.95, 2);
    Product product7("007", "Destiny 2", "Will be released September 6, 2017.", 60, 2);
    Product product8("008", "GoPro Hero Black 5", "The hottest action camera out there.", 399, 1);
    Product product9("009", "Joke Kit", "Includes a whoopie cushion and many more surprises", 45, 10);
    Product product10("010", "Box of Pencils", "A big box of pencils. You can use them for writing or whatever.", 10, 99);

    Product* prod1 = &product1;
    Product* prod2 = &product2;
    Product* prod3 = &product3;
    Product* prod4 = &product4;
    Product* prod5 = &product5;
    Product* prod6 = &product6;
    Product* prod7 = &product7;
    Product* prod8 = &product8;
    Product* prod9 = &product9;
    Product* prod10 = &product10;

    myStore.addProduct(prod1);
    myStore.addProduct(prod2);
    myStore.addProduct(prod3);
    myStore.addProduct(prod4);
    myStore.addProduct(prod5);
    myStore.addProduct(prod6);
    myStore.addProduct(prod7);
    myStore.addProduct(prod8);
    myStore.addProduct(prod9);
    myStore.addProduct(prod10);

    Customer customer1("Cuyler", "001", true);
    Customer customer2("Meghan", "002", true);
    Customer customer3("Beckett", "003", false);

    Customer* cust1 = &customer1;
    Customer* cust2 = &customer2;
    Customer* cust3 = &customer3;

    myStore.addMember(cust1);
    myStore.addMember(cust2);
    myStore.addMember(cust3);

    myStore.productSearch("red");

    myStore.addProductToMemberCart("001", "001");
    myStore.addProductToMemberCart("001", "001");
    myStore.addProductToMemberCart("001", "001");
    myStore.addProductToMemberCart("010", "001");
    myStore.addProductToMemberCart("002", "001");
    myStore.addProductToMemberCart("999", "004");

    myStore.checkOutMember("001");
    myStore.checkOutMember("002");
    myStore.checkOutMember("004");
}

