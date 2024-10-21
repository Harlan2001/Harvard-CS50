#include <stdio.h>
#include <cs50.c>

int main(void){
    string name = get_string("What is your name?");
    printf("hello, %s\n", name);
}
