#include <thread>
#include "imagesorter.hpp"

int main( ) {
    ImageSorter sorter("/home/vanandre/Pictures/");
    sorter.sort_files();
    return 1;
}