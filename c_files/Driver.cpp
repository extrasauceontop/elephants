#include <iostream>
#include "Elephant.h"

using namespace std;

int size_arr = 10;

int main() {
    
    // Get zoo name
    cout << "What is the name of your zoo?" << endl;
    
    string zoo_name;
    cin >> zoo_name;
    
    //Initialize arrays for names and food
    string names[size_arr] = { };
    float foods[size_arr] = { };

    // initialize index variable
    int index = 0;

    get_elephant_data(names, foods, index);
    
    // Initialize variables for food total and food average and the fattest elephant

    float food_total = 0;
    float food_average = 0;
    int fat_elephant_index = 0;

    get_stats(foods, &food_total, &food_average, &fat_elephant_index);

    

    cout << "The total amount of food consumed by all 10 elephants at " + zoo_name +  " is " + to_string(food_total) + " pounds in one month" << endl;

    cout << "The average amount of food consumed at " + zoo_name + " is " + to_string(food_average) + " pounds." << endl;

    cout << "The elephant who eats the most (" + to_string(foods[fat_elephant_index]) + " pounds) is " + names[fat_elephant_index] << endl;

    return 0;
}

 