#include "power_of_troy.h"

namespace troy {
    void give_new_artifact(human& individual, std::string artifact_name){
        individual.possession = std::make_unique<artifact>(artifact_name);
    }

    void exchange_artifacts(std::unique_ptr<artifact>& poss1, std::unique_ptr<artifact>& poss2){
         std::swap(poss1, poss2);
    }

    void manifest_power(human& individual, std::string new_power){
        individual.own_power = std::make_shared<power>(new_power);
    }

    void use_power(human& caster, human& target){
        target.influenced_by = caster.own_power;
    }

    int power_intensity(human& individual){
        return individual.own_power.use_count();
    }
}  // namespace troy
