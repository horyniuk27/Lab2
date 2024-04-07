#ifndef INCOME_H
#define INCOME_H

#include <string>

class Income {
private:
    float amount;
    std::string source;

public:
    // Конструктор
    Income(float amt, const std::string& src);

    // Перевантажений конструктор
    Income();

    // Деструктор
    ~Income();

    // Методи доступу до полів класу
    float getAmount() const;
    std::string getSource() const;
};

#endif // INCOME_H
