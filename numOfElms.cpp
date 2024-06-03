#include <iostream>
#include <unordered_set>
#include <set>
#include <vector>

// Algorithm 1: using ordered set: O(m log n)
int countCommonElms(std::vector<int>& A, std::vector<int>& B){

    // copying the elements to setA
    std::set<int> setA(A.begin(), A.end());

    int count = 0;

    for(auto element: B){
        /* 
            If the returned iterator is not .end() we increase count.
            If .end() iterator is returned it means that the element isn't found so we return count.
        */ 
        if(setA.find(element) != setA.end()){
            count ++;
        }
    }

    return count;
}


// Algorithm 2: Using unordered set: O(n + m)
int countIntersection(std::vector<int>& A, std::vector<int>& B){
    std::unordered_set<int> setA(A.begin(), A.end());
    std::unordered_set<int> setB(B.begin(), B.end());
    int count = 0;

    for(auto element: B){
        if(setA.find(element) != setA.end()){
            count ++;
        }
    }

    return count;
}

int main(){

    std::vector<int> A = {5, 2, 8, 9, 4};
    std::vector<int> B = {3, 2, 9, 5};

    std::cout << "Number of common elements is " << countCommonElms(A, B) << std::endl; // 5

    return 0;
}