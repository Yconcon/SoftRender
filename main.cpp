#include "Rasterizer.h"
#include "tgaimage.h"

int main(int argc, char** argv)
{
    TGAColor white = TGAColor(255, 255, 255, 255);
    TGAColor red = TGAColor(255, 0, 0, 255);

    TGAImage image(700, 700, TGAImage::RGB);
    line(300, 300, 400, 400, image, white);
    image.flip_vertically();
    image.write_tga_file("output.tga");
    return 0;
}