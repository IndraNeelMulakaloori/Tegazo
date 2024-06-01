#include<stdio.h>
#include<stdlib.h>
#include<getopt.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

int main(void){
    // int w,h,c;
    // unsigned char* img;
    // while((img = stbi_load("data/airplane.jpg",&w,&h,&c,0)) != NULL){
    //        printf("Image Loaded with %dpx width\t %dpx\t height\t and %d channels \n",w,h,c);
    // }
    int width, height, channels;
    unsigned char *img = stbi_load("data/airplane.jpg", &width, &height, &channels, 0);
     if(img == NULL) {
         printf("Error in loading the image\n");
         exit(1);
     }
     printf("Loaded image with a width of %dpx, a height of %dpx and %d channels\n", width, height, channels);
     stbi_image_free(img);
    return 0;
}