#include <ctime>

class ARRAY_CLASS {
    int size;
    int *array;
public:
    ARRAY_CLASS();
    ARRAY_CLASS(int size, int array[]);
    ~ARRAY_CLASS();
    void insertion_sort();
    void generate_random(int);
    void print();
};

ARRAY_CLASS::ARRAY_CLASS() {
    size = 0;
    array = NULL;
}

ARRAY_CLASS::ARRAY_CLASS(int size, int *array) {
    this->size = size;
    array = new int[size];
    for (int i = 0; i < size; ++i) {
        this->array[i] = array[i];
    }

}
ARRAY_CLASS::~ARRAY_CLASS(){
    delete []array;
}

void ARRAY_CLASS::insertion_sort() {
    for(int j = 1;j < size;j++){
        int element = array[j];
        int i = j - 1;
        while (i >= 0 && array[i] > element){
            array[i + 1] = array[i];
            i--;
        }
        array[i + 1] = element;
    }
}

void ARRAY_CLASS::generate_random(int n) {
    size = n;
    array = new int[size];
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        array[i] = rand()%1000-500;
    }
}

void ARRAY_CLASS::print() {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

