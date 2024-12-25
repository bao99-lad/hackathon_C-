#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, choice;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    void inMang(int arr[], int n){
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
int isPrime(int n) {
    
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int countPrimes(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) count++;
    }
    return count;
}
int findSecondMin(int arr[], int n) {
    if (n < 2) {
        printf("Mang phai co it nhat 2 phan tu\n");
        return -1;
    }
    int min1 = arr[0], min2 = arr[1];
    if (min1 > min2) swap(&min1, &min2);
    for (int i = 2; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }
    return min2;
}
void themPhanTu(int arr[], int *n, int value, int pos) {
}
void xoaPhanTu(int arr[], int *n, int pos) {
}
void insertionSortGiamDan(int arr[], int n) {
}
void daoNguocMang(int arr[], int n) {
}
}
