#include <iostream>
#include <string>
#include <limits>

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    if (b == 0)
    {
        throw std::invalid_argument("Ділити на нуль - не чотко 😡");
    }
    return a / b;
}

int main()
{
    while (true)
    {
        double number_1;
        double number_2;
        std::string operation;
        
        if (operation == "q")
        {
            std::cout << "Пока-пока бр бр патапім 👋" << std::endl;
            break;
        }

        std::cout << "Введіть перше число: ";
        if (!(std::cin >> number_1))
        {
            std::cout << "Не чотко введення 😭" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        std::cout << "Введіть друге число: ";
        if (!(std::cin >> number_2))
        {
            std::cout << "Ви ввели не число - ти не чотік 😡" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        std::cout << "Оберіть операцію (+, -, *, /, q): ";
        std::cin >> operation;

        if (operation == "+")
        {
            double result = add(number_1, number_2);
            std::cout << number_1 << "+" << number_2 << "=" << result << std::endl;
        }
        else if (operation == "-")
        {
            double result = subtract(number_1, number_2);
            std::cout << number_1 << "-" << number_2 << "=" << result << std::endl;
        }
        else if (operation == "*")
        {
            double result = multiply(number_1, number_2);
            std::cout << number_1 << "*" << number_2 << "=" << result << std::endl;
        }
        else if (operation == "/")
        {
            try
            {
                double result = divide(number_1, number_2);
                std::cout << number_1 << "/" << number_2 << "=" << result << std::endl;
            }
            catch (const std::invalid_argument& e)
            {
                std::cout << e.what() << std::endl;
            }
        }
        else
        {
            std::cout << "Такого оператора - не існує 😭 Не чотко" << std::endl;
        }
    }
}