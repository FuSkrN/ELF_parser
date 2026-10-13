#pragma once
#include <vector>

class BinaryFile
{
private:
    std::FILE* file_;
public:
    explicit BinaryFile(const char* filename, const char* mode){
        file_ = std::fopen(filename, mode);
    }
    ~BinaryFile(){
        
    }
}
