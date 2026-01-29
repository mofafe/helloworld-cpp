#include <iostream>
#include <string>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        std::string str = "";
        if (i % 3 == 0)
        {
            str = str + "Fizz";
        }
        if (i % 5 == 0)
        {
            str = str + "Buzz";
        }
        if (str == "")
        {
            std::cout << i << std::endl;
        }
        else
        {
            std::cout << str << std::endl;
        }
    }
    return 0;
}