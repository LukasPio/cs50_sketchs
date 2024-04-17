#include <stdio.h>

int main()
{
    int numbers_to_sort[] = {7, 1, 4, 2, 9, 6, 3, 5, 8};
    int array_size = sizeof(numbers_to_sort) / sizeof(numbers_to_sort[0]);
    int minimum_index = 0, to_replace;

    for (int i = 0; i < array_size - 1; i++)
    {
        minimum_index = i;
        for (int j = i + 1; j < array_size; j++)
        {
            if (numbers_to_sort[j] < numbers_to_sort[minimum_index])
                minimum_index = j;
        }
        if (minimum_index != i)
        {
            int temp = numbers_to_sort[i];
            numbers_to_sort[i] = numbers_to_sort[minimum_index];
            numbers_to_sort[minimum_index] = temp;
        }
    }

    for (int i = 0; i < array_size; i++)
    {
        printf("%i ", numbers_to_sort[i]);
    }
    
    printf("\n");
    return 0;
}
