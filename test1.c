#include <stdio.h>
int main()
{
    int n = 6;
    int m = 5;

   
    n = n + m; 
    m = n - m; 
    n = n - m; 

  
    printf("n = %d\n", n);
    printf("m = %d\n", m);

    return 0;
}
