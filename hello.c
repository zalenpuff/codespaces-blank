#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct person {
    char name[50];
    int age;
};

typedef struct person Person;

int main(void) {
    int value;
    printf("Enter a number: ");
    scanf("%d", &value);

    int *arr = malloc(20 * sizeof *arr);
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 20; i++) {
        arr[i] = i;
    }

    for (int i = 0; i < 20; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    Person p1;
    strcpy(p1.name, "Sue");
    p1.age = 20;
    printf("Name: %s, Age: %d\n", p1.name, p1.age);

    free(arr);
    return 0;
}

//Guih
//turtle
//Hahaha
