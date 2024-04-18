#include <iostream>
#include <string>
#include "budgettracker.h"

void displayMenu() {
    std::cout << "=== Budget Tracker Menu ===" << std::endl;
    std::cout << "1. Add Expense" << std::endl;
    std::cout << "2. Add Income" << std::endl;
    std::cout << "3. View Expenses" << std::endl;
    std::cout << "4. View Incomes" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "===========================" << std::endl;
}

int main() {
    BudgetTracker budget;

    int choice;
    do {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                float amount;
                std::string category, description;
                std::cout << "Enter expense amount: ";
                std::cin >> amount;
                std::cout << "Enter expense category: ";
                std::cin >> category;
                std::cout << "Enter expense description: ";
                std::cin >> description;
                Expense exp(amount, category, description);
                budget.addExpense(exp);
                break;
            }
            case 2: {
                float amount;
                std::string source;
                std::cout << "Enter income amount: ";
                std::cin >> amount;
                std::cout << "Enter income source: ";
                std::cin >> source;
                Income inc(amount, source);
                budget.addIncome(inc);
                break;
            }
            case 3:
                budget.printExpenses();
                break;
            case 4:
                budget.printIncomes();
                break;
            case 5:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
