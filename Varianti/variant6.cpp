#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int min_element(int *array, int size){
    int min = array[0];
    for (int i = 1; i < size; i++){
        if (array[i] < min) {
            min = array[i];
        }
    }
    cout << "Min element is: " << min << endl;
}

int sum_elements(int *array, int size){
    int sum = 0;
    int min_index;
    int max_index;
    for (int i = 0; i < size; i++){
        if (array[i] > 0){
            min_index = i;
        }
    }

    for (int i = size-1; i > 0; i++){
        if (array[i] > 0){
            max_index = i;
        }
    }

    int start = min_index;
    int end = max_index;

    for (int i = start-1 ; i < end; i++){
        sum += array[i];
    }

    cout << "Sum of elements is: " << sum << endl;
}

int sorting(int *array, int size){
    int array2[size];
    int posIndex = 0;
    int negIndex = size - 1;
    
    for (int i = 0; i < size; i++){
        if (array[i] == 0){
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
    int array[size];
    for (int i = 0; i < size; i++){
        array[i] = rand() % 20-10; 
    }

    for (int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }
    cout << endl;
    min_element(array, size);
    sum_elements(array, size);
    sorting(array, size);
    return 0;
}
