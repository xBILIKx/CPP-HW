#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <Windows.h>
#include <fstream>
#include <algorithm>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*float l, h, r, R; //hm 2.1
    
    std::cout << "Введите высоту конуса: ";
    std::cin >> h;

    std::cout << "Введите радиус вверхнего основанию: ";
    std::cin >> r;

    std::cout << "Введите радиус нижнего основания: ";
    std::cin >> R;

    std::cout << "Введите длину образующей: ";
    std::cin >> l;

    float V = (M_PI * h * (pow(R, 2) + R * r + pow(r, 2))) / 3;
    float S = M_PI * (pow(R, 2) + (R + r) * l + pow(r, 2));

    std::cout << "Объем: " << V << "\nПлощадь: " << S;*/

    /*float x, a, w; hm 2.2

    std::cout << "Введите значение x: ";
    std::cin >> x;

    std::cout << "Введите значение a: ";
    std::cin >> a;

    x = abs(x);

    if (x < 1)
        w = a * log(x);
    else if(a >= 0 and a >= pow(x, 2))
        w = (float) sqrt(a - pow(x, 2));
    else  
    {
        std::cout << "Нет решений";
        return 0;
    }

    std::cout << "w = " << w;*/

    /*float x, y, b, z; //hm 2.3

    std::cout << "Введите значение x: ";
    std::cin >> x;

    std::cout << "Введите значение y: ";
    std::cin >> y;

    std::cout << "Введите значение b: ";
    std::cin >> b;

    if(b > y and b >= x)
        z = log(b - y) * sqrt(b - x);
    else
    {
        std::cout << "Нет решений";
        return 0;
    }

    std::cout << "z = " << z ;*/

    /*int N; // hm 2.4

    std::cout << "Введите значение N: ";
    std::cin >> N;
    std::cout << "1. " << N;
    for (int i = 1; i < 10; i++) {
        std::cout << "\n" << i + 1 << ". " << N + i;
    }*/

    //float x; // hm 2.5

    //std::cout << "Введите значение x: ";
    //std::cin >> x;

    //if (x == 1) 
    //{
    //    std::cout << "Нет решений";
    //    return 0;
    //}

    //std::cout << "y = " << (pow(x, 2) - 2 * x + 2) / (x - 1);

    //float m, S, n, p, r; // hw 3.1

    //std::cout << "Введите значение S: ";
    //std::cin >> S;

    //std::cout << "Введите значение p: ";
    //std::cin >> p;

    //std::cout << "Введите значение n: ";
    //std::cin >> n;

    //r = p / 100;

    //m = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));

    //std::cout << "m = " << m;

    //float m, S, n, p, r; //hm 3.2 не доделал! #TODO

    //std::cout << "Введите значение S: ";
    //std::cin >> S;

    //std::cout << "Введите значение m: ";
    //std::cin >> m;

    //std::cout << "Введите значение n: ";
    //std::cin >> n;

    /*std::ifstream read; //hm 3.3
    read.open("D:\\C++ Projects\\CPL2Proj\\CPL2Proj\\A.txt");

    if (!read.is_open()) 
    {
        std::cout << "Не удалось открыть файл!";
        return 0;
    }


    char ch;
    while (read.get(ch)) 
    {
        std::cout << ch;
    }

    read.close();*/

    //std::ifstream read; //hm 3.4

    //read.open("D:\\C++ Projects\\CPL2Proj\\CPL2Proj\\A.txt");

    //if (!read.is_open()) 
    //{
    //    std::cout << "Не удалось открыть файл!";
    //    return 0;
    //}


    //char ch;
    //while (read.get(ch)) 
    //{
    //    if('0' <= ch and ch <= '9')
    //        std::cout << ch;
    //}

    //read.close();

    //std::ifstream read; //hm 3.5
    //read.open("D:\\C++ Projects\\CPL2Proj\\CPL2Proj\\A.txt");

    //if (!read.is_open()) 
    //{
    //    std::cout << "Не удалось открыть файл!";
    //    return 0;
    //}

    //char chars[30];

    //char ch;
    //short i = 0;
    //while (read.get(ch)) 
    //{
    //    chars[i] = ch;
    //    i++;
    //}
    //
    //read.close();

    //std::sort(std::begin(chars), std::end(chars));

    //for (char s : chars) {
    //    std::cout << s << " ";
    //}

    //return 0;
}
