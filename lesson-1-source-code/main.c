#include <stdio.h>
#include <stdlib.h>

extern int sumOfInt(int a, int b);
extern float sumOfFloat(float a, float b);
extern double sumOfDouble(double a, double b);
extern int subtractionOfInt(int a, int b);
extern float subtractionOfFloat(float a, float b);
extern double subtractionOfDouble(double a, double b);
extern int multiplicationOfInt(int a, int b);
extern float multiplicationOfFloat(float a, float b);
extern double multiplicationOfDouble(double a, double b);
extern float divisionOfFloat(float a, float b);
extern double divisionOfDouble(double a, double b);

int main(){
    system("clear");
    printf("20+10 = %d\n",sumOfInt(20,10));
    printf("0.4 + 1.3 = %.2f\n",sumOfFloat(0.4,1.3));
    printf("120000.123 + 1900000.3323 = %.3f\n",sumOfDouble(120000.123,1900000.3323));
    printf("20-10 = %d\n",subtractionOfInt(20,10));
    printf("0.4 - 1.3 = %.2f\n",subtractionOfFloat(0.4,1.3));
    printf("120000.123 - 1900000.3323 = %.3f\n",subtractionOfDouble(120000.123,1900000.3323));
    printf("20x10 = %d\n",multiplicationOfInt(20,10));
    printf("0.4 x 1.3 = %.2f\n",multiplicationOfFloat(0.4,1.3));
    printf("120000.123 x 1900000.3323 = %.3f\n",multiplicationOfDouble(120000.123,1900000.3323));
    printf("0.4 : 1.3 = %.2f\n",divisionOfFloat(0.4,1.3));
    printf("120000.123 : 1900000.3323 = %.3f\n",divisionOfDouble(120000.123,1900000.3323));
    return 0;
}