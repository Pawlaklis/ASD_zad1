class ARRAY_CLASS {
    int size;
    int *array;
    ARRAY_CLASS(int size, int array[]);
    ~ARRAY_CLASS();
    void insertion_sort();
};

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

