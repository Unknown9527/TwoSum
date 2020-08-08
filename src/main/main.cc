#include <iostream>
#include "src/lib/solution.h"

// print the vector
void PrintVector(vector<int> & input){
    
    for(int i =0; i < input.size(); i++){
        cout << input[i] <<" ";
    }
    cout << endl;
}

// Vector Rotation
int main()
{
    Solution solution;

    


    // vector<int> input0 = {3,7,11,15};    
    // int Sum = 10;

    // vector<int> input0 = {3,7,11,15};    
    // int Sum = 180;

    // vector<int> input0 = {-2,-1, 6, 1, 4, 3, 2, 8, 9, 3};    
    // int Sum = 5;
    
    vector<int> input0 = {3,7,11,15};    
    int Sum = 10;

    vector<vector<int>> result = solution.VectorEleSum(input0, Sum);
    for(auto v: result){
        PrintVector(v);
    }


    return EXIT_SUCCESS;
}
