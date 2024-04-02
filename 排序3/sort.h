#pragma once
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<time.h>
#define M 10000
#define N 50000
#define K 200000

void swap(int* a, int* b);
void InsertSort(int par_array[], int array_size);
void MergeSort(int arr[], int n);
void msort(int arr[], int tempArr[], int left, int right);
void merge(int arr[], int tempArr[], int left, int mid, int right);
void QuickSort(int arr[], int left, int right);
void CountSort(int* arr, int length);
void RadixSort(int* arr, int length);
void test1(int arr[], int length);
void test2();
void test3();