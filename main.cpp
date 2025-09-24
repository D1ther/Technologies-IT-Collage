#include <iostream>
#include <string>

int main()
{
    while (true)
    {
        double number_1;
        double number_2;
        std::string operation;

        try
        {
            std::cout << "Введіть перше число: ";
            std::cin >> number_1;

            std::cout << "Введіть друге число: ";
            std::cin >> number_2;

            std::cout << "Оберіть операцію (+, -, *, /): ";
            std::cin >> operation;
        }
        catch(const std::exception& e)
        {
            std::cerr << "Некоректне введення. Спробуйте ще раз." << std::endl;
            break;
        }

        if (operation == "+")
        {
            double result = number_1 + number_2;
            std::cout << number_1 << "+" << number_2 << "=" << result << std::endl;
        }
        else if (operation == "-")
        {
            double result = number_1 - number_2;
            std::cout << number_1 << "-" << number_2 << "=" << result << std::endl;
        }
        else if (operation == "*")
        {
            double result = number_1 * number_2;
            std::cout << number_1 << "*" << number_2 << "=" << result << std::endl;
        }
        else if (operation == "/")
        {
            if (number_2 == 0)
            {
                std::cout << "Ділити на нуль - не чотко 😡" << std::endl;
            }
            else
            {
                double result = number_1 / number_2;
                std::cout << number_1 << "/" << number_2 << "=" << result << std::endl;
            }
        }
        else
        {
            std::cout << "Такого оператора - не існує 😭 Не чотко" << std::endl;
        }
        
    }
    
}
