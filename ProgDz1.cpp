// DzProgramming1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#define M_PI       3.14159265358979323846
int factorial(int count) {
    int  a = 1;
    for (int i = 1; i <= count; i++)
        a = a * i;
    return a;
}

void num4() {
    float a, b, c, d;
    printf("Введите два числа: ");
    scanf("%f%f", &a, &b);
    c = (a + b) / 2;
    d = sqrt(a * b);
    printf("Среднее арифметическое: %f\n", c);
    printf("Среднее геометрическое: %f\n", d);
}

void num5() {
    float a, b, c, d;
    printf("Введите два числа: ");
    scanf("%f%f", &a, &b);
    c = (a + b) / 2;
    d = sqrt(fabsf(a) * fabsf(b));
    printf("Среднее арифметическое: %f\n", c);
    printf("Среднее геометрическое модулей: %f\n", d);
}

void num11() {
    int myNum;
    float  x, y, z, a, b;
    bool go = true;
    while (go)
    {
        printf("Введите номер от 1 до 7: ");
        scanf("%i", &myNum);
        switch (myNum)
        {
        case(1):
            printf("Введите x, y и z: \n");
            scanf("%f%f%", &x, &y, &z);
            a = (sqrtf(fabsf(x - 1)) - powf(fabsf(y), 1 / 3.)) / (1 + (x * x) / 2 + (y * y) / 4);
            b = x * (atanf(z) + expf(-(x + 3)));
            printf("a= : %f\n", a);
            printf("b=: %f\n", b);
            go = false;
            break;
        case(2):
            printf("Введите x, y и z: \n");
            scanf("%f%f%", &x, &y, &z);
            a = (3 + expf(y - 1)) / (1 + x * x * fabsf(y - tanf(z)));
            b = 1 + fabsf(y - x) + powf((y - x), 2) / 2 + powf(fabsf(y - x), 3) / 3;
            printf("a= : %f\n", a);
            printf("b=: %f\n", b);
            go = false;
            break;
        case(3):
            printf("Введите x, y и z: \n");
            scanf("%f%f%", &x, &y, &z);
            a = (1 + y) * ((x + y / (x * x + 4)) / (expf(-x - 2) + 1 / (x * x + 4)));
            b = (1 + cosf(y - 2)) / (powf(x, 4) / 2 + sinf(z) * sinf(z));
            printf("a= : %f\n", a);
            printf("b=: %f\n", b);
            go = false;
            break;
        case(4):
            printf("Введите x, y и z: \n");
            scanf("%f%f%", &x, &y, &z);
            a = y + (x / (y * y + fabsf(x * x / (y + powf(x, 3) / 3))));
            b = 1 + powf(tanf(z / 2), 2);
            printf("a= : %f\n", a);
            printf("b=: %f\n", b);
            go = false;
            break;
        case(5):
            printf("Введите x, y и z: \n");
            scanf("%f%f%", &x, &y, &z);
            a = (2 * cosf(x - M_PI / 6)) / (1. / 2 + sinf(y) * sinf(y));
            b = 1 + z * z / (3 + z * z / 5);
            printf("a= : %f\n", a);
            printf("b=: %f\n", b);
            go = false;
            break;
        case(6):
            printf("Введите x, y и z: \n");
            scanf("%f%f%", &x, &y, &z);
            a = (1 + powf(sinf(x + y), 2)) / (2 + fabsf(x - 2 * x / (1 + x * x * y * y)));
            b = powf(cosf(atanf(1 / z)), 2);
            printf("a= : %f\n", a);
            printf("b=: %f\n", b);
            go = false;
            break;
        case(7):
            printf("Введите x, y и z: \n");
            scanf("%f%f%", &x, &y, &z);
            a = logf(fabsf((y - sqrtf(fabsf(x))) * (x - (y / (z + x * x / 4)))));
            b = x - x * x / factorial(3) + powf(x, 5) / factorial(5);
            printf("a= : %f\n", a);
            printf("b=: %f\n", b);
            go = false;
            break;
        default:
            printf("Данное число не доступно \n");
            break;
        }
    }
}
void num17() {
    float rIn = 20, r;
    printf("Введите r>20: \n");
    scanf("%f", &r);
    printf("Площаль кольца= %f\n", M_PI * r * r - M_PI * rIn * rIn);
}
void num20() {
    float a1;
    float sum;
    float d;
    float n;
    printf("Введите a, d и n: \n");
    scanf("%f%f%f", &a1, &d, &n);
    sum = (a1 * 2 + d * (n - 1)) / 2 * n;
    printf("Сумма арифметической прогрессии= ");
    printf("%f\n", sum);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int num;
    bool go = true;
    int again = 1;
    //программирование. дз1 (4, 5, 11, 17, 20)
    while (again) {
        go = true;
        while (go)
        {
            printf("Введите номер задания (4, 5, 11, 17, 20): ");
            scanf("%i", &num);
            switch (num)
            {
            case 4:
                num4();
                go = false;
                break;
            case 5:
                num5();
                go = false;
                break;
            case 11:
                num11();
                go = false;
                break;
            case 17:
                num17();
                go = false;
                break;
            case 20:
                num20();
                go = false;
                break;
            default:
                printf("Данное число не доступно\n");
                break;
            }
        }
        printf("Чтобы закончить введите 0, а чтобы продолжить 1\n");
        scanf("%i",&again);
    }
    _getch();
    return 0;
}