#include <iostream>


template <typename T>
class MyVector {
    private:
        T* ptr;
        size_t size;
    
    public:
        MyVector(T vector[], int s);
        void print();
};

template <typename T>
MyVector<T>::MyVector(T vector[], int s)
{
    ptr = new T[s];
    size = s;

    for (int i = 0; i < size; i++) {
        ptr[i] = vector[i];
    }
}

template <typename T>
void MyVector<T>::print()
{
    for (int i = 0; i < size; i++) {
        std::cout << " " << *(ptr + i);
    }

    std::cout << std::endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    MyVector<int> a(arr, 5);
    a.print();

    return 0;
}
