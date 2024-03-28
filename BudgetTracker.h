#ifndef BUDGETTRACKER_H
#define BUDGETTRACKER_H

#include "expense.h"
#include "income.h"
#include <vector>

class BudgetTracker {
private:
    std::vector<Expense> expenses;
    std::vector<Income> incomes;

public:
    // Конструктор за замовчуванням
    BudgetTracker();

    // Деструктор
    ~BudgetTracker();

    // Метод для додавання витрати
    void addExpense(const Expense& exp);

    // Метод для додавання доходу
    void addIncome(const Income& inc);
};

#endif // BUDGETTRACKER_H
