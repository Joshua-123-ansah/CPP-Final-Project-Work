#include "Blocks.h"

// Major Function
void majorFunction(ifstream& MyReadFile){
    // Sorting the sphericalblocks
    vector<sphericalBlocks> spheres;
    spheres=sphericalblocks(MyReadFile);

    sort(spheres.begin(),spheres.end());
    //Printing out the information of the sorted sphericalblocks
    for(int i=0;i<spheres.size();i++){
        cout<<"Diameter: "<<spheres[i].getWidth()<<" "<<
        "Volume "<<spheres[i].Volume(spheres[i].getWidth())<<" "<<
        "Surface Area: "<<spheres[i].surfaceArea(spheres[i].getWidth())<<endl;
        cout<<endl;
    }
}