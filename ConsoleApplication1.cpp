

#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{

    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    int r;
    cout << "Калькулятор\n";
    cout << "++++++++++++++++++++++++++++++++++++++++++\n";
    cout << "1. Деление \n";
    cout << "2. Произведение \n";
    cout << "3. Сложение \n";
    cout << "4. Вычитание \n";
    cout << "5. Возведение в степень \n";
    cout << "6. Нахождение квадратного корня \n";
    cout << "7. Нахождение 1 % от числа \n";
    cout << "8. Нахождение факториала \n";
    cout << "9. Выйти из калькулятора \n";
    cout << "Выберите действие:";

    cin >> r;
    if (r == 1)
    {
        int a, b;
        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число: ";
        cin >> b;
        int c = a / b;
        cout << "Частное = " << c << endl;
        system("pause");
        system("cls");
        main();
       
    }
    else if (r == 2)
    {
        int d;
        int e;

        cout << "Введите первое число: ";
        cin >> d;
        cout << "Введите второе число: ";
        cin >> e;
        int f = d * e;
        cout << "Произведение = " << f << endl;
        system("pause");
        system("cls");
        main();
    }
    else if (r == 3)
    {
        int q;
        int w;
        cout << "Введите первое число: ";
        cin >> q;
        cout << "Введите второе число: ";
        cin >> w;
        int t = q + w;
        cout << "Cумма = " << t << endl;
        system("pause");
        system("cls");
        main();

    }
    else if (r == 4)
    {
        int y;
        int u;
        cout << "Введите первое число: ";
        cin >> y;
        cout << "Введите второе число:";
        cin >> u;
        int i = y - u;
        cout << "Разность = " << i << endl;
        system("pause");
        system("cls");
        main();

    }

    else if (r == 5)
    {
        int o;
        int p;
        cout << "Введите число: ";
        cin >> o;
        cout << "Введите введите степень:";
        cin >> p;
        cout << "Результат: " << pow(o, p) << endl;
        system("pause");
        system("cls");
        main();

    }
    else if (r == 6)
    {
        int h;
        cout << "Введите число: ";
        cin >> h;
        cout << "Результат: " << sqrt(h) << endl;
        system("pause");
        system("cls");
        main();

    }
    else if (r == 7)
    {
        double number;
        std::cout << "Введите число: ";
        std::cin >> number;

        double onePercent = number * 0.01;
        std::cout << "1% от числа: " << onePercent << std::endl;
        system("pause");
        system("cls");
        main();

    }
    else if (r == 8)
    {
        int number;
        std::cout << "Введите число: ";
        std::cin >> number;

        int factorial = 1;
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }

        std::cout << "Факториал числа " << number << " равен " << factorial << std::endl;
        system("pause");
        system("cls");
        main();

    }
    else if (r == 9)
    {
        return 0;
    }
}

