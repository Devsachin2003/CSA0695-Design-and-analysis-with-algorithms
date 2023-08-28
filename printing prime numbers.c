#include <stdio.h>
int main() {
    int start, end;
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int num = start; num <= end; num++) {
        if (num <= 1) {
            continue;
        }
        int flag = 1; 
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                flag = 0; 
                break;
            }
        }
        if (flag) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
