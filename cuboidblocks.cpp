#include "Blocks.h"

//A function that returns a vector of cubiod objects 
vector<cuboidBlocks> cuboidblocks(ifstream& MyReadFile){
    vector<cuboidBlocks> cuboidblocks;
        int W,H,L;
    while (!MyReadFile.eof()){
        MyReadFile>>W>>H>>L;
        if(W==H && H==L){
            cuboidBlocks obj(W,H,L);
            cuboidblocks.push_back(obj);
        }
    }
    return cuboidblocks;
}