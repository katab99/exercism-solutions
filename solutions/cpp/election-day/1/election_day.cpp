#include <string>
#include <vector>

namespace election {

    struct ElectionResult {
        // Name of the candidate
        std::string name{};
        // Number of votes the candidate has
        int votes{};
    };

// vote_count takes a reference to an `ElectionResult` as an argument and will
// return the number of votes in the `ElectionResult.
    int vote_count(ElectionResult& er){
        return er.votes;
    }

// increment_vote_count takes a reference to an `ElectionResult` as an argument
// and a number of votes (int), and will increment the `ElectionResult` by that
// number of votes.
    void increment_vote_count(ElectionResult& er, int num_votes){
        er.votes += num_votes;
    }
// TODO: Task 3
// determine_result receives the reference to a final_count and returns a
// reference to the `ElectionResult` of the new president. It also changes the
// name of the winner by prefixing it with "President". The final count is given
// in the form of a `reference` to `std::vector<ElectionResult>`, a vector with
// `ElectionResults` of all the participating candidates.
    ElectionResult& determine_result(std::vector<ElectionResult>& final_count){
        int most_votes{0};
        int index{0};
        
        for(int i = 0; i < final_count.size(); i++){
            if(most_votes < final_count[i].votes){
                most_votes = final_count[i].votes;
                index = i;
            }
        }
        final_count[index].name = "President " + final_count[index].name;
        return final_count[index];
    }

}  // namespace election