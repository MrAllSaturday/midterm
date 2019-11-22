#include <stdio.h>
int function(char *s)
{
    int i,n = 0,flag = 1;
    
    for(i = 0; s[i]; i++)
    {
        if(flag == 1)
        {
            if(s[i] != ' ')
            {
                n++;
                flag = 0;
            }
        }
        else if(s[i] == ' ')
            flag = 1;
    }
    return n;
}
int main()
{   
    char c;
    c = getchar();
    int letters=0;int spaces=0;int digits=0;int others=0;
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        {
            letters++;
        }
        else if(c>='0'&&c<='9')
        {
            digits++;
        }
        else if(c==' ')
        {
            spaces++;
        }
        else
        {
            others++;
        }
    char s[50];
    gets(s);
    printf("The number of words is:%d",function(s)-digits-others);
    return 0;
}