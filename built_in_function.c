#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
    int ans = ceil(2.2); //print next integer value
    int ans1 = floor(2.2); //print lower integer value
    int ans2 = round(3.5254);
    printf("%d ",ans);
    printf("%d ",ans2);
    int ans3 = sqrt(16);
    printf("%d ",ans3);
    int absolute = abs(-100); //convert a negative value into positive one 
    printf("%d",absolute);
    return 0;
}