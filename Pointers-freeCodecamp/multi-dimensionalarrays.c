#include <stdio.h>
int func();

int func(){
    

}

int main()
{
    int a[3][2][2] = {{{2, 5}, {7, 9}},
                      {{3, 4}, {6, 1}},
                      {{0, 8}, {11, 13}}};
                      for (int i = 0; i < 3; i++)
                      {printf("\n");
                        for (int j = 0; j < 2; j++)
                        {
                            for (int k = 0; k < 2; k++)
                            {
                                printf("%d, ",a[i][j][k]);
                            }
                            
                        }
                        
                      }
                      

    return 0;
}