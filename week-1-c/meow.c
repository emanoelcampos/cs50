#include <stdio.h>

//Prototype
void meow(int n);

int main(void) {
        meow(7);
}

void meow(int n) {
    for(int i = 0; i < n; i++) {
        printf("meow\n");
    }

}