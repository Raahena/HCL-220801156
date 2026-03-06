//5. Read a character and report whether it is a vowel, consonant, digit, or special symbol.
#include <stdio.h>

int main() {
char a;
scanf("%c",&a);

if(a>'0'&&a<='9'){
    printf("its a number");
    
}
else if((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')){
    if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u')||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
    printf("Its a vowel");
} 
else{
    printf("consonat");
}
}
else{
    printf("special");
}
    return 0;
}

