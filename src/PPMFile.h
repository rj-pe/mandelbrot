#ifndef PPMFILE_H
#define PPMFILE_H

#include <iostream>
#include <cmath>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

// 9. struct type named *pixel* with three *unsigned char attributes: r, g, b
struct pixel 
{
    unsigned char r,g,b;
};

class PPMFile
{
        
    public:
        PPMFile();
        PPMFile(int, int);
        void setWidth(int width);
        const int& getWidth();
        void setHeight(int height);  
        const int& getHeight();
        void setFileName(string fileName);
        const string& getFileName();
        void setNumPixels(int width, int height);
        const int& getNumPixels();
                
        void openFile();
        void closeFile();     
        void writeHeader();
        void writePixel(pixel ip);
        
    private:
        std::string priv_objectFileName;
        int priv_width;
        int priv_height;
        int priv_pixelsWritten;
        int priv_maxColorValue;
        int priv_numPixels;
        std::ofstream priv_image;
};

#endif
