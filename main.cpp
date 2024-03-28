#include "budgettracker.h"

int main() {
    // Створення об'єкта BudgetTracker
    BudgetTracker budget;

    // Додавання витрат та доходу
    Expense exp1(50.0, "Food", "Lunch");
    Income inc1(100.0, "Salary");

    budget.addExpense(exp1);
    budget.addIncome(inc1);

    return 0;
}
