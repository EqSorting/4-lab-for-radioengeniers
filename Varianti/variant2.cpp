#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

int sum_of_positivity(int *array, int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        if (array[i] > 0){
            sum += array[i];
        }    
    }

    cout << "sum of negatibity element is " << sum << endl;
}

int composition(int *array, int size){
        int max_mod = array[0];
        int min_mod = array[0];
        int max_index = 0;
        int min_index = 0;
    
        for (int i = 1; i < size; i++){
            if (abs(array[i]) > abs(max_mod)){
                max_mod = array[i];
                max_index = i;
            }
        }
    
        for (int i = 1; i < size; i++){
            if (abs(array[i]) < abs(min_mod)){
                min_mod = array[i];
                min_index = i;
            }
        }
    
        int start = std::min(min_index, max_index);
        int end = std::max(min_index, max_index);
    
        long long int product = 1;
        for (int i = start+1; i < end; i++){
            product *= array[i];
        }

        cout << "composition of element is " << product << endl;
}

void sorting_desc(int *array, int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (array[j] < array[j + 1]){
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
        array[i] = rand() % 100 - 50;  // generate random numbers between 0 and 100
    }

    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << " " << endl;
    sum_of_positivity(array, size);
    composition(array, size);
    sorting_desc(array, size);
    return 0;
}
