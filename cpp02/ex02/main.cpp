#include "fixed.hpp"
int main(void)
{
    // basic construction
    Fixed a(0);
    Fixed b(1);
    Fixed c(42.42f);
    Fixed d(-42.42f);

    // arithmetic
    std::cout << "1 + 42.42 = " << b + c << std::endl;
    std::cout << "1 - 42.42 = " << b - c << std::endl;
    std::cout << "42.42 * -42.42 = " << c * d << std::endl;

    // division by zero (no protection exists, see what happens)
    std::cout << "1 / 0 = " << b / a << std::endl;

    // negative numbers
    std::cout << "-42.42 as int = " << d.toInt() << std::endl;
    std::cout << "-42.42 as float = " << d.toFloat() << std::endl;

    // comparison
    std::cout << "(42.42 > -42.42) = " << (c > d) << std::endl;
    std::cout << "(42.42 == 42.42) = " << (c == c) << std::endl;
    std::cout << "(42.42 != -42.42) = " << (c != d) << std::endl;

    // pre vs post increment — these behave differently
    Fixed e(1);
    std::cout << "e before = " << e << std::endl;
    std::cout << "e++ = " << e++ << std::endl;  // prints old value
    std::cout << "e after = " << e << std::endl;

    Fixed f(1);
    std::cout << "f before = " << f << std::endl;
    std::cout << "++f = " << ++f << std::endl;  // prints new value
    std::cout << "f after = " << f << std::endl;

    // min and max
    std::cout << "min(42.42, -42.42) = " << Fixed::min(c, d) << std::endl;
    std::cout << "max(42.42, -42.42) = " << Fixed::max(c, d) << std::endl;

    // min and max with const objects
    Fixed const g(100);
    Fixed const h(-100);
    std::cout << "min(100, -100) = " << Fixed::min(g, h) << std::endl;
    std::cout << "max(100, -100) = " << Fixed::max(g, h) << std::endl;

    // chained arithmetic
    std::cout << "1 + 2 - 3 * 4 / 2 = " << Fixed(1) + Fixed(2) - Fixed(3) * Fixed(4) / Fixed(2) << std::endl;

    // self assignment
    Fixed i(5);
    std::cout << "i = " << i << std::endl;

    return 0;
}