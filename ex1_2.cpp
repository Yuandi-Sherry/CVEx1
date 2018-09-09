#include "CImg.h"
#include <iostream>
#define cimg_OS 2
using namespace cimg_library;
using namespace std;
//  g++ -o hello_word.exe hello_word.cpp -O2 -lgdi32
int main(int argc, char **argv) {
	const unsigned char red[3]={255,0,0}, green[3]={0,255,0}, blue[3]={0,0,255};
	CImg<unsigned char> img("../Questions/1.bmp");
	cimg_forXY(img,i,j) {
		// check white
		if(img(i,j,0,0) == 255 && img(i,j,0,1) == 255 && img(i,j,0,2) == 255) {
			img(i,j,0,1) = 0;
			img(i,j,0,2) = 0;
		}
		// check black
		if(img(i,j,0,0) == 0 && img(i,j,0,1) == 0 && img(i,j,0,2) == 0) {
			img(i,j,0,1) = 255;
		}
	}
	img.display();
	return 0;
}

