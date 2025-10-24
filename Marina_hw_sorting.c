#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20  

int main() {
    
    srand(time(NULL));
    
    double arr[SIZE], sorted[SIZE];
    
    printf("Исходный массив:\n");
    for (int i = 0; i < SIZE; i++) {
        arr[i] = (double)rand() / RAND_MAX; 
        sorted[i] = arr[i]; 
        printf("%.4f\n", arr[i]);
    }
    
    for (int i = 0; i < SIZE - 1; i++) {
        
        int swapped = 0;
        
       
        for (int j = 0; j < SIZE - 1 - i; j++) {
          
            if (sorted[j] > sorted[j + 1]) {
                double temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
                swapped = 1; 
            }
        }
        
        if (!swapped) break;
    }
    
    printf("\nИсходный массив    Отсортированный массив\n");
    printf("--------------------------------------------\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%-12.4f      %-12.4f\n", arr[i], sorted[i]);
    }
    
    return 0;
}
