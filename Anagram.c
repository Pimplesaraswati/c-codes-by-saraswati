#include <stdio.h>
int main()
{
    int i,j,n1=0,n2=0;
    char s1[20];
    char s2[20];    
    printf("enter string 1\n");
    scanf("%[^\n]",s1);
    printf("enter string 2\n");
    scanf(" %[^\n]",s2);
    for(i=0; s1[i]; i++)
    {
        if((s1[i]<'A' || s1[i]>'Z') && (s1[i]<'a' || s1[i]>'z'))
        {
            for(j=i; s1[j]; j++)
                s1[j]=s1[j+1];
            i--;
        }
        else if(s1[i]>='A' && s1[i]<='Z')
        s1[i]=s1[i]+32;
    }    
    for(i=0; s2[i]; i++)
    {
        if((s2[i]<'A' || s2[i]>'Z') && (s2[i]<'a' || s2[i]>'z'))
        {
            for(j=i; s2[j]; j++)
                s2[j]=s2[j+1];
            i--;
        }
        else if(s2[i]>='A' && s2[i]<='Z')
        s2[i]=s2[i]+32;
    }     
    for(i=0; s1[i]; i++)
    {
        n1++;
    }
    for(i=0; s2[i]; i++)
    {
        n2++;
    }
    printf("string 1:%s\n",s1);
    printf("string 2:%s\n",s2);
    
    for(i=0; s1[i]; i++)
    {
        for(j=i; j<n1-1; j++)
        {
            if(s1[i]>s1[j+1])
            {
                int temp=s1[i];
                s1[i]=s1[j+1];
                s1[j+1]=temp;
            }
        }
    }
    for(i=0; s2[i]; i++)
    {
        for(j=i; j<n2-1; j++)
        {
            if(s2[i]>s2[j+1])
            {
                int temp=s2[i];
                s2[i]=s2[j+1];
                s2[j+1]=temp;
            }
        }
    }
    printf("string 1:%s\n",s1);
    printf("string 2:%s\n",s2);
    for(i=0; s1[i]; i++)
    {
        if(s1[i]!=s2[i])
        break;
    }
    if(s1[i]==s2[i])
    printf("Strings are anagram\n");    
    return 0;
}