
#include "Blocks.h"
vector<rectBlocks> rectblocks(ifstream& MyReadFile){
    int W,H,L;
    vector<rectBlocks> rectBlocksVector;
    while (!MyReadFile.eof())
    {
        MyReadFile>>W>>H>>L;
        rectBlocks obj(W,H,L);
        rectBlocksVector.push_back(obj);
    }
    
    return rectBlocksVector;
}