#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

int sum(float *array, int size){
    float sum = 0;
    for (int i = 0; i < size; i++){
        if (i % 2 != 0){
            sum += array[i];
        }
    }

    cout << "the sum of the odd elements of the array " << sum << endl;
}

int odd_sum(float *array, int size){
    float sum = 0;
    int min_index = 0;
    int max_index = 0;
    for (int i = 0; i < size; i++){
        if (array[i] < 0){
            min_index = i;
        }
    }

    for (int i = min_index; i < size; i++){
        if (array[i] < 0){
            max_index = i;
        }
    }

    int start = min_index;
    int end = max_index;
    for (int i = start-1; i < end; i++){
        sum += array[i];
    }
    cout << "sum of negativ elements " << sum << endl;
}

float delete_elements(float *array, int size){
    for (int i = 0; i < size; i++){
        if (abs(array[i]) < 1){
            array[i] = 0;
        }
    }

    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
}

int main(){
int size;
srand(time(0));
    cout << "Enter the size of the array: ";
    cin >> size;
    float array[size];
    for (int i = 0; i < size; i++){
        array[i] = (float)rand() / RAND_MAX * 5-2;

    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << " " << endl;
    sum(array, size);
    odd_sum(array, size);
    delete_elements(array, size);
    return 0;
}
