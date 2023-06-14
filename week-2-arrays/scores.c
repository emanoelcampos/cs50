#include <cs50.h>
#include <stdio.h>

float average(int lenght, int array[]);

const int TOTAL = 3;

int main(void) {

    int scores[TOTAL];
    //populamdo o array usando for loop
    for(int i = 0; i < TOTAL; i++) {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", (average(TOTAL, scores)));
}

float average(int lenght, int array[]) {

    int sum = 0;
    for (int i = 0; i < lenght; i++) {
        sum += array[i]; //sum = sum + array[i];
    }
    return sum / (float)lenght;

}