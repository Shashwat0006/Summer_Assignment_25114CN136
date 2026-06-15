#include<stdio.h>

int main()
{
    int arr[6] = {5, 8, 5, 2, 5, 9};
    int num;
    int freq = 0;

    printf("number whose frequency you want to check: ");
    scanf("%d", &num);

    //.. Loop. runs through.. every element .of the array
    for(int i = 0; i < 6; i++)
    {
        // If entered number matches current element
        if(num == arr[i])
        {
            freq = freq + 1;
        }
    }

    printf("Frequency of %d is %d", num, freq);

    return 0;
}