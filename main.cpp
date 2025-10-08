#include <iostream>
#include <algorithm>

int CheckArray(int array[], int size)
{
    for (int num=0; num<size; num++)
    {
        if (array[num] == 0)
        {
            std::cout << "Йоу не круто робити щось з тим чого нема, заповни масив челік 😎\n" << std::endl;
            return 0;
        }
    }
    return 1;
}

int InputArray(int array[], int size)
{
    if (CheckArray(array, size))
    {
        std::cout << "твій масив готовий, роби шо хоч 🙄\n" << std::endl;
        return 0;
    }
    std::cout << "Введіть " << size << " цілих чисел:" << std::endl;
    for (int num=0; num<size; num++)
    {
        std::cin >> array[num];
    }
    return 0;
}

int ShowArray(int array[], int size)
{
    if (!CheckArray(array, size))
    {
        return 0;
    }
    std::cout << "Йоу, от що у вас в масиві 🙄: ";
    for (int num=0; num<size; num++)
    {
        std::cout << array[num] << " ";
    }
    std::cout << std::endl;
    return 0;
}

int MaxElement(int array[], int size)
{
    if (!CheckArray(array, size))
    {
        return 0;
    }
    auto max_el = std::max_element(array, array + size);
    std::cout << "Максимум 💯: " << *max_el << std::endl;
    return 0;
}

int MinElement(int array[], int size)
{
    if (!CheckArray(array, size))
    {
        return 0;
    }
    auto min_el = std::min_element(array, array + size);
    std::cout << "Мінімум 📉: " << *min_el << std::endl;
    return 0;
}

int SortArray(int array[], int size)
{
    if (!CheckArray(array, size))
    {
        return 0;
    }
    std::sort(array, array + size);
    ShowArray(array, size);
    return 0;
}

int AverageElement(int array[], int size)
{
    if (!CheckArray(array, size))
    {
        return 0;
    }
    int sum = 0;
    for (int num=0; num<size; num++)
    {
        sum += array[num];
    }

    std::cout << "Щось по середині +/-:\n(доречі учень знає анекдот про це)" << static_cast<double>(sum) / size << std::endl;
    return 0;
}

int main()
{
    int array[10] = {0};
    int operation;
    std::cout << "###### 🔥 Йоу твій масив на 10 елементів готовий 🔥 ######\n\n" << std::endl;

    while (true)
    {
        std::cout << "1. Ввести цифри твого масиву 🔢\n2. Вивести ьазовий мінімум 📉\n3. Вивести шикарний максимум 💯\n4. Виведення +/- середини (учень знає анекдот про це) 😁\n5. Сортувати масив 🔀\n6. Вийти 😭" << std::endl;

        std::cout << "Що робити: ";
        std::cin >> operation;

        switch (operation)
        {
        
            case 1:
                InputArray(array, 10);
                break;
            
            case 2:
                MinElement(array, 10);
                break;
            case 3:
                MaxElement(array, 10);
                break;
            case 4:
                AverageElement(array, 10);
                break;
            case 5:
                SortArray(array, 10);
                break;
            case 6:
                std::cout << "ну пакеда 🙋‍♂️🙋‍♂️🙋‍♂️" << std::endl;
                return 0;
            default:
                break;
        }
    }
    


}