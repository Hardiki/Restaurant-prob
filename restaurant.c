#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int T,i,t;                                //initialising the variables
scanf("%d",&T);
int max=1000000;
for(t=0;t<T;t++)                          //for loop for T test cases
{
    int l,b,n,temp;
    scanf("%d %d",&l,&b);

    for(i=1;i<=l;i++)
    {
        if(l%i==0 && b%i==0)             //the main concept of the problem

        {
            n=(l*b)/(i*i);               //i is the gcd of l and b
            if(n<max)
                max=n;
        }
    }
    printf("%d",max);
    max=1000000;
}
return 0;
}
