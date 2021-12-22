#include <iostream>
using namespace std;

void Pengurutan(int* arr, int size);
void Penukaran(int* x, int* y);

int main(int argc, char const *argv[]){
    int arr[10] = {100, 69, 700, 250, 110, 680, 480, 340, 900, 830};
    int arrSize = sizeof(arr)/sizeof(*arr);

    Pengurutan(arr, arrSize);

    for(int i = 0;i < arrSize;i++){
        cout << arr[i] << " ";
    }
}

void Pengurutan(int* arr, int size){
    bool Tukar;
    int indexOfLastUnsortedElement = size;

    do{
        Tukar = false;
        for(int i = 0;i < indexOfLastUnsortedElement-1;i++){
            if(*(arr + i) > *(arr + i + 1)){
                swap(*(arr + i), *(arr + i + 1));
                Tukar = true;
            }
        }
        indexOfLastUnsortedElement--;
    }while (Tukar);
}

void Penukaran(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
