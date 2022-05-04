#include<stdio.h>
#include<string.h>
main()
{
    char s[50],flg[9];
    int i,j,len=0,c=0;
    memset(s,0,sizeof(s));
    printf("enter the flag\n");
    gets(flg);
    printf("enter the bit stream\n");
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]=='1')
        {
            c++;
            if(c==5)
            {
                for(j=len;j>i+1;j--)
                    s[j]=s[j-1];
                s[i+1]='0';
                c=0;
                len++;
            }
        }
        else
        c=0;
    }
    printf("\n the transmitted frame is %s %s %s",flg,s,flg);
}

