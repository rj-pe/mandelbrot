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
    
public:
    const string writePixel();
    unsigned char r,g,b;
    const unsigned int three_length = 3;
    int i=0;
    public:
    const string& writePixel();
    unsigned char three[];
};

class PPMFile
{
    public:
      // 1. Constructor that sets width, height, and pixelsWritten to zero. Set
      //    maxColorValue to 255
        PPMFile()
          : priv_width(MIN), priv_height(MIN), priv_pixelsWritten(MIN),
          priv_maxColorValue(MAX), priv_numPixels(MIN) {}
          /** Constructor
           *  @param wth sets the number of pixels across
           *  @param hht sets the number of pixels down
           */
        PPMFile(int width, int height)
          : priv_width(width), priv_height(height),
          priv_pixelsWritten(MIN),priv_maxColorValue(MAX)
        {
          priv_numPixels = width * height;
        }

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
        static const int MAX = 255;
        static const int MIN = 0;
        std::ofstream priv_image;
};

#endif
