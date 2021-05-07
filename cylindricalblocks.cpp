#include "Blocks.h"

//Function that returns a vector of cylindricalBlocks
vector<cylindricalBlocks> cylindricalblocks(ifstream& MyReadFile){
    vector<cylindricalBlocks> cylindricalblocks;
     int W,H,L;

    while (!MyReadFile.eof()){
        MyReadFile>>W>>H>>L;
        if(W==H){
            cylindricalBlocks obj(W,H,L);
            cylindricalblocks.push_back(obj);
        }
    }
    return cylindricalblocks;
}