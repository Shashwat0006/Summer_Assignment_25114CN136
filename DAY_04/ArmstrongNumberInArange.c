#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    for(int n = start; n <= end; n++) {

        int original = n, remainder, result = 0, digits = 0;

        while(original != 0) {
            original /= 10;
            digits++;
        }

        original = n;

        while(original != 0) {
            remainder = original % 10;
            result += pow(remainder, digits);
            original /= 10;
        }

        if(result == n)
            printf("%d ", n);
    }

    return 0;
}