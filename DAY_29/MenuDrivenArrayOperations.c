#include<stdio.h>

int main(){
    int arr[100],n,choice,i,sum=0,max;

    // Logic:
    // 1. Read array size and elements.
    // 2. Display menu for array operations.
    // 3. Perform selected operation using switch-case.
    // 4. Available operations:
    //      - Display array
    //      - Sum of elements
    //      - Find maximum element
    // 5../ Print the result.

    printf("Enter size of array");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("\n1. Display Array\n");
    printf("2. Sum of Elements\n");
    printf("3. Maximum Element\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Array Elements: ");
            for(i=0;i<n;i++)
                printf("%d ",arr[i]);
            break;

        case 2:
            for(i=0;i<n; i++)
                sum+=arr[i];
            printf("Sum = %d\n",sum);
            break;

        case 3:
            max=arr[0];
            for(i=1;i<n;i++)
                if(arr[i]>max)
                    max=arr[i];
            printf("Maximum =%d\n",max);
            break;

        default:
            printf("Invalid Choice!\n");
    }

    
}