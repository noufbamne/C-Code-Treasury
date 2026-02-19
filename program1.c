#include<stdio.h>
int main()
{
    int speed=10;
    int time=3;
    int distance=speed*time;

    printf("traveling at speed %d MPH for %d hours.\n",speed,time);
    printf("    covers %d miles.\n",distance);

    getch();
}