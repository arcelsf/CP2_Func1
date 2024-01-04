// mod1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int value1, value2, choice, exit;

    std::cout << "Welcome!\n\n";
    std::cout << "Enter The First Value\n\n";
    while (!(cin >> value1)) {
        cin.clear();  // clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        cout << "Invalid input. Please enter a valid number: ";
    }
    std::cout << "\nEnter The Second Value\n\n";
    while (!(cin >> value2)) {
        cin.clear();  // clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        cout << "Invalid input. Please enter a valid number: ";
    }
    std::cout << "\n[1]Addition\n[2]Subtraction\n[3]Multiplication\n[4]Division\n\n";
    while (!(cin >> choice) || choice < 1 || choice > 4) {
        cin.clear();  // clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        cout << "Invalid input. Please enter a valid number: ";
    }


    system("cls");

    switch (choice) {



    case 1:
        std::cout << "The Sum is " << value1 + value2 << ".\n\n";
        break;
    case 2:
        std::cout << "The Difference " << value1 - value2 << ".\n\n";
        break;
    case 3:
        std::cout << "The Product is " << value1 * value2 << ".\n\n";
        break;
    case 4:
        std::cout << "The Product is " << value1 / value2 << ".\n\n";
        break;
    default:
        std::cout << "Invalid Input\n\n";
        break;


    }  
        
    std::cout << "Do you want to continue? [1] to continue [2] to exit\n";
    while (!(cin >> exit)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number: ";
    }
    switch (exit) {
    case 1:
        system("cls");
        main();
        break;
    case 2:
        system("cls");
        cout << "Thank you and have a nice day!";
        break;
    }

      
    

    



    return 0;
}



