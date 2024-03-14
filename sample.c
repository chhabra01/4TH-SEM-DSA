#include<stdio.h>
#include<math.h>

int series(int n)
{
    int i,ser=0;
    for (i=1;i<=n;i++)
    {
        ser+=(pow(i,i));
    }
    return ser;
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int s=series(num);
    printf("%d",s);
}