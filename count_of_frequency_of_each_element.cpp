#include <stdio.h>

#define MAX_ELEMENTS 100

int main() {
    int n, i, j, count;
    int arr[MAX_ELEMENTS];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                // To avoid counting the same element again
                for (int k = j; k < n - 1; k++)
                    arr[k] = arr[k + 1];
                // Decrementing the size of array as an element is counted
                n--;
                // Decrementing the index of j as the current element is deleted
                j--;
            }
        }
        printf("%d occurs %d times\n ", arr[i], count);
    }
return 0;
}
