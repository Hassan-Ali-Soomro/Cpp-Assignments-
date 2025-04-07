#include <iostream>

using namespace std;

int main() {
    int numItems;

    // Input the number of items in the inventory
    cout << "Enter the number of items in the inventory: ";
    cin >> numItems;

    // Validate the input for the number of items (must be positive)
    while (numItems <= 0) {
        cout << "Invalid input. Please enter a positive number of items: ";
        cin >> numItems;
    }

    // Initialize variables
    string itemName;
    int itemQuantity;
    double itemPrice;
    double totalInventoryValue = 0.0;

    // Process each item in the inventory
    for (int i = 1; i <= numItems; ++i) {
        // Input item details
        cout << "Item " << i << ":" << endl;
        cout << "Name: ";
        cin >> itemName;
        cout << "Quantity: ";
        cin >> itemQuantity;

        // Validate the input for quantity (must be non-negative)
        while (itemQuantity < 0) {
            cout << "Invalid input. Please enter a non-negative quantity: ";
            cin >> itemQuantity;
        }

        cout << "Price per unit: $";
        cin >> itemPrice;

        // Calculate and display the total value for the current item
        double itemTotalValue = itemQuantity * itemPrice;
        cout << "Total value for " << itemName << ": $" << itemTotalValue << endl;

        // Add the item's total value to the overall inventory value
        totalInventoryValue += itemTotalValue;
    }

    // Display the total inventory value
    cout << "Total inventory value: $" << totalInventoryValue << endl;

    return 0;
}

