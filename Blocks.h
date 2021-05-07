#include <vector>
#include <iostream>
#include <fstream>
#include<algorithm>
#include <cmath>

using namespace std;


class rectBlocks{
    protected:
    int width,height,length;

    
    public:
        //Defualt Constructor
        rectBlocks(){};

        //Overloaded Constructor 
        rectBlocks(int w, int h, int l){
            width = w;
            height = h;
            length = l;
        }

    //Getters
        int getWidth(){
            return width;
        };
        int getHeight(){
            return height;
        }
        int getLength(){
            return length;
        }

    //Setters

         void setWidth(int w){
            width = w;
        }
        void setHeight(int h){
            height = h;
        }

        void setLength(int l){
            length = l;
        }
};

class sqrBaseRectBlock : public rectBlocks{
    public:
    //Defualt Constructor
    sqrBaseRectBlock(){};

    //Overloaded Constructor
    sqrBaseRectBlock(int a, int b,int c){
        width =a;
        height =b;
        length=c;
    };
};

class cuboidBlocks : public sqrBaseRectBlock{
    public:
    //Defualt constructor
    cuboidBlocks(){};

    //Overloaded constructor
    cuboidBlocks(int a, int b,int c){
    width =a;
    height =b;
    length =c;
    }

};

class sphericalBlocks:public sqrBaseRectBlock{
    double PI=M_PI;
    public:
    double volume,area;

    //Overloaded Constructor
    sphericalBlocks(int a, int b, int c){
        width=a;
        height=b;
        length=c;
    } 

    //Method that calculate the volume of  a spherical block
    double Volume(double diameter){
        double radius =diameter/2;
        double volume =(4/3)*PI*pow(radius,3);
        return volume;
    }

    //Method that calculate the surfaceArea of  a spherical block
    double surfaceArea(double diameter){
        double radius =diameter/2;
        double surfacearea =4*PI*pow(radius,2);
        return surfacearea;
    }

    //This function helps with the sorting
    bool operator <(sphericalBlocks object){
        // Will consider the width as diameter
        return width<object.width;
    }
};

class cylindricalBlocks : public sqrBaseRectBlock{
    double PI=M_PI;
    double surfacearea;
    public:
    //Overloaded constructor
    cylindricalBlocks(int a, int b, int c){
        width =a;
        height =b;
        length =c;
    }

    //This method compute the surfaceArea of a cylindricalBlocks
    double surfaceArea(int diameter){
        double radius =diameter/2;

        surfacearea=(2*PI*radius*height)+(2*PI*pow(radius,2)/radius);
        return surfacearea;
    }

    //Will consider the width as diameter
    bool operator <(cylindricalBlocks object){
        return surfaceArea(width)<object.surfaceArea(width);
    }
};

vector<rectBlocks> rectblocks(ifstream& MyReadFile);
vector<sqrBaseRectBlock> sqrbaserectblocks(ifstream& MyReadFile);
vector<cuboidBlocks> cuboidblocks(ifstream& MyReadFile);
vector<cylindricalBlocks> cylindricalblocks(ifstream& MyReadFile);
vector<sphericalBlocks> sphericalblocks(ifstream& MyReadFile);
void majorFunction(ifstream& MyReadFile);
void majorFunction2(ifstream& MyReadFile);
int main(int argc, char const *argv[]); 