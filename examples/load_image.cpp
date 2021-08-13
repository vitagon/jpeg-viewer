#define cimg_use_jpeg
#include "../CImg.h"
using namespace cimg_library;

int main()
{
    const CImg<unsigned char> img("ref_image.jpg");
    img.display();
    return 0;
}
