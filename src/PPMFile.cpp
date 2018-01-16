#include <iostream>
#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include "PPMFile.h"

using namespace std;


// 1. Constructor that sets width, height, and pixelsWritten to zero. Set
//    maxColorValue to 255
//  default constructor
PPMFile::PPMFile()  
    : priv_width(0), priv_height(0), priv_pixelsWritten(0), priv_maxColorValue(255), priv_numPixels(0) {}
    
/**constructor 
 *  @param wth sets the number of pixels across
 *  @param hht sets the number of pixels down
 */
PPMFile::PPMFile(int width, int height) 
    : priv_width(width), priv_height(height), priv_pixelsWritten(0),priv_maxColorValue(255)
{ 
    int priv_numPixels = priv_width * priv_height;
}

// 2. WriteHeader writes "P6", newline, width, " ", height, newline, and the maxColorValue
void PPMFile::writeHeader()
{
    //string header = ;
    image<<"P6\n"
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
        image << input;
        priv_pixelsWritten ++;
    }
}
// 4. getNumPixels returns the total number of pixels which is the width times
// the height
const int& PPMFile::getNumPixels()
{
    if (priv_numPixels == 0) {return priv_numPixels = priv_width * priv_height;}
    else {return priv_numPixels;}
}
// 5. openFile opens the file name, but uses the c_str attribute 
void PPMFile::openFile()
{
    image.open( objectFileName.data() );    
}
//closes the file
void PPMFile::closeFile()
{
    image.close();
}
// 6. setter for the file name
void PPMFile::setFileName(string fileName)
{
    objectFileName = fileName;
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