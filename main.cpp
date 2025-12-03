#include <cstdlib>
#include <iostream>
#include <ctime>

int getRandomNumber()
{
    return std::rand() % 100;
}

void checkNumber(int number, int point)
{
    if (number > point)
    {
        std::cout << "Думаю ти маєш спуститися з неба на землю 🙄\n";
    }
    else if (number < point)
    {
        std::cout << "Підніми своє число хлопак 🔥\n";
    }
    else
    {
        std::cout << "Вітаю! Ти вгадав число! 🎉\n";
        return;
    }
}

void startGame()
{
    int lifes = 10;
    int point = getRandomNumber();
    int number;

    std::cout << "===Вгадай число від 0 до 99. У тебе є " << lifes << " спроб===\n\n";
    std::cin >> number;

    while (true)
    {
        while (number != point && lifes > 1)
        {
            checkNumber(number, point);
            --lifes;
            std::cout << "Залишилось спроб: " << lifes << "\nСпробуй ще раз: ";
            std::cin >> number;

            if (lifes == 1)
            {
                std::cout << "\n===БЛІІІНН, ти програв. Загадане число було: " << point << "===\n";
                return;
            }
        }

        checkNumber(number, point);
        break;
    }
}


int main()
{
    std::srand(std::time(0));

    while (true)
    {
        startGame();

        char choice;
        std::cout << "Бажаєш зіграти ще раз? (y/n): \n\n";
        std::cin >> choice;

        switch (choice)
        {
        case 'y':
            startGame();
            break;
        
        case 'n':
            std::cout << "Дякую за гру! До зустрічі!\n";
            return 0;
        
        default:
            std::cout << "Невірний вибір. Спробуй ще раз.\n";
            break;
        }
    }
    
}