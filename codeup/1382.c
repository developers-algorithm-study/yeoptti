#include <stdio.h>

int main(){
    int mul;
    for(mul=1; mul<10; mul++)
        printf("2 x %d = %2d\t3 x %d = %2d\t4 x %d = %2d\t5 x %d = %2d\n", mul, mul*2, mul, mul*3, mul, mul*4, mul, mul*5);
}
