#ifndef BUDGETTRACKER_H
#define BUDGETTRACKER_H

#include "expense.h"
#include "income.h"
#include <vector>

class BudgetTracker {
private:
    std::vector<Expense> expenses;
    std::vector<Income> incomes;
    static int instances;

public:
    BudgetTracker();
    ~BudgetTracker();
    void addExpense(const Expense& exp);
    void addIncome(const Income& inc);
    void printExpenses() const;
    void printIncomes() const;
    static int getInstances();
};

#endif // BUDGETTRACKER_H
