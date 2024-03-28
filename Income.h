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
};

#endif // INCOME_H