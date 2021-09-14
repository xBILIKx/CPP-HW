#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <Windows.h>
#include <fstream>
#include <algorithm>
#include <list>

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
}


