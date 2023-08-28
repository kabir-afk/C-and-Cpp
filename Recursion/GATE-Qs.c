#include <stdio.h>
// Q.1 find x
//  int jumble(int x, int y)
//  {
//      x = 2 * x + y;
//      return x;
//  }
//  int main()
//  {
//      int x = 2, y = 5;
//      y = jumble(y, x);
//      x = jumble(y, x);
//      printf("%d\n", x);
//  }

// Q.2 find j
//  int incr(int i){
//      static int count=0;
//      count=count+i;
//      return (count);
//  }
//  int main(){
//      int i,j;
//      for ( i = 0; i <= 4; i++)
//      {
//          j=incr(i);//10
//      }
//      printf("%d",j);
//  }

// Q.3 find number
//  int r(){
//      static int num=7;
//      return num--;
//  }
//  int main(){
//      for ( r(); r(); r())
//      {
//          printf("%d",r());
//      }
//      return 0;
//  }

// Q.4 find i+j
// void f(int *p,int m)
// {
//     m = m + 5;
//     *p = *p + m;
// }
// int main()
// {
//     int i = 5;
//     int j = 10;
//     f(&i, j);
//     printf("%d",i+j);
// }