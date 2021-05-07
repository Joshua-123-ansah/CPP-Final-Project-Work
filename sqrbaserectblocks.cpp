#include "Blocks.h"

//Function that returns a vector of sqrBaseRectBlock objects 
vector<sqrBaseRectBlock> sqrbaserectblocks(ifstream& MyReadFile){
    vector<sqrBaseRectBlock> sqrbaserectBlocks;
    int W,H,L;
    while (!MyReadFile.eof()){
        MyReadFile>>W>>H>>L;
        if(W==H){
            sqrBaseRectBlock obj(W,H,L);
            sqrbaserectBlocks.push_back(obj);
        }
    }

    return sqrbaserectBlocks;
}