//write a program in c to find the frequency of characters 

#include <stdio.h>
int main() {
    char str[500], ch,i;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; ++i) 
	{
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}

