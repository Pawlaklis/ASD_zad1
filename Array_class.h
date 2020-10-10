#ifndef DATE_H
#define DATE_H

class ARRAY_CLASS {
    int size;
    int *main_array;
public:
    ARRAY_CLASS();
    ARRAY_CLASS(int size, int array[]);
    ~ARRAY_CLASS();
    void insertion_sort();
    void generate_random(int, int, int);
    void print();
    bool check_correctness();
};

#endif