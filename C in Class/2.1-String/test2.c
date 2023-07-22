// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
// 	int a=123;
// 	char str[100];
// 	itoa(a,str,2);
// 	printf("\n Binary value:%s",str);
// 	itoa(a,str,10);
// 	printf("\n Decimal value:%s",str);
// 	itoa(a,str,16);
// 	printf("\n Hexadecimal value:%s",str);
// 	itoa(a,str,8);
// 	printf("\n Octal value:%s",str);
//     printf("\n type: ", (str));
// }

// #include<stdio.h>
// void ftoa1(float f1,char s[])
// {
// sprintf(s,"%f",f1);// s is array, %f format specifier and f1 is float variable
// }
// int main()
// {
// char str[20];
// float f=12.340000;
// ftoa1(f,str);//it means convert float value f to string and store it in str// function call//
// printf("\n%s",str);
// return 0;
// }

#include<stdio.h>
int main()
{
int a[][3]={1,2,3,4,5,6};
printf("%d",a[0][2]);
return 0;
}

