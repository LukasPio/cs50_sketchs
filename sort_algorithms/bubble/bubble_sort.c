#include <stdio.h>

int main()
{

    int numbers_to_sort[] = {7, 1, 4, 2, 9, 6, 3, 5, 8};
    int array_size = sizeof(numbers_to_sort) / sizeof(numbers_to_sort[0]);    

    for (int i = 0; i < array_size - 1; i++)
    {
        for (int j = i + 1; j < array_size; j++)
        {
            int n1 = numbers_to_sort[i];
            int n2 = numbers_to_sort[j];

            if (n1 > n2)
            {
                int aux = numbers_to_sort[i];
                numbers_to_sort[i] = n2;
                numbers_to_sort[j] = aux;
            }
        }
    }

    for (int i = 0; i < array_size; i++)
    {
        printf("%i ", numbers_to_sort[i]);
    }
    printf("\n");

    return 0;
}