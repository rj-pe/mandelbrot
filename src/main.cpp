#include <iostream>
#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include "PPMFile.h"
#include "complex_number.h"

using namespace std;

int main()
{
   string fileName = "foo.ppm";
    int ix,iy;
    double cxmin = -2.0;
    double cxmax = 1.0;
    double cymin = -1.0;
    double cymax = 1.0;
    double escapeRadius = 2.0;
    double pixelwidth;
    double pixelheight;
    int maxiteration = 200;
    int iteration = 0;
    double cx, cy;

    ComplexNumber x, last, plusOne;

    PPMFile myImage(600, 400); //create a PPMFile instance in the stack, pass in width and height
    pixel green; 
    pixel blue;
    int width = myImage.getWidth();
    int height = myImage.getHeight();
    green.r = 0;
    green.g = 255;
    green.b = 0;

    blue.r = 0;
    blue.g = 0;
    blue.b = 255;

    pixelwidth = (cxmax - cxmin) / static_cast<double>(width);
    pixelheight = (cymax - cymin) / static_cast<double>(height);

    myImage.setFileName(fileName);
    myImage.openFile();
    myImage.writeHeader();
    cout << "Number of pixels to write is " << myImage.getNumPixels() << endl;


 for (iy=1; iy <= height; iy++) {
        cy = cymin + (iy - 1)*pixelheight;
        if (abs(cy) < pixelheight / 2)
            cy = 0.0;
        for (ix=1; ix <= width; ix++) {
                iteration = 0;
                cx = cxmin + (ix - 1) * pixelwidth;
                x.set(cx , cy);
                last.set(0.5,0.5);

                do {
                    plusOne = last * last + x;
                    last = plusOne;
                    iteration++;
                } while (iteration < maxiteration && plusOne.magnitude() < escapeRadius);

                if (iteration == maxiteration)
                    myImage.writePixel(green);
                else
                    myImage.writePixel(blue);

        }
 }

    myImage.closeFile();

    cout << "Finished generating mandelbrot in the following file!" << endl;
    cout << fileName << endl;

    return 0;

}
