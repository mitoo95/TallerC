class Array {

public:
    Array(int size);
    int getElement(int index);
    void setElement(int index, int value);
    int getSize() { return size; }


private:
    int *data;
    int size;

};