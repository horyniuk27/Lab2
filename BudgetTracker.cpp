//
// Created by G_I on 28.03.2024.
//

#include "BudgetTracker.h"
#include <vector>

class BudgetTracker {
private:
    std::vector<Expense> expenses;
    std::vector<Income> incomes;

public:
    // Конструктор за замовчуванням
    BudgetTracker() {
        std::cout << "BudgetTracker created." << std::endl;
    }

    // Деструктор
    ~BudgetTracker() {
        std::cout << "BudgetTracker destroyed." << std::endl;
    }

    // Метод для додавання витрати
    void addExpense(const Expense& exp) {
        expenses.push_back(exp);
    }

    // Метод для додавання доходу
    void addIncome(const Income& inc) {
        incomes.push_back(inc);
    }
};
