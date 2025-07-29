#include <stdio.h>
int sum(){
    int a = 10;
    int b = 20;
    int sum = a+b;
    return sum;
}
int main() {
    int ans = sum();
    printf("%d",ans);
    return 0;
}