//write a program in c to remove characters in strings except alphabets

#include <stdio.h>
int main()
{
    char str[100];
    int i,j;	
	printf("enter the string : ");
    fgets(str,sizeof str,stdin);	
    for(i=0; str[i]!='\0'; ++i)
    {
        while (!((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z' || str[i]=='\0')))
        {
            for(j=i;str[j]!='\0';++j)
            {
                str[j]=str[j+1];
            }
            str[j]='\0';
        }
    }
    printf("After removing Output String : %s\n\n",str);
    return 0;
}

