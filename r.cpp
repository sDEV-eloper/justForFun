#include <iostream>
#include <vector>
#include <string>

bool canFormWord(const std::string& word, const std::string& skeleton) {
    if (word.size() != skeleton.size()) {
        return false;
    }
    
    for (size_t i = 0; i < word.size(); ++i) {
        if (word[i] != '-' && word[i] != skeleton[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<std::string> findSkeletons(const std::string& word, const std::vector<std::string>& skeletons) {
    std::vector<std::string> result;
    
    for (const std::string& skeleton : skeletons) {
        if (canFormWord(word, skeleton)) {
            result.push_back(skeleton);
        }
    }
    
    return result;
}

int main() {
    std::string word = "hello";
    std::vector<std::string> skeletons = {"he-lo", "he--o", "-ell-", "hello"};
    
    std::vector<std::string> matchingSkeletons = findSkeletons(word, skeletons);
    
    for (const std::string& skeleton : matchingSkeletons) {
        std::cout << skeleton << std::endl;
    }
    
    return 0;
}
