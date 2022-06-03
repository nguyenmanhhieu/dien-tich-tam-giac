//
//  main.c
//  dien tich tam giac
//
//  Created by Hiếu Hee on 03/06/2022.
//

#include <stdio.h>
int main(void)
{
    float hight;
    float bottom;
    float S;
    float P;
    float a;
    float b;
        printf("nhap chieu cao\n");
        scanf("%f",&hight);
        printf("nhap chieu day\n");
        scanf("%f",&bottom);
    S= (hight*bottom)/2;
        printf("S is %f\n",S);
    if (S>50)
        printf("tam giac to the\n");
    else
        printf("tam giac be the\n");
    if (S>50)
        printf("nhap canh a\n");
        scanf("%f",&a);
        printf("nhap canh b\n");
    scanf("%f",&b);
        P= hight+a+b;
        printf("P is %f\n",P);
   return 0;
}

