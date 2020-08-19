
#include <iostream>

class Base
{
public:
    Base(int a, int b)
    {
        a_ = a;
        b_ = b;
    }

    int geta()
    {
        return a_;
    }

    int getb()
    {
        return b_;
    }

    virtual int getsum()
    {
        return a_ + b_;
    }

public:

private:

    int a_;
    int b_;
};

class Base1 : public Base
{
public:
public:
    Base1(int c, int a, int b) : Base(a, b)
    {
        c_ = c;
    }

    int getc()
    {
        return c_;
    }

    int getsum()
    {
        return c_ + geta() + getb();
    }

private:
    int c_;
};


int GetSum(Base* ptr)
{
    return ptr->getsum();
}

int main()
{
    Base* ptr = new Base1(1, 2, 3);

    std::cout << ptr->geta() << "  "<< ptr->getb() << std::endl;

    std::cout << GetSum(ptr) << std::endl;

    return 0;
}