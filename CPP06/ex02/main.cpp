#include "Base.hpp"

Base::~Base(){}

A::~A(){}
B::~B(){}
C::~C(){}

Base *generate(void)
{
    switch((rand() % 3))
    {
        case 0:
        {
            std::cout << "Generate A\n";
            return (new A);
        }
        case 1:
        {
            std::cout << "Generate B\n";
            return (new B);
        }
        case 2:
        {
            std::cout << "Generate C\n";
            return (new C);
        }
    }
    return (nullptr);
}

void identify_from_pointer(Base *p)
{
    A *a = dynamic_cast<A*>(p);
    if (a)
    {
        std::cout << "Pointer on class A\n";
        return ;
    }
    B *b = dynamic_cast<B*>(p);
    if (b)
    {
       std::cout << "Pointer on class B\n";
       return ;
    }
    C *c = dynamic_cast<C*>(p);
    if (c)
    {
        std::cout << "Pointer on class C\n";
        return ;
    }
    std::cout << "Not found need class\n";
}

void identify_from_reference(Base &p)
{
    try
    {
        Base &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "Reference a -> class A\n";
    }
    catch (std::exception &e)
    {
        try
        {
            Base &b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "Reference b -> class B\n";
        }
        catch (std::exception &e1)
        {
            try
            {
                Base &c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "Reference c -> class C\n";
            }
            catch (std::exception &e2)
            {
                std::cout << "Not found need class\n";
            }
        }
    }
}

int main()
{
    srand(time(NULL));
    Base *a = generate();
    identify_from_pointer(a);
    std::cout << std::endl;
    identify_from_reference(*a);
    return (0);
}