#include<stdio.h>
#include<string.h>

int main() {
    char s1[100], ch;
    int i, c=0;
    
    printf("Enter string: ");
    scanf("%s", s1);
    
    printf("Enter character: ");
    scanf(" %c", &ch); // Notice the space before %c to consume any leading whitespace
    
    for(i = 0; s1[i] != '\0'; i++) {
        if(s1[i] == ch)
            c++;
    }
    
    printf("Character count: %d\n", c);
    
    return 0;
}

