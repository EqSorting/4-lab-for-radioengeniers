#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int max_index_element(int *array, int size){
    int max = array[0];
    int max_index = -1;
    for (int i = 0; i < size; i++){
        if (array[i] > max){
            max = array[i];
            max_index = i;
        }
    }   
     cout << max_index << endl;
    
}

int implication(int *array, int size){
    int implication = 0;
    int max_index = -1;
    int min_index = -1;
    for (int i = 0; i < size; i++){
        if (array[i] == 0){
            min_index = i;
        }
        else{
            min_index = -1;
        }
    }

    for (int i = min_index; i < size; i++){
        if (array[i] == 0){
            max_index = i;
        }
        else{
            max_index = -1;
        }
    }

    if (min_index == -1 && max_index == -1){
        cout << "Zero's not found" << endl;
        implication = 0;
    }

    int start = min_index;
    int end = max_index;

    for (int i = start; i < end; i++){
        implication += array[i];
    }

    cout << "Sum of element " << implication << endl;
}

void replace(int *array, int size){
    int *array2 = (int *)malloc(size*sizeof(int));
    int posIndex = 0;
    int negIndex = size - 1;

    for (int i = 0; i < size; i++){
        if (i % 2 != 0){
            array2[posIndex++] = array[i];
        } 
        else{
            array2[negIndex--] = array[i];
        }
    }

    for (int i = 0; i < size; i++){
        cout << array2[i] << " ";
    }
    free(array2);
}

int main(){
    int size;
    srand(time(0));
    cout << "Enter the size of the array: ";
    cin >> size;
    int *array = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++){
        array[i] = rand() % 20-10; 
    }

    for (int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }
    cout << endl;
    max_index_element(array, size);
    implication(array, size);
    replace(array, size);
    return 0;
}
