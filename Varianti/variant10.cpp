#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int min_index_element(float *array, int size){
    int min = array[0];
    int min_index = -1;
    for (int i = 0; i < size; i++){
        if (abs(array[i]) < min){
            min = array[i];
            min_index = i;
        }
    }   
     cout << "Minimum index of element " << min_index << endl;
    
}

void implication(float *array, int size){
    float implication = 0;
    int min_index = -1;
    int count = 0;
    for (int i = 0; i < size; i++){
        if (array[i] = 0){
            min_index = i;
            count = 1;
        }
        else{
            count = 0;
        }
    }

    if (count == 0){
        cout << "Zero not found" << endl;
        implication = 0;
        return;
    }
    
    for (int i = min_index; i < size; i++){
        implication += array[i];
    }

    cout << "Sum of elements " << implication << endl;
}

float replace(float *array, int size){
    float array2[size];
    int posIndex = 0;
    int negIndex = size - 1;

    for (int i = 0; i < size; i++){
        if (i % 2 == 0){
            array2[posIndex++] = array[i];
        } 
        else{
            array2[negIndex--] = array[i];
        }
    }

    for (int i = 0; i < size; i++){
        cout << array2[i] << " ";
    }

}

int main(){
    int size;
    srand(time(0));
    cout << "Enter the size of the array: ";
    cin >> size;
    float array[size];
    
    for (int i = 0; i < size; i++){
        array[i] = (float)rand() / RAND_MAX * 20-10; 
    }

    for (int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }
    cout << endl;
    min_index_element(array, size);
    implication(array, size);
    replace(array, size);
    return 0;
}
