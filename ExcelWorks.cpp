#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
int strToInt(string str) { // string in integer
    int res = 0;
    for (char i : str) {
        res *= 10;
        res += int(i) - 48;
        /*
        * int(char) возвращает код символа в таблице ASCII от 0 до 255 (байт-код)
        * Байт-код символа 0 - 48, чтобы получить число из кода,
        * нужно из него вычесть 48
        */
    }
    return res;
}

void GiveElem(string faleName, int& returnElem, int x, int y) { // singl integer
    ifstream file(faleName); // файл excel
    if (!file.is_open()) { // если файл не открыт
        cout << "Файл не может быть открыт!\n"; // сообщить об этом
        exit(0);
    }
    string line, vs;
    int cha = 0;
    for (int i = 0; i <= y; i++) {
        getline(file, line, '\n');
    }
    for (int i = 0; ; i++) {
        if (line[i] == ';')
            cha++;
        if (cha == x) {
            if (line[i] == ';')
                i++;
            while (1) {
                vs += line[i];
                if (line[i + 1] == ';' || line[i + 1] == '\n' || line[i + 1] == ',' || (i + 1) == line.length())
                    break;
                i++;
            }
            break;
        }
    }
    returnElem = strToInt(vs);
}

void GiveElem(string faleName, int* returnElem, int x1, int y1, int x2, int y2) {
    int a;
    if (x1 == x2) {
        if (y1 > y2)  // защита от дурака, если указал не в правильном порядке y
            swap(y1, y2);
        for (int i = y1, k = 0; i <= y2; i++, k++) {
            GiveElem("test.csv", a, x1, i);
            returnElem[k] = a;
        }
    } else if (y1 == y2) {
        if (x1 > x2) // защита от дурака, если указал не в правильном порядке x
            swap(x1, x2);
        for (int i = x1, k = 0; i <= x2; i++, k++) {
            GiveElem("test.csv", a, i, y1);
            returnElem[k] = a;
        }
    }
}

void GiveElem(string faleName, double& returnElem, int x, int y) { // single double
    ifstream file(faleName); // файл excel
    if (!file.is_open()) { // если файл не открыт
        cout << "Файл не может быть открыт!\n"; // сообщить об этом
        exit(0);
    }
    string line, vs;
    int cha = 0;
    for (int i = 0; i <= y; i++) {
        getline(file, line, '\n');
    }
    for (int i = 0; ; i++) {
        if (line[i] == ';')
            cha++;
        if (cha == x) {
            if (line[i] == ';')
                i++;

            while (1) {
                vs += line[i];
                if (line[i + 1] == ';' || line[i + 1] == '\n' || (i + 1) == line.length())
                    break;
                i++;
            }

            break;
        }
    }
    returnElem = strtod(vs.c_str(), NULL);
}
void GiveElem(string faleName, double* returnElem, int x1, int y1, int x2, int y2) {
    double a;
    if (x1 == x2) {
        if (y1 > y2)  // защита от дурака, если указал не в правильном порядке y
            swap(y1, y2);
        for (int i = y1, k = 0; i <= y2; i++, k++) {
            GiveElem("test.csv", a, x1, i);
            returnElem[k] = a;
        }
    } else if (y1 == y2) {
        if (x1 > x2) // защита от дурака, если указал не в правильном порядке x
            swap(x1, x2);
        for (int i = x1, k = 0; i <= x2; i++, k++) {
            GiveElem("test.csv", a, i, y1);
            returnElem[k] = a;
        }
    }
}
void GiveElem(string faleName, string& returnElem, int x, int y) { // singl string
    ifstream file(faleName); // файл excel
    if (!file.is_open()) { // если файл не открыт
        cout << "Файл не может быть открыт!\n"; // сообщить об этом
        exit(0);
    }
    string line, vs;
    int cha = 0;
    for (int i = 0; i <= y; i++) {
        getline(file, line, '\n');
    }
    for (int i = 0; ; i++) {
        if (line[i] == ';')
            cha++;
        if (cha == x) {
            if (line[i] == ';')
                i++;
            while (1) {
                vs += line[i];
                if (line[i + 1] == ';' || line[i + 1] == '\n' || (i + 1) == line.length())
                    break;
                i++;
            }
            break;
        }
    }
    returnElem = vs;
}
void GiveElem(string faleName, string* returnElem, int x1, int y1, int x2, int y2) {
    string  vs;
    if (x1 == x2) {
        if (y1 > y2)  // защита от дурака, если указал не в правильном порядке y
            swap(y1, y2);
        for (int i = y1, k = 0; i <= y2; i++, k++) {
            GiveElem("test.csv", vs, x1, i);
            returnElem[k] = vs;
        }
    } else if (y1 == y2) {
        if (x1 > x2) // защита от дурака, если указал не в правильном порядке x
            swap(x1, x2);
        for (int i = x1, k = 0; i <= x2; i++, k++) {
            GiveElem("test.csv", vs, i, y1);
            returnElem[k] = vs;
        }
    }
}