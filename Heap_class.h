
#ifndef ASD_ZAD1_HEAP_CLASS_H
#define ASD_ZAD1_HEAP_CLASS_H

class HEAP_CLASS{
public:
    int size;
    int *arr;
    HEAP_CLASS(int [],int);
    void heapify(int);
    void build_heap();
    int left_child(int);
    int right_child(int);
};

#endif //ASD_ZAD1_HEAP_CLASS_H
