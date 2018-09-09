#include "CImg.h"
#define cimg_OS 2
using namespace cimg_library;
//  g++ -o hello_word.exe hello_word.cpp -O2 -lgdi32
int main(int argc, char **argv) {
	unsigned char blue[] = {0, 0, 255};
	CImg<unsigned char> img("../Questions/1.bmp");
	img.draw_circle(50,50,30,blue);
	img.display();

	return 0;
}
