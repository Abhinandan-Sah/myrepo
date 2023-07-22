// #include<stdio.h>

// int main(){
//     int *ytr;
//     *ytr=7;
//     printf("%p", sizeof(ytr));

//     int a;
//     int*aptr;
//     a=7;
//     aptr=&a;

//     printf("The address of a is %p"
//     "\nThe value of aPtr is %p", &a, aptr);

//     printf("\n\nThe value of a is %d"
//            "\nThe value of *aptr is %d",&a, *aptr);
        
//     printf("\n\nShowing that * and & are complements of "
//             "each other \n&*aPtr = %d"
//             "\n*&aptr=%d\n", &*aptr, *&aptr);
             
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	double radius,area=0.0;
// 	double *pradius=&radius,*parea=&area;
// 	printf("\n Enter the radius of the circle:");
// 	scanf("%lf",pradius);
// 	*parea=3.14*(*pradius)*(*pradius);
//                   printf("\n The area of the circle with radius %.2lf = %.2lf",*pradius,*parea);
// 	return 0;
// }


// #include <stdlib.h>
// #include <stdio.h>
// int main()
// {
    
// 	int n=1;
// 	int *ptr = (int *)malloc(n*sizeof(int));
// 	*ptr=6;    
//     printf("%d",*ptr);//6 is printed
//     printf("\n%d",ptr);//Printing address hold by pointer before deallocation
//     free(ptr); 
//     printf("\n%d",*ptr);//Same address will be printed(Dangling pointer)
//    //SOLUTION
//    ptr = NULL;//Pointer is now changed to NULL pointer
//    printf("\n%d",*ptr);//0 will be printed
//    return 0;
// }

    // #include <stdio.h>
    // int main()
    // {
    //     int *ptr, a = 10;
    //     ptr = &a;
    //     *ptr += 1;
    //     printf("%d,%d", *ptr, a);
    // }

    // #include <stdio.h>
    // int main()
    // {
    //     int x=10;
    //     int *p1=&x,*p2;
    //     *p1=x+3;
    //     p2=p1;
    //     *p2=*p1+2;
    //     printf("%d",x);
    //     return 0;
    // }


// #include <stdio.h>
//     int main()
//     {
//         char *p = NULL;
//         char *q = 0;
//         if (p)
//             printf(" p ");
//         else
//             printf("nullp");
//         if (q)
//             printf("q\n");
//         else
//             printf(" nullq\n");
//     }


// int main()
//     {
//         int i = 10;
//         void *p = &i;
//         printf("%d\n", (int)*p);
//         return 0;
//     }


// #include <stdio.h>
//     int main()
//     {
//         // int i = 10;
//         // void *p = &i;
//         // printf("%f\n", *(float*)p);
//         // return 0;

        
//     //   char far *farther, *farthest;
//     //   printf("%d..%d", sizeof(farther), sizeof(farthest));

//     }

    // #include <stdio.h>
    // int x = 0;
    // void main()
    // {
    //     int  *const ptr = &x;
    //     printf("%p\n", ptr);
    //     ptr++;
    //     printf("%p\n ", ptr);
    // }


//       #include <stdio.h>
//  void foo(int *p)
//     {
//         int j = 2;
//         p = &j;
//         printf("%d ", *p);
//     }
//     int main()
//     {
//         int i = 97, *p = &i;
//         foo(&i);
//         printf("%d ", *p);
//     }

// #include <stdio.h>
//     void m(int *p, int *q)
//     {
//         p=q;
//         *p=8;
//         // *q=7;
//         // printf("%d\n",*p);
//         // printf("%d\n",*q);
//     }
//     int main()
//     {
//         int a = 6, b = 5;
//         m(&a, &b);
//         printf("%d %d\n", a, b);
//     }

// #include<stdio.h>
// int main()
// {
// 	// int arr[]={1,2,3,4,5,6,7,8,9};
// 	// int *p1,*p2;
// 	// p1=arr;
// 	// p1++;// p1 will point towards next memory location
// 	// printf("\n%d",*p1);//2 will be displayed
// 	// p1--;//p1 will point towards previous memory location
// 	// printf("\n%d",*p1);// 1 will be displayed
// 	// p1=p1+2;// Adding a constant to pointer(p1 will point towards 3rd element)
// 	// printf("\n%d",*p1);// 3 will be displayed
// 	// p1=p1-2;//Subtracting a constant from a pointer(P1 will point towards first element)
// 	// printf("\n%d",*p1);// 1 will be displayed
// 	// p2=&arr[4];
// 	// printf("\n%d",*p2-*p1);//Subtracting two pointers(Returns 4(no. of elements b/w+1)(Pointers pointing to the same array)
//     // printf("\n%p",p2-p1);
//     // printf("\n%d",p1);
//     // printf("\n%d",*p2-*p1);
//     // printf("\n%p",&arr[0]);

//     // int a[]={1,2,3,4,5};
//     // int *p=a; // pointer p starts pointing towards first element of array
//     // int i;
//     // for(i=0;i<5;i++)
//     // {
//     // printf("\n%d",(p+i));
//     // }

//     // printf("\n%d",(p));
//     // printf("\n%d",(p+1));

// #include<stdio.h>
// int main()
// {
// 	int arr[]={1,2,3,4,5};
// 	int i;
// 	int *p;
// 	p=arr;
// 	printf("\n First value is:%d",*p);
// 	p=p+1;
// 	printf("\n Second value is:%d",*p);
// 	*p=45;
// 	p=p+2;
// 	*p=-2;
// 	printf("\n Modified array is:");
// 	for(i=0;i<5;i++)
// 	{
// 		printf("\n%d",arr[i]);//We can also write i[arr]
// 	}
// 	p=arr;
// 	*(p+1)=0;
// 	*(p-1)=1;
// 	printf("\n Modified array is:");
// 	for(i=0;i<5;i++)
// 	{
// 		printf("\n%d",*(p+i));//We can also write *(i+arr)
// 	}

    
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
// 	int arr[5];

	// int i;
	// int *p;
	// p=arr;
	// printf("\n First value is:%d",*p);
	// p=p+1;
	// printf("\n Second value is:%d",*p);
	// *p=45;
	// p=p+2;
	// *p=-2;
	// printf("\n Modified array is:");
	// for(i=0;i<5;i++)
	// {
	// 	printf("\n%d",arr[i]);//We can also write i[arr]
	// }
	// p=arr;
	// *(p+1)=0;
	// *(p-4)=5;
	// printf("\n Modified array is:");
// 	for(int i=0;i<5;i++)
// 	{
// 		printf("\n%d",arr[i]);//We can also write *(i+arr)
// 	}
//     // printf("\n Second value is:%d",*(p-1));

// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	 int a[]={1,2,3,4};
// 	 int *p=a,i;
// 	 p++;
//     // printf("%d ",*(p));
// 	 *(p+1)=29;
        	
// 	 p++;

// 	 *p=23;
//     //   p=a;
// for(i=0;i<4;i++)
//            printf("%d ",*(p+i));
//     printf("\n\n%d\n\n ",*(p));
// 	 p--;
// 	 *(p+0)=12;
	 
// 	return 0;
// }


// #include<stdio.h>
// int main()
// {
// 	 int a[]={1,2,3,4};
// 	 int *p1=a,i;
// 	 int *p2=&a[2];
// 	 p2--;
// 	 *(p2-1)=90;
// 	 p1=p2;
// 	 *p1=100;
// 	 for(i=0;i<4;i++)
//      printf("%d ",a[i]);
// 	 return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	 int a[]={1,2,3,4};
// 	 int *p1=a,*p2=&a[3];
// 	 p1++;
// 	 printf("\n%d %d",p2-p1,*p2-*p1);
// 	 return 0;
// }


// #include<stdio.h>
// int main()
// {
//      int a[]={1,2,3,4};
//      int *p=a;
//      *(p+1)=*(p+2);
//      printf("\n%d",a[2]);
//      return 0;
// }


// #include<stdio.h>
// int main()
// {
//      int a[]={1,2,3,4};
//      int *p=a,x;
//      x=*p++;
//      printf("\n%d %d",x,*p);
//      return 0;
// }

// #include <stdio.h>
 
// int main()
// {
//     float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//     int *ptr1 = &arr[0];
//         printf("%f ", ptr1);

//     int *ptr2 = ptr1 + 1;
//     printf("%f ", ptr1);

//     printf("%f ", *ptr2);
//     printf("%f  ", ptr2);
//     printf("%f ", ptr1);


//     printf("%d", ptr2 + ptr1);
 
//    return 0;
// }

#include <stdio.h>
 
int main()
{
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
 
    printf("%f ", *ptr2);
    printf("%f ", ptr2);
    printf("%f ", ptr2);
    printf("%d", ptr2 - ptr1);
 
   return 0;
}




