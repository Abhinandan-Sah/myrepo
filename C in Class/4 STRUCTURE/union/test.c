// #include <stdio.h>
// #include <string.h>
// union Data {
//    int i;
//    float f;
//    char str[20];
// };
// int main( )
//  {
//    union Data data;        
//    data.i = 10;
//    data.f = 220.5;
//    strcpy( data.str, "C Programming");
//    printf( "data.i : %d\n", data.i);
//    printf( "data.f : %f\n", data.f);
//    printf( "data.str : %s\n", data.str);
//    return 0;
// }


// #include <stdio.h>
// #include <string.h>
// union Data {
//    int i;
//    float f;
//    char str[20];
// };
// int main( )
//  {
//    union Data data;        
//    data.i = 10;
//    data.f = 220.5;
//    strcpy( data.str, "C Programming");
//    printf( "data.i : %d\n", data.i);
//    printf( "data.f : %f\n", data.f);
//    printf( "data.str : %s\n", data.str);
//    return 0;
// }

#include<stdio.h>
union employee
{
	char name[30];
	int id;
	float salary;
}u;
int main()
{
	//union employee u;
	printf("\n Enter name:");
	gets(u.name);//Initialization
	printf("\n Entered name is:%s",u.name);//Accessing
	printf("\n Enter id:");
	scanf("%d",&u.id);//Initialization
	printf("\n Entered id is:%d",u.id);//Accessing
	printf("\n Enter salary:");
	scanf("%f",&u.salary);//Initialization
	printf("\n Entered salary is:%.2f",u.salary);//Accessing
	return 0;
}

