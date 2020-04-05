#pragma once
using namespace std;

extern int size_arr;

// extern float food_total;
// extern float food_average;
// extern int fat_elephant_index;

void get_elephant_data(string names[], float foods[], int index);
void get_stats(float foods[], float* food_total, float* food_average, int* fat_elephant_index);