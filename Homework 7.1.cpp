#include <iostream>
#include <Windows.h>
#define MODE 2
int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
#ifdef MODE
    #if MODE == 0
        std::cout << "Работаю в режиме тренировки" << std::endl;
    #elif MODE == 1
        std::cout << "Работаю в боевом режиме" << std::endl;
        int one = 0, two = 0;
        std::cout << "Введите число 1: ";
        std::cin >> one;
        std::cout << "Введите число 2: ";
        std::cin >> two;
        std::cout << "Результат сложения: " << one + two << std::endl;
    #else
        std::cout << "Неизвестный режим. Завершение работы" << std::endl;
    #endif
#else
    #error MODE не обьявлен
#endif
}
