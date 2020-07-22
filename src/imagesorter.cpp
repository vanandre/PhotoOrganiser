#include <filesystem>
#include <iostream>
#include "imagesorter.hpp"

namespace fs = std::filesystem;

ImageSorter::ImageSorter(std::string dir_loc) {
    m_dir_path = dir_loc;
}

ImageSorter::~ImageSorter() {

}

void ImageSorter::sort_files() {
    int it = 1;
    for (auto const &entry : fs::directory_iterator(m_dir_path)) {
        std::string parent_path = m_dir_path += std::string("/");
        if (entry.path().extension() == ".png") {
            std::cout << "Found image" << std::endl;

            std::string new_name = "image_" + std::to_string(it) + ".png";

            // Read exif info and rename the file
            fs::path new_path = parent_path += entry.path().filename().replace_filename(new_name);
            if (!new_path.is_absolute()) {
                new_path.parent_path() = m_dir_path;
            }
            std::cout << new_path << std::endl;
            // std::filesystem::rename(entry.path(), new_path);
            it++;
        }
    }
}
