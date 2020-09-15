#include <stdio.h>
/*
    Tìm s? l?n th? 2 ? trong m?ng
*/
#define MAX_SIZE 100 // s?c ch?a t?i da
 
void NhapMang(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("Nhap arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
 
void XuatMang(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("\narr[%d] = %d", i, arr[i]);
    }
}
 
/*
    C1. S?p x?p m?ng gi?m d?n => S? l?n th? 2 là arr[1]
    C2. Tìm d?ng th?i s? l?n nh?t và s? l?n th? 2
*/
/*-------------------------*/
/*
    C1. 
*/
void swap(int &a, int &b){
    int tg = a;
    a = b;
    b = tg;
}
 
void SapXep(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                swap(a[i], a[j]);
            }
        }        
    }
}
 
int FindBySort(int a[], int n){
    SapXep(a, n);
    return a[1];
}
int main(){
    int arr[MAX_SIZE];
 
    int n; // s? lu?ng ph?n t? c?a m?ng
    // Ki?m tra s? lu?ng ph?n t? là s? duong + nh? hon MAX_SIZE
    do{
        printf("Nhap n = ");
        scanf("%d", &n);
    }while(n <= 1 || n > MAX_SIZE);
 
    // Nh?p m?ng
    NhapMang(arr, n);
 
    // Xu?t m?ng
    XuatMang(arr, n);
 
    printf("\nSo lon thu 2 la %d", FindBySort(arr, n));
}
