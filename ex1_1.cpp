#include "CImg.h"
#define cimg_OS 2
using namespace cimg_library;
//  g++ -o hello_word.exe hello_word.cpp -O2 -lgdi32
int main(int argc, char **argv) {
	CImg<unsigned char> img("../Questions/1.bmp");
	img.display();

	return 0;
}
