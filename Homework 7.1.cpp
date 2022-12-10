#include <iostream>
#include <Windows.h>
#define MODE 1
#ifndef MODE
#error MODE не обьявлен
#else

#if MODE == 1
void add();
#endif

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    #if MODE == 0
        std::cout << "Работаю в режиме тренировки" << std::endl;
    #elif MODE == 1
        std::cout << "Работаю в боевом режиме" << std::endl;
        add();
    #else
        std::cout << "Неизвестный режим. Завершение работы" << std::endl;
    #endif
}

#if MODE == 1
void add() {
    int one = 0, two = 0;
    std::cout << "Введите число 1: ";
    std::cin >> one;
    std::cout << "Введите число 2: ";
    std::cin >> two;
    std::cout << "Результат сложения: " << one + two << std::endl;
}
#endif


#endif