#define MAX_ELEMENTS 100

void reverseArray(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, i;
    int arr[MAX_ELEMENTS];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    reverseArray(arr, 0, n - 1);
    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
return 0;
}
