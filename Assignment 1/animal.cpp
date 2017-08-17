


/**********************************************************************
** Author: Cuyler Frisby
** Date: 6/28/2017
** Description: This program asks for the user's favorite animal and prints the result
***********************************************************************/

#include <iostream>
#include <string>

// a simple example program
int main()
{
    std::string faveAnimal;
    std::cout << "Please enter your favorite animal." << std::endl;
    std::cin >> faveAnimal;
    std::cout << "Your favorite animal is the " << faveAnimal;
    std::cout << "." << std::endl;

    return 0;
}
