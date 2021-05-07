#include "Blocks.h"

int main(int argc, char const *argv[])
{
    /* code */
    int input;
    ifstream file("dataBlocks.dat");
    cout<<"Enter one if you want to get the information of a sphericalblocks in ascending order. Enter 2 to get information on the cylindricalblocks"<<endl;
    cin>>input;
    if(input==1){
        majorFunction(file);
    }else if(input==2){
        majorFunction2(file);
    }else{
        cout<<"You have entered a wrong input"<<endl;
    }
    return 0;
}