#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int max_index_element(float *array, int size){
    int max = array[0];
    int max_index = -1;
    for (int i = 0; i < size; i++){
        if (abs(array[i]) > max){
            max = array[i];
            max_index = i;
        }
    }   
     cout << "Maxsimum index of element " << max_index << endl;
    
}

int implication(float *array, int size){
    float implication = 0;
    int min_index = -1;
    int max_index = -1;
    int count = 0;
    for (int i = 0; i < size; i++){
        if (array[i] > 0){
            count++;
            if (count == 1) {
                min_index = i;
            } else if (count == 2) {
                max_index = i;
                break;
            }
        }
    }

    if (min_index == -1 && max_index == -1){
        cout << "Not found negativity element or found one of them is" << endl;
        implication = 0;
    } else if (min_index != -1 && max_index == -1) {
        cout << "Found only one negativity element" << endl;
        implication = array[min_index];
    } else {
        for (int i = min_index+1; i < max_index; i++){
            implication += array[i];
        }
    }

    cout << "Sum of element " << implication << endl;
}

void replace(float *array, int size){
    float array2[size];
    int posIndex = 0;
    int negIndex = size - 1;

    for (int i = 0; i < size; i++){
        if (array[i] != 0){
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
    max_index_element(array, size);
    implication(array, size);
    replace(array, size);
    return 0;
}
