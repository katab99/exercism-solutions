#pragma once
#include <vector>
#include <string>

using namespace std;

namespace lasagna_master {

    struct amount {
        int noodles;
        double sauce;
    };

    int preparationTime(const vector<string>& layers, int avg_time=2);
    amount quantities(const vector<string>& layers);
    void addSecretIngredient(vector<string>& ownRecipe, const vector<string>& friendRecipe);
    vector<double>scaleRecipe(const vector<double>& quantities, const int& portions);
    void addSecretIngredient(vector<string>& ownRecipe, const string& secretIngredient);
    
    
}  // namespace lasagna_master
