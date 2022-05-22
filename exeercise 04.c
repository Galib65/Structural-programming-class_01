#include<stdio.h>

int main()

{
        double fahrenheit,centigrade;

        printf("Tempareture in fahrenheit:");

        scanf("%lf",&fahrenheit);

        centigrade=(5.0/9.0)*(fahrenheit-32);

        printf("tempareture in centugrade:%lf",centigrade);

        return 0;

}
