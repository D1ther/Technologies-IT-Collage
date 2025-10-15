#include <iostream>
#include <vector>

double const DollarPrice = 41.75;

struct Valute
{
    std::string Name;
    std::string CharCode;
    int Price;
};


void ShowValuteDetail(Valute valute)
{
    std::cout << "Назва: " << valute.Name << std::endl;
    std::cout << "Код: " << valute.CharCode << std::endl;
    std::cout << "Ціна: " << valute.Price << "💲" << std::endl;
    std::cout << "Ціна в гривнях: " << valute.Price * DollarPrice << "₴" << std::endl;
}

void ShowValutes(const std::vector<Valute>& valutes)
{
    if (valutes.empty())
    {
        std::cout << "Ви бідний, у вас нема крипти! 😢" << std::endl;
        return;
    }

    for (const auto& valute : valutes)
    {
        std::cout << valute.Name << " - " << valute.CharCode << " - " << valute.Price << "💲" << std::endl;
    }
}

void AddValute(std::vector<Valute>& valutes, const Valute& newValute)
{
    valutes.push_back(newValute);
    std::cout << "Криптульку додано успішно! ✅" << std::endl;
}

int main()
{
    std::vector<Valute> valutes;

    while (true)
    {
        std::cout << "\nОберіть дію з криптою 🔥\n" << std::endl;
        std::cout << "1. Показати всі ваші криптульки 🤑" << std::endl;
        std::cout << "2. Додати нову криптульку 🤩" << std::endl;
        std::cout << "3. Вивести ціну криптульки 📊" << std::endl;
        std::cout << "4. Вийти з програми 👋" << std::endl;

        int choice = 0;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            ShowValutes(valutes);
            break;
        
        case 2:
        {
            std::string NameValute = "";
            std::string CharCodeValute = "";
            int PriceValute = 0;
            
            std::cout << "Вкажіть назву вашої крипти 😎" << std::endl;
            std::cin >> NameValute;
            std::cout << "Вкажіть код вашої крипти 👨‍💻" << std::endl;
            std::cin >> CharCodeValute;
            std::cout << "Вкажіть ціну вашої крипти 💰" << std::endl;
            std::cin >> PriceValute;

            Valute newValute = {NameValute, CharCodeValute, PriceValute};
            AddValute(valutes, newValute);

            std::cout << "Кількість ваших криптульок 💲💲💲: " << valutes.size() << std::endl;
            break;
        }

        case 3:
        {
            if (valutes.empty())
            {
                std::cout << "Ви бідний, у вас нема крипти! 😢" << std::endl;
                break;
            }

            std::string CharCodeValute = "";
            std::cout << "Введіть код крипти, щоб взнати 😁: " << std::endl;
            std::cin >> CharCodeValute;

            bool found = false;
            for (const auto& valute : valutes)
            {
                if (valute.CharCode == CharCodeValute)
                {
                    ShowValuteDetail(valute);
                    found = true;
                    break;
                }

            }

            if (!found)
            {
                std::cout << "Криптульку з таким кодом не знайдено! 😢" << std::endl;
                break;
            }
            
            break;
        }
        
        case 4:
            std::cout << "До побачення! 👋" << std::endl;
            return 0;
        
        default:
            std::cout << "Невірний вибір! Спробуйте ще раз." << std::endl;
            break;
        }
    }

    return 0;
}