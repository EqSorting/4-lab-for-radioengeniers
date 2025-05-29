#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int max_element(int *array, int size){
    int max = array[0];
    for (int i = 1; i < size; i++){
        if (array[i] > max) {
            max = array[i];
    }
    }
    cout << "Max element is: " << max << endl;
}

int sum_elements(int *array, int size){
    float implication = 0;
    int max_index = -1;
    int count = 0;

    for (int i = size; i > 0; i--){
        if (array[i] > 0){
            count++;
            max_index = i;
            break;
        }
    }


    if (max_index == -1){
        cout << "Not found positivity element or found one of them is" << endl;
        implication = 0;
    }
    else {
        for (int i = 0; i < max_index; i++){
            implication += array[i];
        }
    }

    cout << "Sum of element " << implication << endl;
}

int delete_elements_in_section(int *array, int size){
    int a;
    int b;
    std::cout << "Enter the right end of the segment";
    std::cin >> a;
    std::cout << "Enter the left end of the segment";
    std::cin >> b;

    for (int i = 0; i < size; i++){
        if (a < abs(array[i]) && abs(array[i]) < b){
            array[i] = 0;
        }
    }

    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    int count = 0;
    long double *prev_array = (long double *)malloc(size * sizeof(long double));
    prev_array = (long double *)calloc(size, size * sizeof(long double));
    for (int i = 0; i < size; i++){
        if (array[i] == 0){
            count++;
        }
    }
    for (int i = 0; i < size-1; i++){
        if (array[i] != 0){
            prev_array[size-count+1] = array[i];
        }
    }
    cout << endl;
    for (int i = 0; i < size; i++){
        cout << prev_array[i] << " ";
    }
}

int main(){
    int size;
    srand(time(0));
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    int array[size];
    for (int i = 0; i < size; i++){
        array[i] = rand() % 20-10; 
    }

    for (int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }
    cout << endl;
    max_element(array, size);
    sum_elements(array, size);
    delete_elements_in_section(array, size);

    return 0;
}
