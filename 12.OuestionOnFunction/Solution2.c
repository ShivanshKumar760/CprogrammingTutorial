#include<stdio.h>

int CelsiusToFahrenheit(int C)
{
    int F=C*(9.0/5.0)+32;
    return F;

}

int main()
{
    int celsius = 32;
    printf("%d\n", CelsiusToFahrenheit(celsius));
}