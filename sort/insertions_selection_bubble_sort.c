#include <stdio.h>
#define MAX_ELEMENT 100

void  print(int arrray[], int n) {
    for(int i = 0 ; i < n ; i ++) {
        printf("%d ",arrray[i]);
    }
    printf("\n");
}

void insertion_sort(int arrray[], int n) {
    int key;
    int j;
    for(int i = 1; i < n ; i++) {
        key = arrray[i];
        j = i - 1;
        while(j > -1 && arrray[j] >= key ) {
            arrray[j+1] = arrray[j];
            j--;
        }
        arrray[j+1] = key;
    }
    print(arrray,n);
}

void swap(int *x, int *y) {
    *x = *x^*y;
    *y = *x^*y;
    *x = *x^*y;
}

void selection_sort(int arrray[], int n) {
    for(int i = 0 ; i < n - 1 ; i++) {
        for(int j = i + 1 ; j < n ; j++) {
            if(arrray[j] < arrray[i] ) {
                swap(&arrray[i],&arrray[j]);
            }
        }
    }
    print(arrray,n);
}

void bubble_sort(int arrray[], int n) {
    for(int i = 0 ; i < n - 1 ; i ++) {
        for(int j = 0 ; j < n - i -1 ;j++) {
            if(arrray[j] > arrray[j+1]) {
                swap(&arrray[j],&arrray[j+1]);
            }
        }
    }
    print(arrray,10);
}
int main(int argc, char const *argv[])
{
    // /* code */
    // printf("Have %d argument\n",argc);

    // for(int i = 0 ; i < argc ; i ++) {
    //     printf("%s\t",argv[i]);
    // }
    // printf("\n");
    int arrray[10] = {4, 6, 3, 8, 5, 1, 9, 7, 0, 2};
    insertion_sort(arrray,10);
    selection_sort(arrray,10);
    bubble_sort(arrray,10);
    return 0;
}
