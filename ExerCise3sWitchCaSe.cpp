#include <iostream>
using namespace std;

int main() {
    // Displaying the restaurant menu
    cout << "Welcome to Our Restaurant!" << endl;
    cout << "1. Combo A - ksh1200" << endl;
    cout << "   - Burger\n   - Fries\n   - Drink" << endl;
    cout << "2. Combo B - ksh1000" << endl;
    cout << "   - Sandwich\n   - Salad\n   - Drink" << endl;
    cout << "3. Combo C - ksh850" << endl;
    cout << "   - Pizza\n   - Wings\n   - Drink" << endl;

    // Get user input
    cout << "Enter the number of your selected combo: ";
    int choice;
    cin >> choice;

    // Variables to store the selected food items and their costs
    string foodItems;
    double totalCost = 0.0;

    // Determine the selected combo and calculate the total cost
    switch (choice) {
        case 1:
            foodItems = "Burger, Fries, Drink";
            totalCost = 1200;
            break;
        case 2:
            foodItems = "Sandwich, Salad, Drink";
            totalCost = 1000;
            break;
        case 3:
            foodItems = "Pizza, Wings, Drink";
            totalCost = 850;
            break;
        default:
            cout << "Invalid choice. Please select a valid combo." << endl;
            return 1; // Exit the program with an error code
    }

    // Display the selected food items, their costs, and the total bill
    cout << "\nYou have selected Combo " << choice << ":" << endl;
    cout << "Food Items: " << foodItems << endl;
    cout << "Total Cost: Ksh" << totalCost << endl;

    return 0;
}
