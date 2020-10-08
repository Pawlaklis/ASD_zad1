class ARRAY_CLASS {
    int size;
    int *array;
    ARRAY_CLASS(int size, int array[]);
    ~ARRAY_CLASS();

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


