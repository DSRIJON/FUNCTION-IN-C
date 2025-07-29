#include <stdio.h>
int summation(int a,int b,int c){
    int var = a+b+c;
    return var;
}
int main() {
    int sum;
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    sum = summation(x,y,z);
    printf("%d",sum);
    return 0;
}