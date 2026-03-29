#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void main()
{
    //Дана строка. Перевернуть каждое слово в строке. Порядок слов не менять
    setlocale(LC_ALL, "Ru");
    string s = "";
    cout << "Введите строку:\n";
    getline(cin, s);
    int ln = s.length();
    int l = 0;
    cout << "Строка:\n";
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
    cout << "Перевернутая строка:\n";
    cout << s << "\n";
}
