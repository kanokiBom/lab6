#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Ru");
    //Написать программу, которая удаляет из массива все элементы больше определенного значения.
    //Использовать динамический массив.Вывести размерность массива до обработки и после удаления элементов.
    int s[10] = { 0,4,5,3,8,1,9,2,7,6 };
    cout << "Старый размер массива: 10\n";
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
