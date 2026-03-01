#include <stdio.h>

#define PI 3.14159265358979323846

void menu(void);
void choose(void);
void circle(void);

int main(void) {
while(1){
    menu();
}
    return 0;
}

void circle(void) {
    double r;
    printf("Enter the radius of circle --> ");
    scanf("%lf", &r);

    double area = PI * r * r;
    printf("Area of circle is: %.2f\n", area);
}

void choose(void) {
    char a;
    printf("Enter the code here --- ");
    scanf(" %c", &a); // baştaki boşluk newline’ı yutar

    switch (a) {
        case 'c':
            printf("circle\n");
            circle();
            break;
        case 't':
            printf("triangle\n");
            break;
        case 'z':
            printf("trapezoid\n");
            break;
        case 's':
            printf("square\n");
            break;
        case 'r':
            printf("rectangle\n");
            break;
        default:
            printf("There is no any header like that\n");
            break;
    }
}

void menu(void) {
    printf("Area Calculation Program\n");
    printf("Circle    --> c\n");
    printf("Triangle  --> t\n");
    printf("Trapezoid --> z\n");
    printf("Square    --> s\n");
    printf("Rectangle --> r\n");
    choose();
}
