#include <iostream>
#include "Elephant.h"

using namespace std;

void get_elephant_data(string names[], float foods[], int index) {

    // declare variables
    string ele_name;
    float ele_food;

    while(index<=size_arr - 1){
        // Get info from user
        cout << "Elephant " + to_string(index + 1) + ":" << endl;
        cout << "NAME - ", cin >> ele_name;
        cout << "FOOD AMOUNT - ", cin >> ele_food;

        // Append to arrays
        names[index] = ele_name;
        foods[index] = ele_food;
        
        // Continue the loop
        index++;
   }
}

void get_stats(float foods[], float* food_total, float* food_average, int* fat_elephant_index) {

    int count = 0;
    float most_food = 0;
    
    while(count<=size_arr-1) {
        *food_total = *food_total + foods[count];

        if(foods[count] > most_food) {
            most_food = foods[count];
            *fat_elephant_index = count;
        }

        count++;
    }
    *food_average = *food_total/size_arr;
}