#include "Blocks.h"

void majorFunction2(ifstream& MyReadFile){
    cout<<"This cylindrical Objects"<<endl;
    vector<cylindricalBlocks> cylindricals;
    cylindricals=cylindricalblocks(MyReadFile);

    sort(cylindricals.begin(),cylindricals.end());
    for(int i=0;i<cylindricals.size();i++){
        cout<<"Surface Area: "<<cylindricals[i].surfaceArea(cylindricals[i].getWidth())<<" "
        <<"Diameter: "<<cylindricals[i].getWidth()<<cylindricals[i].getLength()<<endl;
    }
}