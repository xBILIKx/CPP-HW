#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <Windows.h>
#include <fstream>
#include <algorithm>
#include <list>
#include <string>

std::string toUpperStr(std::string str)
{
    std::string strCopy = str;
    str = "";
    for (char ch : strCopy)
        str += std::toupper(ch);

    return (str);
}

int Factorial(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
        res *= i;

    return res;
}

int GcdDiv(int a, int b)
{
    if (a == 0 || b == 0)
        return(-1);

    while (a != 0 && b != 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }

    return (a + b);
}

int GcdSub(int a, int b)
{
    if (a == 0 || b == 0)
        return(-1);

    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    return a;
}


std::string Convert(std::string n, int fromB, int toB) {

    char alphabet[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int newN = 0;
    std::string res = "";

    if (fromB != 10)
    {
        //std::distance(alphabet, std::find(alphabet, alphabet + sizeof(alphabet) / sizeof(alphabet[0]), i));
        int counter = n.length();
        for (char i : std::string(n.rbegin(), n.rend()))
        {
            int index = std::distance(alphabet, std::find(alphabet, alphabet + sizeof(alphabet) / sizeof(alphabet[0]), i));
            newN += index * pow(fromB, n.length() - counter);
            counter--;
        }
    }
    else newN = std::stoi(n);

    if (toB == 10)
        return std::to_string(newN);
    else
    {

        while (newN > 0)
        {
            res = alphabet[newN % toB] + res;
            newN /= toB;
        }

        return res;
    }
}

int randomGen(int m, int c, int i, int s)
{
    return ((m * s + i) % c);
}

void drawStar(HDC dc, int x, int y, int size, int spacing, HBRUSH brush)
{
    size -= spacing;
    
    POINT vertices1[] = { {x, y + size}, {x + size, y + size / 2.5}, {x + size / 3, y + size / 2.5} };
    POINT vertices2[] = { {x + size, y + size}, {x, y + size / 2.5}, {x + (size / 3) * 2, y + size / 2.5} };
    POINT vertices3[] = { {x + size / 2, y}, {x + size / 3, y + size / 2.5}, {x + (size / 3) * 2, y + size / 2.5} };
    
    Polygon(dc, vertices1, sizeof(vertices1) / sizeof(vertices1[0]));
    Polygon(dc, vertices2, sizeof(vertices2) / sizeof(vertices2[0]));
    Polygon(dc, vertices3, sizeof(vertices3) / sizeof(vertices3[0]));
}

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

    /*HWND hwnd = GetConsoleWindow();
    MoveWindow(hwnd, 100, 100, 800, 520, FALSE);
    HDC dc = GetDC(hwnd);
    HBRUSH brush;

    brush = CreateSolidBrush(RGB(255, 255, 255));
    SelectObject(dc, brush);
    RECT WinCoord = {};
    GetWindowRect(hwnd, &WinCoord);

    Rectangle(dc, 0, 0, WinCoord.right, WinCoord.bottom);
    DeleteObject(brush);

    brush = CreateSolidBrush(RGB(200, 0, 0));
    SelectObject(dc, brush);

    for (long i = 0; i <= WinCoord.bottom; i += (WinCoord.bottom / 13) * 2)
    {
        Rectangle(dc, 0, i, WinCoord.right, i + (WinCoord.bottom / 13));
    }
    DeleteObject(brush);

    brush = CreateSolidBrush(RGB(0, 0, 255));
    SelectObject(dc, brush);

    int l = (WinCoord.bottom / 13) * 7;
    int h = (WinCoord.bottom / 13) * 7;
    Rectangle(dc, 0, 0, l, h);
    DeleteObject(brush);

    brush = CreateSolidBrush(RGB(255, 255, 255));
    SelectObject(dc, brush);

    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 7; j++)
            drawStar(dc, (l / 7) * i, (l / 7) * j, l / 7, 7, brush);

    DeleteObject(brush);
    ReleaseDC(hwnd, dc);
    std::cin.get();*/

    /*
        Задание 4.5
    */

    //   HWND hwnd = GetConsoleWindow(); 
    //   //MoveWindow(hwnd, 100, 100, 800, 520, FALSE);
       //HDC dc = GetDC(hwnd);
       //HBRUSH brush; 
    //
    //   HPEN pen = CreatePen(PS_SOLID, 1, RGB(255, 255, 255));
       //SelectObject(dc, pen); 
       //RECT WinCoord = {};  
       //GetWindowRect(hwnd, &WinCoord); 

    //   MoveToEx(dc, WinCoord.right / 2, 0, NULL);
    //   LineTo(dc, WinCoord.right / 2, WinCoord.bottom);

    //   MoveToEx(dc, 0, WinCoord.bottom / 2, NULL);
    //   LineTo(dc, WinCoord.right, WinCoord.bottom / 2);
    //   
    //   DeleteObject(pen);
    //   
    //   pen = CreatePen(PS_SOLID, 1, RGB(255, 0, 0));
    //   SelectObject(dc, pen);

    //   int y0 = WinCoord.bottom / 2 + 1;
    //   MoveToEx(dc, 0, y0, NULL);
    //   for (double x = 0; x < M_PI * 32; x+=0.01) 
    //   {
    //       LineTo(dc, x * 10, y0 + (LONG)(sin(x) * 10));
    //       MoveToEx(dc, x*10, y0 + (LONG)(sin(x) * 10), NULL);
    //       
    //       //coordinats[x] = { x * 10, 10 + (LONG)(sin(x) * 10) };
    //   }


    //   
    //   //Polyline(dc, coordinats, sizeof(coordinats) / sizeof(coordinats[0]));
    //   DeleteObject(pen);
    //   
    //   ReleaseDC(hwnd, dc);
    //   std::cin.get();

    /*
        Задание 4.6
    */

    /*char arrRim[] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
    int arrArrab[] = {1, 5, 10, 50, 100, 500, 1000};

    std::string inp;
    std::string out = "";

    std::cout << "Введите римские числа:\n";
    std::cin >> inp;

    for (char i : inp) 
    {
        int index = std::distance(arrRim, std::find(arrRim, arrRim + sizeof(arrRim) / sizeof(arrRim[0]), i));
        out += std::to_string(arrArrab[index]);
    }

    std::cout << "Перевод: \n" << out;*/

    /*
        Задание 4.7 P.S спросить у учителя че да как, а то вообще ниче не понятно
    */

    /*int m = 37;
    int i = 3;
    int c = 64;

    randomGen(m, c, i, 0);*/

    /*
        Задание 4.8
    */

    //float A[3][4] = {
    //    {5, 2, 0, 10},
    //    {3, 5, 2, 5},
    //    {3, 20, 0, 0}
    //};

    //float B[4][2] = {
    //    {1.2, 0.5},
    //    {2.8, 0.4},
    //    {5, 1},
    //    {2, 1.5}
    //};

    //float C[3][2] = {
    //    {0, 0},
    //    {0, 0},
    //    {0, 0}
    //};

    //for (int i = 0; i < 3; i++)
    //    for (int j = 0; j < 2; j++)
    //        for (int k = 0; k < 4; k++)
    //            C[i][j] += A[i][k] * B[k][j];

    //for (int i = 0; i < 3; i++)
    //{
    //    for (int j = 0; j < 2; j++)
    //        std::cout << C[i][j] << "   ";
    //    std::cout << "\n";
    //}

    ////int maxSalesMan = 0;
    ////int minSalesman = 0;
    ////int maxCommission = 0;
    ////int minCommission = 0;
    ////float moneySumm = 0; //На счет этих двух спросить, а то чет не до конца понятно
    ////float commissionSum = 0;
    ////for (int i = 0; i < 3; i++)
    ////{
    ////    moneySumm += C[i][0];
    ////    commissionSum += C[i][1];
    ////    if (C[i][0] > C[maxSalesMan][0])
    ////        maxSalesMan = i;

    ////    if (C[i][0] < C[minSalesman][0])
    ////        minSalesman = i;

    ////    if (C[i][1] > C[maxCommission][1])
    ////        maxCommission = i;

    ////    if (C[i][1] > C[minCommission][1])
    ////        minCommission = i;
    ////}


    ////maxSalesMan++;
    ////minSalesman++;
    ////maxCommission++;
    ////minCommission++;
    

    /*
        Задание 4.9
    */

    /*std::string n;
    int fromB;
    int toB;

    std::cout << "Введите число: ";
    std::cin >> n;

    std::cout << "Из какой системы счисления? \n";
    std::cin >> fromB;

    std::cout << "В какую систему счисления? \n";
    std::cin >> toB;

    std::cout << "Ответ: " << Convert(n, fromB, toB);*/

    /*
        Задание 5.1
    */

    /*int a;
    int b;

    std::cout << "Введите число a: ";
    std::cin >> a;

    std::cout << "Введите число b: ";
    std::cin >> b;

    int gcdDiv = GcdDiv(a, b);
    int gcdSub = GcdSub(a, b);
    if (gcdDiv == -1 || gcdSub == -1)
        std::cout << "Нет такого делителя!";
    else
    {
        std::cout << "НОД делением: " << gcdDiv;
        std::cout << "\nНОД Вычитанием: " << gcdSub;
    }*/

    /*
        Задание 5.2
    */

    /*int n;
    
    std::cout << "Введите число n: ";
    std::cin >> n;

    int *numbers = new int[n+1];

    for (int i = 0; i <= n; i++)
        numbers[i] = i;

    for (int i = 2; i <= n; i++)
    {
        if (numbers[i] != 0)
        {
            std::cout << i << std::endl;
            for (int j = i * i; j <= n; j += i)
                numbers[j] = 0;
        }
    }*/
    
    
    /*
        Задание 5.3.1 \ 5.3.8
    */

    /*std::ifstream file("A.txt");

    if (!file.is_open())
    {
        std::cout << "Не удалось открыть файл!";
        return 0;
    }


    char delimiter;
    std::cout << "На какой символ заменять пробелы?\n";
    std::cin >> delimiter;

    char ch;
    std::string res = "";
    while (file.get(ch))
    {
        if(ch == ' ')
        {
            res += delimiter;
            continue;
        }
        else
            res += ch;
    }

    file.close();

    std::ofstream outfile("A.txt");

    outfile << res;

    outfile.close();

    

    file.open("A.txt");
    std::ofstream outfile2("B.txt");

    char ch2;
    while (file.get(ch2))
    {
        outfile2 << int(ch2) << " ";
    }

    file.close();
    outfile2.close();*/

    /*
        Задание 5.4.1 \ 5.4.3
    */

    //int n;

    //std::cout << "Введите число n: ";
    //std::cin >> n;

    //float sum = 0;
    //for (int i = 1; i <= n; i++)
    //{
    //    float sinSum = 0;
    //    for (int j = 1; j <= i; j++)
    //    {
    //        sinSum += sin(j /** (180 / M_PI)*/);
    //    }

    //    sum += i / sinSum;
    //}

    //std::cout << "Ответ на первое: " << sum << std::endl;

    //sum = 1;
    //for (int i = 1; i <= n; i++)
    //{
    //    int fact = Factorial(i);
    //    float sinSum = 0;
    //    for (int j = 2; j <= 2*i; j += 2)
    //    {
    //        sinSum += sin(j /** (180 / M_PI)*/);
    //    }

    //    sum *= fact / sinSum;
    //}

    //std::cout << "Ответ на третье: " << sum;

    /*
        Задание 5.5.2
    */

    std::ifstream file("Books.txt");

    if (!file.is_open())
    {
        std::cout << "Не удалось открыть файл!";
        return 0;
    }

    char ch;
    std::string res = "";
    while (file.get(ch))
    {
        res += ch;
    }

    file.close();

    int size = std::count(res.begin(), res.end(), '\n') + 1;
    std::string* fullName = new std::string[size];
    std::string* bookName = new std::string[size];
    std::string* publishYear = new std::string[size];

    int index = 0;
    int spaces = 0;
    for (char c : res)
    {
        if (c == '\n')
        {
            index++;
            spaces = 0;
            continue;
        }

        if (c == ' ')
            spaces++;

        if (spaces < 3)
            fullName[index] += c;
        else if (spaces < 4)
            bookName[index] += c;
        else
            publishYear[index] += c;
    }

    std::string name;

    std::cout << "Введите название книги: ";
    std::cin >> name;

    int answ1 = -1;
    int answ2 = -1;
    for (int i = 0; i < size; i++)
    {
        if (bookName[i] == " " + name)
            answ1 = i;

        if (bookName[i] == " Паскаль")
            answ2 = i;
    }

    if (answ1 == -1)
        std::cout << "Ответ 1: такой книги не найдено." << std::endl;
    else
        std::cout << "Ответ 1: " << fullName[answ1] << bookName[answ1] << publishYear[answ1] << std::endl;

    if (answ2 == -1)
        std::cout << "Ответ 2: нет книги с именем \"Паскаль\"" << std::endl;
    else
        std::cout << "Ответ 2: " << fullName[answ2] << bookName[answ2] << publishYear[answ2] << std::endl;
}

