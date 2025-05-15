#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //исходные данные
    double q_p, q_f, q_t;
    double t, W, a_f;

    //результаты
    int n_p, n_f, n_t; //количество автоматов

    //промежуточные переменные
    double Q_p, Q_f, Q_t;

    //ввод переменных
    cout << "Введите производительность пельменей: ";
    cin >> q_p; cout << endl;
    cout << "Введите производительность фарша: ";
    cin >> q_f; cout << endl;
    cout << "Введите производительность теста: ";
    cin >> q_t; cout << endl;
    cout << "Введите суточную выработку пельменей: ";
    cin >> W; cout << endl;
    cout << "Введите количество часов в смене: ";
    cin >> t; cout << endl;
    cout << "Введите долю фарша: ";
    cin >> a_f; cout << endl;
    cout << endl;

    //рассчётная часть
       //пельмени
    Q_p = W / (2 * t);
    n_p = Q_p / q_p;


}

