#include "Blocks.h"

// Function that returns a vector of sphericalBlocks
vector<sphericalBlocks> sphericalblocks(ifstream& MyReadFile){
    vector<sphericalBlocks> sphericalblocks;
    int W,H,L;
    while (!MyReadFile.eof()){
        MyReadFile>>W>>H>>L;
        if(W==H && H==L){
            sphericalBlocks obj(W,H,L);
            sphericalblocks.push_back(obj);
        }
    }
    return sphericalblocks;
}