#include "Heap_class.h"
#include <iostream>

int HEAP_CLASS::left_child(int i) {
    return i*2 + 1;
}

int HEAP_CLASS::right_child(int i) {
    return 2*i + 2;
}

HEAP_CLASS::HEAP_CLASS(int A[], int n) {
    size = n;
    arr = A;
}
void HEAP_CLASS::heapify(int i) {
    int left_i = left_child(i);
    int right_i = right_child(i);
    int max = i;
    if(left_i < size && arr[left_i] > arr[max])
        max = left_i;
    if(right_i < size && arr[right_i] > arr[max])
        max = right_i;
    if(max != i) {
        std::swap(arr[i], arr[max]);
        heapify(max);
    }
}

void HEAP_CLASS::build_heap() {
    for(int i = size/2 - 1; i >= 0;i--)
        heapify(i);
}
