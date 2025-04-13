#include<stdio.h>
void swap(int *first,int *last)
{
    int temp;
    temp=*first;
    *first=*last;
    *last=temp;

}
int main()
{
int first,last,n,swap_sum;
scanf("%d",&n);
last=n%10;
first=n;
while(first>=10)
{
    first=first/10;
}
 printf("First digit = %d\n",first);
    printf("Last digit = %d\n",last);
    sawp(&first,&last);
     printf("First swap digit = %d\n",first);
    printf("Last swap digit = %d\n",last);
     swap_sum=(first+last);
   printf("%d is swap sum\n",swap_sum);
    return 0;
}
