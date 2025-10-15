    /* 45. Count vowels and consonants in string (no arrays - use getchar) */
#include <stdio.h>
int main(){
    printf("Enter text (end with newline):\n");
    int c;
    int vowels=0, consonants=0;
    while((c=getchar())!='\n'){
        if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){
            char low = (c>='A' && c<='Z') ? c+32 : c;
            if(low=='a'||low=='e'||low=='i'||low=='o'||low=='u') vowels++;
            else consonants++;
        }
    }
    printf("Vowels=%d Consonants=%d\n", vowels, consonants);
    return 0;
}
