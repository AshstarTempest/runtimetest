#include <stdio.h>
int main()
{
    int n = 6;
    int m = 5;
    int temp = 0;
    temp = n;
    n = m;
    m = temp;
    printf("%d \n",m);
    printf("%d",n);

    return 0;
    
}
