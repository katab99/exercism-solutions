#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> scores_int;
    
    for(int i = 0; i < student_scores.size(); i++){
        scores_int.push_back(static_cast<int>(student_scores[i]));
    }
    
    return scores_int;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int count = 0;
    for(int i = 0; i < student_scores.size(); i++){
        if(student_scores[i] <= 40) count++;
    }
    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    std::array<int, 4> lower_thresholds;
    int range = (highest_score - 40) / 4;
    int lower_score = 41;
    
    for(int i = 0; i < lower_thresholds.size(); i++){
        lower_thresholds[i] = lower_score;
        lower_score += range;
    }
    return lower_thresholds;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> student_rank_vector;
    
    for(int i = 0; i < student_names.size(); i++){
        student_rank_vector.push_back(std::to_string(i + 1)+ ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }
    
    return student_rank_vector;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    for(int i = 0; i < student_scores.size(); i++){
        if(student_scores[i] == 100) return student_names[i];
    }
    return "";
}
