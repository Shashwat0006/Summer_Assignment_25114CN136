#include <stdio.h>

int main() {
    int start, end, flag;

    printf("Enter start and end values: ");
    scanf("%d %d", &start, &end);

    for(int n = start; n <= end; n++) {

        if(n <= 1)
            continue;

        flag = 1;

        for(int i = 2; i <= n / 2; i++) {
            if(n % i == 0) {
                flag = 0;
                break;
            }
        }

        if(flag)
            printf("%d ", n);
    }

    return 0;
}