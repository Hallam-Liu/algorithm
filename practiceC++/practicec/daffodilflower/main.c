#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,j=1,k=1,a;
    for(i=1;i<10;i++)
    {

        for(j=1;j<10;j++)
        {
            for(k=1;k<10;k++)
            {
        a=i*i*i+j*j*j+k*k*k;
        if(a<1000 && a>100)
            printf("%d\n",a);
    }
    }
    }
    return 0;
}
