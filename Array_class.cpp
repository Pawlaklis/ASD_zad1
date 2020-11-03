#include "Array_class.h"
#include "Heap_class.h"
#include <ctime>
#include <algorithm>
#include <iostream>

ARRAY_CLASS::ARRAY_CLASS() {
    size = 0;
    main_array = nullptr;
}

ARRAY_CLASS::ARRAY_CLASS(int size, int *array) {
    this->size = size;
    array = new int[size];
    for (int i = 0; i < size; ++i) {
        this->main_array[i] = array[i];
    }

}
ARRAY_CLASS::~ARRAY_CLASS(){
    delete []main_array;
}

void ARRAY_CLASS::insertion_sort() {
    for(int j = 1;j < size;j++){
        int element = main_array[j];
        int i = j - 1;
        while (i >= 0 && main_array[i] > element){
            main_array[i + 1] = main_array[i];
            i--;
        }
        main_array[i + 1] = element;
    }
}



void ARRAY_CLASS::generate_random(int n, int a, int b) {
    size = n;
    main_array = new int[size];
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        main_array[i] = rand() % (b - a) + a;
    }
}

void ARRAY_CLASS::print() {
    for (int i = 0; i < size; ++i) {
        std::cout << main_array[i] << " ";
    }
    std::cout << std::endl;
}

bool ARRAY_CLASS::check_correctness() {
    if(size == 0)
        return true;
    int test_array[size];
    std::copy(main_array, main_array + size, test_array);
    std::sort(test_array, test_array + size);
    heap_sort();
    for (int i = 0; i < size; ++i) {
        if(test_array[i] != main_array[i])
            return false;
    }
    return true;
}

void ARRAY_CLASS::heap_sort() {
    HEAP_CLASS heap(main_array, size);
    heap.build_heap();
    for(int i = size - 1; i > 0;i--){
        std::swap(heap.arr[0], heap.arr[i]);
        heap.size--;
        heap.heapify(0);
    }
}



