#include <ctime>
#include <algorithm>
class ARRAY_CLASS {
    int size;
    int *main_array;
public:
    ARRAY_CLASS();
    ARRAY_CLASS(int size, int array[]);
    ~ARRAY_CLASS();
    void insertion_sort();
    void generate_random(int);
    void print();
    bool check_correctness();
};

ARRAY_CLASS::ARRAY_CLASS() {
    size = 0;
    main_array = NULL;
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

void ARRAY_CLASS::generate_random(int n) {
    size = n;
    main_array = new int[size];
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        main_array[i] = rand() % 1000 - 500;
    }
}

void ARRAY_CLASS::print() {
    for (int i = 0; i < size; ++i) {
        std::cout << main_array[i] << " ";
    }
    std::cout << std::endl;
}

bool ARRAY_CLASS::check_correctness() {
    int test_array[size];
    std::copy(main_array, main_array + size, test_array);
    std::sort(test_array, test_array + size);
    insertion_sort();
    for (int i = 0; i < size; ++i) {
        if(test_array[i] != main_array[i])
            return false;
    }
    return true;
}
