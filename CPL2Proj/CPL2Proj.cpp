#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <Windows.h>
#include <fstream>
#include <algorithm>

void rectangleSquare()
{
    float l, h;

    std::cout << "Введите длину прямоугольника: ";
    std::cin >> l;

    std::cout << "Введите высоту прямоугольника: ";
    std::cin >> h;

    std::cout << "Площадь прямоугольника: " << l * h;
}

void triangleSquare()
{
    float a, h;

    std::cout << "Введите высоту треугольника: ";
    std::cin >> h;

    std::cout << "Введите длину стороны треугольника к которой прилегает высота: ";
    std::cin >> a;

    std::cout << "Площадь треугольника: " << (a * h) / 2;
}

void circleSquare()
{
    float r;

    std::cout << "Введите радиус круга: ";
    std::cin >> r;

    std::cout << "Площадь круга: " << M_PI * pow(r, 2);
}

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

    //float m, S, n, p; //hm 3.2 не доделал!
    //float r1 = -1;

    //std::cout << "введите значение s: ";
    //std::cin >> S;

    //std::cout << "введите значение m: ";
    //std::cin >> m;

    //std::cout << "введите значение n: ";
    //std::cin >> n;

    //for (float r = 0.1; r <= 1; r += 0.000001)
    //{
    //    if (m - ((S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1))) < 0.005f)
    //    {
    //        r1 = r;
    //        break;
    //    }
    //}

    //if (r1 == -1)
    //    std::cout << "Что-то пошло не так!";
    //else
    //    std::cout << "Под " << r1 * 100 << " процентов.";

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

    /*
       Задание 4.1
    */

    //float numbers[10]; 

    //std::ofstream outfile("A.txt");
    //
    //std::cout << "Введите 10 чисел:\n";
    //for (int i = 0; i < 10; i++)
    //{
    //    float n;
    //    std::cin >> n;
    //    outfile << n << " ";
    //}
    //    
    //outfile.close();

    //std::ifstream file("A.txt");

    //float n;
    //float sum = 0;

    //while (file >> n) {
    //    sum = sum + n;
    //}

    //file.close();

    //std::cout << "\n\n" << sum;

    /*
       Задание 4.2
    */
    
    //float n;
    //
    //std::cout << "Введите число: ";
    //std::cin >> n;

    //if (n > 1)
    //    std::cout << "Число пложительное";
    //else if(n == 0)
    //    std::cout << "Это ноль";
    //else
    //    std::cout << "Число отрицательное";


    /*
       Задание 4.3
    */
    
    //char figure;

    //std::cout << "Площадь какой фигуры вы хотите измерить?\n1 - Прямоугольника\n2 - Треугольника\n3 - Круга\n";
    //std::cin >> figure;

    //if (figure == '1')
    //    rectangleSquare();
    //else if (figure == '2')
    //    triangleSquare();
    //else if (figure == '3')
    //    circleSquare();

    /*
       Задание 4.4
    */

    HWND hwnd = GetConsoleWindow(); //Берём ориентир на консольное окно (В нём будем рисовать)
    HDC dc = GetDC(hwnd); //Цепляемся к консольному окну
    RECT window = {}; //Переменная window будет использована для получения ширины и высоты окна
    HBRUSH brush; //Переменная brush - это кисть, она будет использоваться для закрашивания

    brush = CreateHatchBrush(HS_BDIAGONAL, RGB(0, 255, 0)); // Создаём кисть определённого стиля и цвета
    SelectObject(dc, brush); //Выбираем кисть
    RECT WinCoord = {}; //Массив координат окна 
    GetWindowRect(hwnd, &WinCoord); //Узнаём координаты

    Rectangle(dc, 0, 0, WinCoord.right, WinCoord.bottom); //Нарисовали прямоугольник, закрашенный неким стилем
    DeleteObject(brush); //Очищаем память от созданной кисти

    ReleaseDC(hwnd, dc); //Освобождаем общий или оконный (не влияющий на класс или локальность) контекст устройства, делая его доступным для других прикладных задач. 
    std::cin.get();
}
