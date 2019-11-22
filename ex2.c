#include <stdio.h>
int count_one_bits(unsigned int value)
{
    int count = 0;
    while (value)
    {
        if (1 == value%2)
        {
            count++;
        }
        value = value/2;
    }
    return count;
}
main()
{
    int input;
    int c = 0;
    char c[input];
    c = count_one_bits(input);
int a[c];
int i,max,min,m;
printf("请输入数据：\n");
for(i=0;i<c;i++)
{
    char a[i];
m=i;
if(a[i]=='\n')
break;
}
max=a[0];
for(i=0;i<m;i++)
{
if(max<a[i])
max=a[i];
}
printf("The max is =%d ",max);
} 