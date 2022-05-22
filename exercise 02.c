#include<stdio.h>

int main()

{
    float km,meter,feet,inchs,centimeter;

    printf("enter distance from ashuliya to mirpur:");

    scanf("%f",&km);

    meter=km*1000;
    feet=km*3280.84;
    inchs=km*39370;
    centimeter=km*100000;

    printf("distance in meter from ashuliya to mirpur:%.2f\n",meter);
    printf("distance in feet from ashuliya to mirpur:%.2f\n",feet);
    printf("distance in inchs from ashuliya to mirpur:%.2f\n",inchs);
    printf("distance in centimeter from ashuliya to mirpur:%.2f\n",centimeter);

    return 0;


}
