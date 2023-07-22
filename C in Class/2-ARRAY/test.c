// #include<stdio.h>

// struct example{
//     char name[15];
//     int ptr;
//     float fd;
// };
// int main()
// {
//     // int a=3.9, expr;
//     // int c=(int)a;
//     // expr=a>3.4?5*6%4:(int)4.2*9.0;
//     // printf("\n%d", expr);
//     // printf("\n%d", c);

//     // int *p, a=8;
//     // *p=a;
//     // printf("%d", *p);

//     struct example e1;
//     printf("\n%d", sizeof(e1));
//     printf("\n%d", sizeof(e1.name));
//     printf("\n%d", sizeof(e1.ptr));
//     printf("\n%d", sizeof(e1.fd));
//     getch();

// return 0;
// }

// #include<stdio.h>
// struct student
// {
// 	char name[20];
// 	int roll_no;
// 	float fees
// }v1={"Goerge",23,4500.45},v2={"Tom",45,3400.56};
// int main()
// {
// printf("%d",v2.roll_no);
// return 0;
// }

// #include<stdio.h>
// struct student
// {
// 	char name[20];
// 	int roll_no;
// 	float fees
// }v1={"Goerge",4500.45};
// int main()
// {
// printf("%d",v1.roll_no);
// return 0;
// }

// #include<stdio.h>

// int main(){
// 	int a;
// 	int *aptr;

// 	a=7;
// 	aptr=&a;

// 	printf("%p\n", &*aptr);
// 	printf("%p\n", *&aptr);
// 	printf("%p\n", &a);

// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	int *pnum=NULL;
// 	*pnum=0;
// 	printf("%d", *pnum);
// 	// char *pch;
// 	// float *pfnum;
// 	// double *pdnum;
// 	// long *plnum;
// 	// printf("\n Size of integer pointer=%d",sizeof(pnum));
// 	// printf("\n Size of character pointer=%d",sizeof(pch));
// 	// printf("\n Size of float pointer=%d",sizeof(pfnum));
// 	// printf("\n Size of double pointer=%d",sizeof(pdnum));
// 	// printf("\n Size of long pointer=%d",sizeof(plnum));
// 	return 0;
// }


// #include<stdio.h>
// int main()
// {
// 	// int *ptr=NULL;
// 	// int a=10;
// 	// printf("%u",ptr);// 0 will be displayed
//     //             //   printf("%d",*ptr);//Invalid(Dereferencing), as ptr is NULL at this point.
// 	// ptr=&a;
//     //    printf("\n%d",*ptr);//Now it is allowed, as NULL pointer has starting pointing somewhere

// 	int a=10;
// 	float a=10;
// 	printf("%f", a);
// 	return 0;
// }

    // #include  <stdio.h>
    // int main()
    // {
    //    signed char chr;
    //    chr = 128;
    //    printf("%d\n", chr);
    //    return 0;
    // }


//  #include <stdio.h>
//     int main()
//     {
//         int i = -3;
//         int k = i % 2;
//         printf("%d\n", k);
//         return 0;
//     }


// #include <stdio.h>
//     int main()
//     {
//         int i = 3;
//         int l = i / -2;
//         int k = i % -2;
//         printf("%d %d\n", l, k);
//         return 0;
//     }


    // #include <stdio.h>
    // int main()
    // {
    //     int x = 5 * 9 / 3 + 9;
    //     printf("%d",x);
    //     return 0;
    // }

#include <stdio.h>
    int main()
    {
        int x = 5.3 % 2;
        printf("Value of x is %d", x);
        return 0;
    }



