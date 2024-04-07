#include "budgettracker.h"

int main() {
    // Створення об'єкта BudgetTracker
    BudgetTracker budget;

    // Додавання витрат та доходу
    Expense exp1(50.0, "Food", "Lunch");
    Income inc1(100.0, "Salary");

    budget.addExpense(exp1);
    budget.addIncome(inc1);

    // Друкуємо витрати та доходи
    budget.printExpenses();
    budget.printIncomes();

    // Перевірка створених об'єктів
    std::cout << "Number of BudgetTracker instances: " << BudgetTracker::getInstances() << std::endl;

    return 0;
}
