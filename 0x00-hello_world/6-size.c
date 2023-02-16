#include<stdio.h>
int main() {
    int intType;
    float floatType;
    long longType;
    long long longLongType;
    char charType;

    printf("Size of char: %zu byte(s)\n", sizeof(charType));
    printf("Size of int: %zu byte(s)\n", sizeof(intType));
    printf("Size of long int: %zu byte(s)\n", sizeof(longType));
    printf("Size of long long int: %zu byte(s)\n", sizeof(longLongType));
    printf("Size of float: %zu byte(s)\n", sizeof(floatType));
    
    return 0;
}

