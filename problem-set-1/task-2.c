// C Program to Check Whether a Character is a Vowel or Consonant

#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    ch = tolower(ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("%c is a vowel\n", ch);
    }
    else{
        printf("%c is a consonant\n", ch);
    }

    return 0;
}