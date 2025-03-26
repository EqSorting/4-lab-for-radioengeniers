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
    int sum1 = 0;
    int max_index;
    for (int i = size-1; i > 0; i++){
        if (array[i] > 0){
            max_index = i;
        }
    }
    
    for (int i = 0; i < max_index; i++){
        sum1 += array[i];
    }

    cout << "Sum of elements" << sum1 << endl;
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
    
    for (int i  = 0; i < size; i++){
        cout << array[i] << " ";
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
