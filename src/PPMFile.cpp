#include <iostream>
#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include "PPMFile.h"

using namespace std;

// 2. WriteHeader writes "P6", newline, width, " ", height, newline, and the maxColorValue
void PPMFile::writeHeader()
{
    //string header = ;
    priv_image<<"P6\n"
                <<priv_width << " "<<priv_height<<"\n"
                <<priv_maxColorValue<<endl;
}

// 3. writePixel takes a pixel type as an argument and writes the r, g, and b values to the
// file. Before writing, it should check to verify that the pixels written is less than the 
// numPixels in the file

void PPMFile::writePixel(pixel ip)
{
    if(priv_pixelsWritten <= priv_numPixels)
    {
        unsigned char three[] = {ip.r, ip.g, ip.b};
        const unsigned int three_length = 3;
        string input (three, three + three_length);
        priv_image << input;
        priv_pixelsWritten ++;
    }
}
// 4. getNumPixels returns the total number of pixels which is the width times
// the height
void PPMFile::setNumPixels(int width, int height)
{
    priv_numPixels = width * height;
}
const int& PPMFile::getNumPixels()
{
    if (priv_numPixels == 0) 
        {
            this->setNumPixels(priv_width, priv_height);
            return priv_numPixels;
        }
    else {return priv_numPixels;}
}
// 5. openFile opens the file name, but uses the c_str attribute 
void PPMFile::openFile()
{
    priv_image.open( priv_objectFileName.data() );    
}
//closes the file
void PPMFile::closeFile()
{
    priv_image.close();
}
// 6. setter for the file name
void PPMFile::setFileName(string fileName)
{
    priv_objectFileName = fileName;
}
// 7. setter for the Width
void PPMFile::setWidth(int width)
{
    priv_width = width;
}
// 8. setter for the Height
void PPMFile::setHeight(int height)
{
    priv_height = height;
}
const int& PPMFile::getWidth()
{
    return priv_width;
}
const int& PPMFile::getHeight()
{
    return priv_height;
}
const string& PPMFile::getFileName()
{
    return priv_objectFileName;
}