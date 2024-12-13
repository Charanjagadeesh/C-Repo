#include<stdio.h>
int adddigits(int num)
{
    while(num>=10)
    {
        int sum=0;
        while(num>0)
        {
            sum+=num%10;
            num/=10;

        }
        num=sum;
    }
    return num;
}
int main()
{
    int num;
    scanf("%d",&num);
    int result=adddigits(num);
    printf("%d",result);
}