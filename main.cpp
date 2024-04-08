#include <iostream>
#include "budgettracker.h"

int main() {
    BudgetTracker budget;

    Expense exp1(50.0, "Food", "Lunch");
    Income inc1(100.0, "Salary");

    budget.addExpense(exp1);
    budget.addIncome(inc1);

    budget.printExpenses();
    budget.printIncomes();

    std::cout << "Number of BudgetTracker instances: " << BudgetTracker::getInstances() << std::endl;

    return 0;
}
