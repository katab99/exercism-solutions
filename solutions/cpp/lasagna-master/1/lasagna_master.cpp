#include "lasagna_master.h"
#include <iostream>
namespace lasagna_master {

    int preparationTime(const vector<string>& layers, int avg_time){
        return layers.size() * avg_time;
    }

    amount quantities(const vector<string>& layers){
        amount ingreds{0, 0.0};
        
        for(const auto& layer : layers){
            if(layer == "noodles"){
                ingreds.noodles += 50;
            }else if(layer == "sauce"){
                ingreds.sauce += 0.2;
            }
        }

        return ingreds;
    }

    void addSecretIngredient(vector<string>& ownRecipe, const vector<string>& friendRecipe){
        ownRecipe[ownRecipe.size() - 1] = friendRecipe[friendRecipe.size() - 1];
    }

    vector<double>scaleRecipe(const vector<double>& quantities, const int& portions){
        vector<double> newQuantities{};

        for(const auto& quantity : quantities){
            newQuantities.push_back(quantity * portions / 2);
        }

        return newQuantities;
    }

    void addSecretIngredient(vector<string>& ownRecipe, const string& secretIngredient){
         ownRecipe[ownRecipe.size() - 1] = secretIngredient;
    }
    
}  // namespace lasagna_master
