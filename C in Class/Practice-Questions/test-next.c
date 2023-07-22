#include<stdio.h>
#include<math.h>

// int main(){
//     // int a= 5.6;
//     // printf("%d",++a);
//     // return 0;

//     // unsigned ans=-23;
//     // printf( "%u\n", ans );

// //     int *ptr; // define pointer to int
// //    int x = 12345; // initialize int x
   
// //    ptr = &x; // assign address of x to ptr
// //    printf( "The value of ptr is %p\n", ptr );
// //    printf( "The address of x is %p\n\n", &x );

// //    printf( "Printing a %% in a format control string\n" );

// //    printf( "%5d\n", 123 );
// //    printf( "%5d\n", 1234 );
// //    printf( "%4d\n\n", 12345 );

// //    printf("%.3f =", 3.432222);

//     // double f = 123.94536; // initialize double f

//     // printf( "Using precision for floating-point numbers" );
//     // // printf( “%.3f \n %.3e\n %.3g \n\n", f, f, f ); 

    
//     // char c;	
//     // printf("enter a character");
//     // c=getchar();
//     // printf("c = %c ",c);

//     // char ch;
//     // printf("enter a character: ");
//     // scanf("%c", &ch);
//     // putchar(ch);

//     // printf("Enter two alphabets:");
//     // getche();
//     // getch();

//     // char ch;
// 	// printf("Press any key to continue");
// 	// ch = getch();
// 	// printf("you pressed:");
// 	// putch(ch);

//     // float x=12.6784;
//     // printf("%.3f",x);

//     // double x=3.46;
//     // printf("%lf",ceil(x));

//     // double x=10.6,y=7.0;

//     // printf("%d", x%y);
//     // printf("%lf",fmod(x,y));

//     int x;
//     x=printf("ABC");
//     printf(" %d",x);


//     return 0;
//  }
 


//  void my_recursive_function(int n)
// {
//     if(n == 0)
//     return;
//     printf("%d ",n);
//     my_recursive_function(n-1);
// }
// int main()
// {
//     my_recursive_function(5);
//     return 0;
// }

// int fun(int n) 
// {
//   printf("%d\n", n);
//   if (n == 0)
//     return;
//   printf("%d", n%2);
  
//   fun(n/2);

// } 

// int main()
// {
// //    printf("%d ", fun(25));
//     printf("%d", 25/2);
//    return 0;
// }

// void func1()
// {
// 	auto int a=10;    // Local variable of func1()
// 	printf("\n a=%d",a);
// }
// void func2()
// {
// 	auto int a=20; //Local variable of func2()
// 	printf("\n a=%d",a);
// }
// int main()
// {
//     auto int a=30;//Local variable of main()
// 	func1();
// 	func2();
// 	printf("\n a=%d",a);
//          return 0;
// }



// int x;
//     void m();
//     int main()
//     {
//         m();
//         printf("%d", x);
//         return 0;
//     }
//     void m()
//     {
//         x = 4;
//     }


// int x = 5;
//     void m();
//     void n();
//     int main()
//     {
//         int x = 3;
//         m();
//         printf("%d", x);
//         return 0;
//     }
//     void m()
//     {
//         x = 8;
//         n();
//     }
//     void n()
//     {
//         printf("%d", x);
//     }


    // int main()
    // {
    //     int x=1;
    //     {
    //         x=2;
    //         {
    //             int x=3;
    //         }
    //     }
    //     printf("%d",x);
    //     return 0;
    // }

// int main()
// {
//     register int a;
//     printf("\nEnter value of a:");
//     scanf("%d",&a);
//     return 0;
// }

// int incr(int i)
// {
//    static int count = 0;
//    count = count + i;
//    return (count);
// }
// int main()
// {
//    int i,j;
//    for (i = 0; i <=2; i++)
//       j = incr(i);
//       printf("%d",j);
// return 0;
// }


// int main()
// {
// update();
// update();
// return 0;
// }
// void update()
// {
//     auto int a=1;
//     static int b=1;
//     a++;
//     b++;
//     printf("%d,%d\n",a,b);
// }


// int main()
// {
// extern int a;
// printf("%d",++a);
// return 0;
// }
// int a;

// int main(){
    
//        signed char chr;
//        chr = 128;
//        printf("%d\n", chr);
//        return 0;
    
// }

// int main(){
//         int i = -3;
//         int k = i % 2;
//         printf("%d\n", k);
//         return 0;
// }

// int main()
//     {
//         int i = -3;
//         int l = i / -2;
//         int k = i % -2;
//         printf("%d %d\n", l, k);
//         return 0;
//     }

// int main()
//     {
//         int x = 5 * 9 / 3 + 9;
//         printf("%d",x);
//         return 0;
//     }

    // int main()
    // {
    //     int a=1,b=1,c;
    //     c = a++ + b;
    //     printf("%d,%d,%d", a,b,c);
    //     return 0;
    // }


    //    int main()
    // {
    //     int i = 0;
    //     int x = i++;
    //     int y = ++i;
    //     printf("%d % d\n", x, y);
    //     return 0;
    // }

    //     int main()
    // {
    //     int x = 4, y, z;
    //     y = --x;
    //     z = x--;
    //     printf("%d%d%d", x,  y, z);
    //     return 0;
    // }

    //     int main()
    // {
    //     int a=1,b=2,c;
    //     c=a>b;
    //     printf("\n%d",c);
    //     return 0;
    // }

    //     int main()
    // {
    //     int a = 10, b = 5, c = 5;
    //     int d;
    //     d = b + c == a;
    //     printf("%d", d);
    //     return 0;
    // }


    // int main()
    // {
    //     int a = 10, b = 0,c;
    //     c=a&&b;
    //     printf("%d",c);
    // }

    //     int main()
    // {
    //     int a = 10, b = 0,c=2,d;
    //     d=a&&b||c-2;
    //     printf("%d",d);
    // }

    //     int main(){
    //     int x = 1, y = 0, z = 5;
    //     int a = x && y || z++;
    //     printf("%d", z);
    //     return 0;
    // }

    // int main()
    // {
    //     int x = 1, y = 0, z = 5;
    //     int a = x && y && z++;
    //     printf("%d", z);
    //     return 0;
    // }

// int main()
// {
// int a=10,b=5;
// printf("%d",a&b);
// return 0;
// }

// int main()
// {
// int a=7,b=5;
// printf("%d",a|b);
// return 0;
// }

// int main()
// {
// int a=8,b=3;
// printf("%d",a^b);
// return 0;
// }

// int main()
//     {
//         double b = 5 % 3 & 4 + 5 * 6;
//         printf("%lf", b);
//         return 0;
//     }

    // int main()
    // {
    //     double b = 3 && 5 & 4 % 3;
    //     printf("%lf", b);
    //     return 0;
    // }

    //     int main()
    // {
    //     double b = 5 & 3 && 4 || 5 | 6;
    //     printf("%lf", b);
    //     return 0;
    // }

    //     #include <stdio.h>
    // int main()
    // {
    //     int b = 5 + 7 * 4 - 9 * (3, 2);
    //     printf("%d", b);
    // }

    //     int main()
    // {
    //     int b = 4 * 6 + 3 * 4 < 3 ? 4 : 3;
    //     printf("%d\n", b);
    // }

    //     int main()
    // {
    //     int a = -1, b = 4, c = 1, d;
    //     d = ++a && ++b || ++c;
    //     printf("%d, %d, %d, %d\n", a, b, c, d);
    //     return 0;
    // }

    //     #include <stdio.h>
    // int main()
    // {
    //     int x = 0;
    //     if (x == 0)
    //         printf("hi");
    //     else
    //         printf("how are u");
    //         printf("hello");
    //     return 0;
    // }

    
    // int main()
    // {
    //     int x = 5;
    //     if (x < 1);
    //         printf("Hello");
 
    // }

//     int main()
// {
// float x=2.3;
// if(x==2.3)
// {
// printf("Hi");
// }
// else
// {
// printf("Hello");
// }
// return 0;
// }

// int main()
// {
// int x=-1;
// if(x)
// {
// printf("Hi");
// }
// else
// {
// printf("Hello");
// }
// return 0;
// }


    // int main()
    // {
    //     float f = 0.1;
    //     if (f == 0.1)
    //         printf("True");
    //     else
    //         printf("False");
    //     return 0;
    // }

    // int main()
    // {
    //     int x = 1;
    //     if (x > 0)
    //         printf("inside if\n");
    //     else if (x > 0)
    //         printf("inside elseif\n");
    // }

//  int main()
//     {
//         int x = 0;
//         if (x++)
//             printf("true\n");
//         else if (x == 1)
//             printf("false\n");
//     }

// int main()
//     {
//         int x = 0;
//         if (x == 0)
//             printf("true, ");
//         else if (x = 10)
//             printf("false, ");
//         printf("%d\n", x);
//         return 0;
//     }

    // int main()
    // {
    //     int x = 0;
    //     if (x == 1)
    //         if (x >= 0)
    //             printf("true\n");
    //         else
    //             printf("false\n");
    // }

    //     int main()
    // {
    //     int x = 0;
    //     if (x == 1)
    //         if (x == 0)
    //             printf("inside if\n");
    //         else
    //             printf("inside else if\n");
    //     else
    //         printf("inside else\n");
    //     return 0;
    // }

    //     int main()
    // {
    //     double ch;
    //     printf("enter a value between 1 to 2:");
    //     scanf("%lf", &ch);
    //     switch (ch)
    //     {
    //        case 1:
    //           printf("1");
    //           break;
    //        case 2:
    //           printf("2");
    //           break;
    //     }
    //     return 0;
    // }

    //     int main()
    // {
    //     int ch;
    //     printf("enter a value between 1 to 2:");
    //     scanf("%d", &ch);
    //     switch (ch)
    //     {
    //        case 1:
    //           printf("1 ");
    //        default:
    //           printf("2");
    //     }
    //     return 0;
    // }

    //     #include <stdio.h>
    // int main()
    // {
    //     int x = 97;
    //     switch (x)
    //     {
    //        case 'a':
    //           printf("yes ");
    //           break;
    //        case 97:
    //           printf("no");
    //           break;
    //     }
    // }

    // int main()
    // {
    //     int a = 1;
    //     switch (a)
    //     {
    //        case a:
    //           printf("Case A ");
    //        default:
    //           printf("Default");
    //     }
    //    return 0;
    // }


    // int main()
    // {
    //     int i = 0;
    //     while (++i)
    //     {
    //         printf("H");
    //     }
    //     return 0;
    // }

    // int main()
    // {
    //     do
    //         printf("In while loop ");
    //     while (0);
    //         printf("After loop\n");
    //     return 0;
    // }

  int main()
    {
        // int i = 0;
        // do {
        //     i++;
        //     printf("In while loop\n");
        // } while (i < 3);

        // int a=19;
        // if(a=20){
        //     printf("true");
        // }
        // else{
        //     printf("false");
        // }
        
       return 0;
    }





































