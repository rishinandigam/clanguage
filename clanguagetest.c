// // // #include<stdio.h>

// // // struct s 

// // // {

// // // int  i ;

// // // struct s  *p ;

// // // } ;

// // //  int main()

// // // {

// // // struct s  var1, var2 ;

// // // var1.i = 100 ;

// // // var2.i = 200 ;

// // // var1.p = &var2 ;

// // // var2.p = &var1 ;

// // // printf ( "\n%d %d", var1.p -> i, var2.p -> i ) ;

// // // } 
// // // #include<stdio.h>

// // // int main()

// // // {

// // //     printf("%d, %d, %d", sizeof(3.0f), sizeof('3'), sizeof(3.0));

// // //     return 0;

// // // }
// // #include <stdio.h>

// // int main()

// // {

// //     int  i = 5, j = 2 ;

// //     junk ( &i, &j ) ;

// //     printf ( "\n%d %d", i, j ) ;

// //     return 0;

// // }

// // void junk ( int  *i, int  *j )

// // {

// //     *i = *i * *i ;

// //     *j = *j * *j ;

// // }

// #include <stdio.h>

// int main()

// {

//     int  p = 23, f = 24 ;

//     test ( &p, &f ) ;

//     printf ( "\n%d %d", p, f ) ;

//     return 0;

// }

//  void test ( int  q, int  g )

// {

//     q = q + q ;

//     g = g + g ;

// }
//  #include <stdio.h>

// int main()

// {
   /// int size = 3;  int array[size];
///int size = 3;  int array[size] = {1, 2, 3};
//int a = 0, b = 1, c = 2;  int array[3] = {a, b, c};


//     void slogan() ;

//     int c = 5 ;

//     c = slogan() ; 

//     printf ( "%d\n", c ) ;

//     return 0 ; 

// }

// void slogan()

// {

//     printf ( "Only He men use C!\n" ); 

// }
// #include <stdio.h>
//     void foo(int*);
//     int main()
//     {
//         int i = 10, *p = &i;
//         foo(p++);
//     }
//     void foo(int *p)
//     {
//         printf("%d\n", *p);
//     }
# include <stdio.h>

int main ( )

{

             if(sizeof(char) > -12)

                           printf("True");

              else

                           printf("False");

             return 0;

}
