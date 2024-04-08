#ifndef INCOME_H
#define INCOME_H

#include <string>

class Income {
private:
    float amount;
    std::string source;

public:
    Income(float amt, const std::string& src);
    Income();
    ~Income();
    float getAmount() const;
    std::string getSource() const;
    virtual void virtualFunction1() {}
    virtual void virtualFunction2() {}
};

#endif // INCOME_H
