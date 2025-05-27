#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

void add(long double *array, int size){
    for (int i = 0; i < size; i++){
        array[i] = rand() % 20-10; 
    }
}

void print(long double *array, int size){
    cout << "Your array:" << endl;
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
}
void min_element(long double *array, int size){
    cout << endl;
    int min = array[0];
    for (int i = 1; i < size; i++){
        if (array[i] < min) {
            min = array[i];
        }
    }
    cout << "Min element is: " << min << endl;
}

void sum_elements(long double *array, int size){
    float implication = 0;
    int min_index = -1;
    int max_index = -1;
    int count = 0;
    for (int i = 0; i < size; i++){
        if (array[i] > 0){
            count++;
            min_index = i;
            break;
        }
    }

    for (int i = size; i > 0; i--){
        if (array[i] > 0){
            count++;
            max_index = i;
            break;
        }
    }


    if (min_index == -1 && max_index == -1){
        cout << "Not found positivity element or found one of them is" << endl;
        implication = 0;
    }
    else if (min_index != -1 && max_index == -1) {
        cout << "Found only one positivity element" << endl;
        implication = array[min_index];
    }
    else {
        for (int i = min_index+1; i < max_index; i++){
            implication += array[i];
        }
    }

    cout << "Sum of element " << implication << endl;
}

void sorting(long double *array, int size){
    long double *array2 = (long double *)malloc(size * sizeof(long double));
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
    free(array2);
}

int main(){
    int size;
    srand(time(0));
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size < 0){
        cout << "Size should be positive" << endl;
    }
    long double array[size];
    add(array, size);
    print(array, size);
    min_element(array, size);
    sum_elements(array, size);
    sorting(array, size);
    return 0;
}
