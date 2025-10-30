#include <stdio.h>
int main()
{
    int t;       
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        char s[10001];
        scanf("%s", s);
        int capital = 0, small = 0, digit = 0;
        for(int j = 0; s[j] != '\0'; j++)
        {
            if(s[j] >= 'A' && s[j] <= 'Z')
            capital ++;
            else if(s[j] >= 'a' && s[j] <= 'z')
            small ++;
            else if(s[j] >= '0' && s[j] <= '9')
            digit ++;
        }   
        printf("%d %d %d\n", capital, small, digit);
    }
    return 0;
} 
