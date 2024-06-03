#include <bits/stdc++.h>
#include <iostream>

// populate vector
void popVec(std::vector<int>& v){

    int j = 0;

    for(int i = 0; i < 10; i++){
        v.push_back(i);
    }

    // print the vector
    for(auto x: v){
        std::cout << x;
    }
}

int main(){

    std::vector<int> myVec;

    // popVec(myVec);

    // creating a map
    std::map<std::string, std::string> myMap;

    myMap["Name"] = "Hilario";
    myMap["Surname"] = "Nengare";

    std::cout << myMap.count("Hilario") << std::endl;
    
    return 0;
}



