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

    // Метод для виведення витрат
    void printExpenses() const;

    // Метод для виведення доходів
    void printIncomes() const;

    // Статичний метод для отримання кількості створених об'єктів
    static int getInstances();
};

#endif // BUDGETTRACKER_H
