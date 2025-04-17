#pragma once

#include <algorithm>
#include <map>
#include <string>
#include <vector>

float consultMax(const std::string& search_term, const std::map<std::string, std::vector<float>>& data) {
    //implement your function here
    if(data.find(search_term) == data.end()){
        return -1;
    }
    float max = (data.at(search_term)).at(0);
    for(size_t i = 0; i < data.at(search_term).size(); ++i){
        if(max < data.at(search_term).at(i)){
            max = data.at(search_term).at(i);
        }
    }
    return max;
}

std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) {
    //implement your function here
    std::map<std::string, float> newMap;
    for(auto iter = in_map.begin(); iter != in_map.end(); ++iter){
        float max = iter->second.at(0);
        for(size_t i = 0; i < (iter->second).size(); ++i){
            if(max < (iter->second).at(i)){
                max = (iter->second).at(i);
            }
        }
        newMap[iter->first] = max;
    }
    return newMap;
}