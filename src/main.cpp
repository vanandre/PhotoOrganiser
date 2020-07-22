#include <thread>
#include <iostream>
#include "imagesorter.hpp"


int main() {
    std::string folder_path = "/home/vanandre/Pictures";
    // std::cout << "Folder Path: " << std::endl;
    // std::cin >> folder_path;
    ImageSorter sorter(folder_path);
    sorter.sort_files();
    return 1;
}