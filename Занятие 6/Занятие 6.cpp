#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void task1()
{
    //Написать программу, которая удаляет из массива все элементы больше определенного значения.
    //Использовать динамический массив.Вывести размерность массива до обработки и после удаления элементов.
    int s[10] = { 0,4,5,3,8,1,9,2,7,6 };
    cout << "Старый размер: 10\n";
    int ht;
    cout << "Введите значение: ";
    cin >> ht;
    int ns = 0;
    for (int i = 0; i < 10; i++)
    {
        if (s[i] <= ht) { ns++; }
    }
    cout << "Новый размер: " << ns << "\n";
    int* res = new int[ns];
    int j = 0;
    for (int i = 0; i < 10; i++)
    {
        if (s[i] <= ht) {
            res[j] = s[i];
            j++;
        }
    }
    for (int i = 0; i < ns; i++) {
        cout << res[i] << " ";
    }
    cout << "\n";
    delete[] res;
}

void task2()
{
    //Дана строка. Перевернуть каждое слово в строке. Порядок слов не менять
    string s = "от топыта копыт";
    int ln = s.length();
    int l = 0;
    cout << s << "\n";
    for (int r = l; r <= ln; r++)
    {
        if (s[r] == ' ' || r == ln) {
            int g = r;
            r--;
            while (l < r) {
                char timed = s[r];
                s[r] = s[l];
                s[l] = timed;
                r--;
                l++;
            }
            r = g++;
            l = g++;
        }
    }
    cout << ln << "\n";
    cout << s << "\n";
}

void main()
{
    setlocale(LC_ALL, "Ru");
    cout << "Выбери задание 1,2\n";
    int task;
    cin >> task;
    switch (task) {
    case 1: task1(); break;
    case 2: task2(); break;
    }
}