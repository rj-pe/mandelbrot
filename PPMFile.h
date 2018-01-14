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
        private:
        std::string objectFileName;
        int priv_width;
        int priv_height;
        int priv_pixelsWritten=0;
        int priv_maxColorValue=0;
        int priv_numPixels=0;
    public:
        PPMFile();
        PPMFile(int, int);
        void setWidth(int width);
        const int& getWidth();
        void setHeight(int height);  
        const int& getHeight();
        void setFileName(string fileName);
        void openFile();
        void closeFile();     
        void writeHeader();
        void writePixel(pixel ip);
        const int& getNumPixels();
        std::ofstream image;
        
};

#endif