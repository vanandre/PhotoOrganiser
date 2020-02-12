#pragma once
#include <string>

class ImageSorter {

public:
    explicit ImageSorter(std::string dir);
    ~ImageSorter();

    void sort_files();
    
private:
    std::string m_dir_path;

};
