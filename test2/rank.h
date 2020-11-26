fndef paixu_h
#define paixu_h
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

//从前往后的冒泡排序 
void Bubble1(int a[], int n) ;
//从后往前的冒泡排序 
void Bubble2(int a[], int n) ;
//设标志的冒泡排序 
void Bubble3(int a[], int n) ;
//插入排序 
void InsertSort(int a[], int n);
//选择排序 
void SelectSort(int a[], int n);

int Partition(int a[], int low, int high);

int Partition2(int a[], int low, int high);

void QSort(int a[], int low, int high);

void QuickSort(int a[], int n);

#endif

