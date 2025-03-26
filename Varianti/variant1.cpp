#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>

using namespace std;

int sum_of_negativity(int *array, int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        if (array[i] < 0){
            sum += array[i];
        }    
    }

    cout << "sum of negatibity element is " << sum << endl;
}

int composition(int *array, int size){
    int composition = 1;
    for (int i = 1; i < size -1; i++){
        composition *= array[i];
    }
    cout << "composition of element is " << composition << endl;
}

void sorting_desc(int *array, int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
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
    int array[size];
    for (int i = 0; i < size; i++){
        array[i] = rand(); 
    }

    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << " " << endl;
    sum_of_negativity(array, size);
    composition(array, size);
    sorting_desc(array, size);
    return 0;
}
