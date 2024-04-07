#include "budgettracker.h"
#include <iostream>

// Ініціалізація статичного поля
int BudgetTracker::instances = 0;

BudgetTracker::BudgetTracker() {
    instances++;
    std::cout << "BudgetTracker created." << std::endl;
}

BudgetTracker::~BudgetTracker() {
    instances--;
    std::cout << "BudgetTracker destroyed." << std::endl;
}

void BudgetTracker::addExpense(const Expense& exp) {
    expenses.push_back(exp);
}

void BudgetTracker::addIncome(const Income& inc) {
    incomes.push_back(inc);
}

void BudgetTracker::printExpenses() const {
    for (const Expense& exp : expenses) {
        std::cout << "Amount: " << exp.getAmount() << ", Category: " << exp.getCategory() << ", Description: " << exp.getDescription() << std::endl;
    }
}

void BudgetTracker::printIncomes() const {
    for (const Income& inc : incomes) {
        std::cout << "Amount: " << inc.getAmount() << ", Source: " << inc.getSource() << std::endl;
    }
}

int BudgetTracker::getInstances() {
    return instances;
}
