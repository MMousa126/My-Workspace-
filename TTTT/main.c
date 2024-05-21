#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(",");
        }
    }
}

void ArrayChallenge2(int arr[], int size) {
    sortArray(arr, size);

    int totalSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    if (totalSum % 2 != 0) {
        printf("-1");
        return;
    }

    int targetSum = totalSum / 2;
    int currentSum = 0;
    int firstSet[size];
    int firstSetSize = 0;

    for (int i = size - 1; i >= 0; i--) {
        if (currentSum + arr[i] <= targetSum) {
            currentSum += arr[i];
            firstSet[firstSetSize++] = arr[i];
        }
    }

    if (currentSum == targetSum) {
        int secondSet[size - firstSetSize];
        int secondSetSize = 0;

        for (int i = 0; i < size; i++) {
            if (!binarySearch(firstSet, firstSetSize, arr[i])) {
                secondSet[secondSetSize++] = arr[i];
            }
        }

        sortArray(secondSet, secondSetSize);

        printArray(firstSet, firstSetSize);
        printf(",");
        printArray(secondSet, secondSetSize);
    } else {
        printf("-1");
    }
}

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return 1;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

// Function to check if a subset with given sum can be formed using a recursive approach
int isSubsetSum(int *arr, int n, int sum, int *subset) {
    if (sum == 0) {
        return 1; // Subset with the given sum is found
    }
    if (n == 0 && sum != 0) {
        return 0; // Subset with the given sum is not possible
    }

    // Exclude the last element
    if (arr[n - 1] > sum) {
        return isSubsetSum(arr, n - 1, sum, subset);
    }

    // Include the last element
    subset[n - 1] = 1;
    if (isSubsetSum(arr, n - 1, sum - arr[n - 1], subset)) {
        return 1; // Subset found
    }

    // Exclude the last element
    subset[n - 1] = 0;
    return isSubsetSum(arr, n - 1, sum, subset);
}

// Function to find two subsets with equal sums
void findEqualSums(int *arr, int n) {
    int totalSum = 0;
    int i, j;

    // Calculate the total sum of the array
    for (i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Check if the total sum is even and find half of it
    if (totalSum % 2 != 0) {
        printf("-1\n");
        return;
    }
    int halfSum = totalSum / 2;

    int *subset = (int *)malloc(n * sizeof(int));

    // Check if a subset with halfSum exists
    if (!isSubsetSum(arr, n, halfSum, subset)) {
        printf("-1\n");
        free(subset);
        return;
    }

    // Print the two subsets
    printf("Sets: ");
    for (i = 0; i < n; i++) {
        if (subset[i] == 1) {
            printf("%d, ", arr[i]);
        }
    }
    printf("\n");
    printf("     ");
    for (j = 0; j < n; j++) {
        if (subset[j] == 0) {
            printf("%d, ", arr[j]);
        }
    }

    free(subset);
}

int compareInts(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void ArrayChallenge(int arr[], int arrLength) {
    int sum = 0;

    // Calculate the sum of all integers in the array
    for (int i = 0; i < arrLength; i++) {
        sum += arr[i];
    }

    // If the sum is odd, it's impossible to split the array into two even sets
    if (sum % 2 == 1) {
        printf("-1\n");
        return;
    }

    // Otherwise, we can attempt to find a solution
    int targetSum = sum / 2;

    // Sort the array in ascending order
    qsort(arr, arrLength, sizeof(int), compareInts);

    int startIndex = 0;
    int endIndex = arrLength - 1;
    int currentSum = 0;

    // Use two pointers to find the two sets that add up to the target sum
    while (startIndex < endIndex) {
        if (arr[startIndex] + arr[endIndex] < targetSum) {
            currentSum = arr[startIndex] + arr[endIndex];
            startIndex++;
        } else if (arr[startIndex] + arr[endIndex] > targetSum) {
            currentSum = arr[startIndex] + arr[endIndex];
            endIndex--;
        } else {
            // Print the first set
            for (int i = 0; i < arrLength; i++) {
                if (i != startIndex && i != endIndex) {
                    printf("%d,", arr[i]);
                }
            }
            // Print the second set
            printf(" %d,%d\n", arr[startIndex], arr[endIndex]);
            return;
        }
    }

    // If no solution is found
    printf("-1\n");
}

#include <stdio.h>

int func(int n){
    static int x = 0;
    if (n > 0){
        x++;
        return func(n - 1) + x;
    }
    return 0;
}

int main() {
    printf("%d", func(5));
    return 0;
}



int evaluateExpression(char *equation) {
    int result = 0;
    int operand1 = 0, operand2 = 0;
    char operator = '+';

    // Loop through every character in the equation
    for (int i = 0; equation[i] != '\0'; i++) {
        if (equation[i] >= '0' && equation[i] <= '9') {
            // Accumulate digits to form operands
            operand2 = operand2 * 10 + (equation[i] - '0');
        } else if (equation[i] == '+' || equation[i] == '-') {
            // Update result based on previous operand and operator
            if (operator == '+') {
                result += operand1;
            } else if (operator == '-') {
                result -= operand1;
            }
            // Update operator and reset operand for the next segment
            operator = equation[i];
            operand1 = operand2;
            operand2 = 0;
        }
    }

    // Handle the last segment of the expression
    if (operator == '+') {
        result += operand1;
    } else if (operator == '-') {
        result -= operand1;
    }

    return result;
}


/*
int main() {
    int arr[] = {16, 22, 35, 8, 20, 1, 21, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    ArrayChallenge(arr, size);
    return 0;
}
*/
