#include<stdio.h>
int main()
{
    int i,sum=0;
    scanf("%d",&i);
    while(i!=0)
    {
        sum+=i%10;
        i/=10;
    }
    printf("%d is sum of digit\n",sum);
    return 0;
}
