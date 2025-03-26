#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>

using namespace std;

int composition_of_elements(int *array, int size){
    long long int sum = 1;
    for (int i = 0; i < size; i++){
        if (i % 2 == 0){
            sum *= array[i];
        }
    }
    cout << "composition your elements : " << sum << endl;
}

int summ(int *array, int size){
    int sum = 0;
    for (int i = 1; i < size - 1; i++){
        sum += array[i];
    }

    cout << "sum your elements : " << sum << endl;
}

int sorting(int *array, int size){
    int array2[size];
    int posIndex = 0;
    int negIndex = size - 1;

    for (int i = 0; i < size; i++){
        if (array[i] > 0){
            array2[posIndex++] = array[i];
        } 
        else if (array[i] < 0){
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
        array[i] = rand(); 
    }

    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << " " << endl;
    composition_of_elements(array, size);
    summ(array, size);
    sorting(array, size);
    return 0;
}
