// LabRab7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include "Class.h"
#include "Settings.h"
#include<regex>
#define _USE_MATH_DEFINES
#include <math.h>
#include <fstream>
#include <vector>
#include <map>
using namespace std;
void print(vector<float> vec) {
    for (int n : vec) {
        cout << n << " ";
    }
}
int main()
{
    //ЗАДАНИЕ 7.1
    setlocale(LC_ALL, "");
    cout << "Введите строку на английском" << endl;
    string name, takeName;
    cin >> name;
    Class n1(name);
    n1.print();
    n1.substr();
    n1.findlet(); 
    //ЗАДАНИЕ 7.2
    cout << "Введите све имя" << endl;
    string nameUser, email;
    cin >> nameUser;
    Class n2(nameUser);
    n2.check();
    string text = "Всем привет alexyurlov@mail.ru сегодня я хочу расскать про danrom32@mail.ru который пришел shop123@mail.ru за покупками";
    smatch matches;
    regex reg("[a-z0-9_\.-]*[a-z0-9_]@([a-z0-9]+[a-z0-9_-]*[a-z0-9]\.)+[a-z0-9]{2,}");
    while (regex_search(text, matches, reg))
    {
        cout << "email из текста: " << matches[0] << endl;
        text = matches.suffix().str();
    }
    //ЗАДАНИЕ 7.3
    cout << "Введите радиус";
    int r;
    double r2;
    cin >> r;
    r2 = 2 * M_PI * r;
    cout << "Радиус окружности: " << r2 << endl;
    double rd = trunc(r2 * 1000 + 0.5) / 1000;
    cout << "Округленный радиус" << rd << "\n";
    fstream fs;
    fs.open("a.txt", ios::out);
    for (; ; ){
    cout << "Введите строку";
    cin >> takeName;
    if (takeName != "read") fs << takeName;
    if (takeName == "read") {
        fs.close();
        fs.open("a.txt", ios::in); 
        string str;
        fs >> str;
        cout << str << "\n";
        fs.close();
        fs.open("a.txt", ios::out);
    }

    if (takeName == "erase") {
        fs.close();
        fs.open("a.txt", ios::out);
    };
    if (takeName == "exit") break;
    }
    //Здание 7.4
    vector<float>v1{ 5, 2, 3, 6, -5, -7 };
    cout << "Вектор " << endl;
    print(v1);
    cout << "\n" << "Добавили число:" << endl;
    auto i = v1.begin();
    i++;
    v1.emplace(i+2, 12);
    print(v1);
    cout << "\n" << "Удалили число:" << endl;
    v1.pop_back();
    print(v1);
    cout << "\n" << endl;
    Settings map1("Ivan", 20);
    map1.Add("Ivan", 20);
    //map1.Get("Ivan");
    map1.print("Ivan", 20);
    int ui;
    cout << "Для выхода введите любую цифру" << endl;
    cin >> ui;
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
