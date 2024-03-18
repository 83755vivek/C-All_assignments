//5. Write a program to find maximum of three numbers using

//b. conditional operator.



#include<stdio.h>

int main() {
    int n1 = 10, n2 = 20, n3 = 40, max;
    max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
    printf("Max = %d\n", max);
    return 0;
}

