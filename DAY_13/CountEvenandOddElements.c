#include<stdio.h>

int main()
{
    int size, i;
    int even =0, odd = 0;

    printf("Numbers do you want to enter? ");
    scanf("%d",&size);

    int num[size];

    printf("Enter elements:\n");

    for(i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }

    //...Checking ..each value one by one. 
      //.. If remainder becomes 0 ..after dividing by 2,
   //..    then it is an even number.
      //.. Otherwise it is counted as odd. */

    for(i = 0; i < size; i++)
    {
        if(num[i] %2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("even Numbers = %d\n",even);
    printf("odd Numbers = %d\n",odd);

    return 0;
}