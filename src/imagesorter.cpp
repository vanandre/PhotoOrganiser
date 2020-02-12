#include <filesystem>
#include <iostream>
#include "imagesorter.hpp"


ImageSorter::ImageSorter(std::string dir_loc) {
    m_dir_path = dir_loc;
}

ImageSorter::~ImageSorter() {

}

void ImageSorter::sort_files() {
    for (auto const &entry : std::filesystem::directory_iterator(m_dir_path)) {
        if (entry.path().extension() == ".png") {
            std::cout << "Found image" << std::endl;
        }
    }
}