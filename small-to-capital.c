#include <stdio.h>
char small_to_capital(char a){
    char var = a - 32;
    return var;
}
char capital_to_small(char a){
    char var = a+32;
    return var;
}
int main() {
    char a;
    scanf("%c",&a);
    char var = small_to_capital(a);
    printf("%c",var);
    // char var = capital_to_small(a);
    // printf("%c",var);
    return 0;
}