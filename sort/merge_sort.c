#include <stdio.h>

void merge(int *a, int left, int mid, int right) ;
void merge_sort(int *a, int left, int right);

void merge_sort(int *a, int left, int right) {
    if(left < right) {
        int mid = (right - left)/2;
        merge_sort(a,left,mid);
        merge_sort(a,mid+1,right);
        merge(a,left,mid,right);
    }
}

void merge(int *a, int left, int mid, int right) {
    int L[mid+1];
    int R[right - mid];
    int i = left,j = mid + 1,k = 0;
    while(i <= mid) {
        L[i++] = a[k++];
    }
    while(j < right) {
        R[j++] =  a[k++];
    }
    for( k = i ; k <= mid ; k++) {
        R[k] = a[i];
    }
    for( k = j ; k < right ; k++) {
        L[k] = a[j];
    }

}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
