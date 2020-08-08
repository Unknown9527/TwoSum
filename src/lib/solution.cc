#include "solution.h"
#include <map>
#include <iostream>
#include <vector>

using namespace std;

struct CompareByValue{
    bool operator()(const pair<int,int>& p1, const pair<int,int>& p2){
        return p1.second < p2.second;
    }
};

vector<vector<int>> Solution::VectorEleSum (vector<int> & input0, int Sum){

    vector<vector<int>> finalresult;
    int j = input0.size() - 1;
    int i = 0;

    // store the index into a vector of pairs, sorted by value.
    vector<pair<int,int>> m1;
    for(int i =0; i< input0.size(); i++){
        m1.push_back(make_pair(i,input0[i]));
    }

    sort(m1.begin(),m1.end(), CompareByValue());


    // for (auto e: m1){
    //     cout<< e.first <<": " << e.second << endl;

    // }

    while (i < j)
    {
        if (m1[i].second + m1[j].second == Sum)
        {
            vector<int> result = {m1[i].first, m1[j].first};
            finalresult.push_back(result);
            j--;
            
        }else if (m1[i].second + m1[j].second < Sum)
        {
            i++;
        }else // input0[i] + input0[j] > Sum
        {
            j--;
        }        
    }
    return finalresult;
}



