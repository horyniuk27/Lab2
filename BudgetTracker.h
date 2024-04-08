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
    virtual ~BudgetTracker();
    virtual void virtualFunction1();
    virtual void virtualFunction2();
    void addExpense(const Expense& exp);
    void addIncome(const Income& inc);
    void printExpenses() const;
    void printIncomes() const;
    static int getInstances();

    [[maybe_unused]] virtual void pureVirtualFunction() = 0;
    virtual void someFunction3() final;
};

#endif // BUDGETTRACKER_H
