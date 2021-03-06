/*
 *
 * Main file
 * main.cpp
 * Emiliano Cabrera A01025453, Do Hyun Nam A01025276
 * 
 */

#include <iostream>
#include <vector>
#include "hash.cpp"

int main(int argc, const char * argv[]) {
    Hash<int,int> * hash_map = new Hash<int,int>(5);

    std::cout << "[---START PUT---]" << std::endl;
    
    hash_map->put(1,1);
    hash_map->put(5,5);
    hash_map->put(11,11);
    hash_map->put(15,15);
    hash_map->put(2,2);
    hash_map->put(8,8);

    std::cout << "[---END PUT---]" << std::endl;
    
    std::cout << "[---START GET---]" << std::endl;
        
    std::cout << "5: " << hash_map->get(5) << std::endl;
    std::cout << "15: " << hash_map->get(15) << std::endl;
    std::cout << "8: " << hash_map->get(8) << std::endl;

    std::cout << "[---END GET---]" << std::endl;

    std::cout << "[---START DELETE---]" << std::endl;

    hash_map->deleteVal(15);
    hash_map->deleteVal(11);

    std::cout << "[---END DELETE---]" << std::endl;
    
    std::cout << "[---START PRINT---]" << std::endl;

    std::cout << hash_map->get(11) << std::endl;

    std::cout << "[---END PRINT---]" << std::endl;
}