#include<stdio.h>
int main() {
    int intType;
    float floatType;
    long longType;
    long long longLongType;
    char charType;

    printf("Size of char: %zu byte\n", sizeof(charType));
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of long int: %zu bytes\n", sizeof(longType));
    printf("Size of long long int: %zu bytes\n", sizeof(longLongType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    
    return 0;
}

