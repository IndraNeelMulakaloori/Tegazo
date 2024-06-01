#include<stdio.h>
#include<stdlib.h>
#include<getopt.h>
#include<string.h>
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
    int desired_no_of_channels  = 0;
    printf("Enter no of channels to load : ");
    scanf("%d",&desired_no_of_channels);
    unsigned char *img = stbi_load("data/airplane.jpg", &width, &height, &channels, desired_no_of_channels);
     if(img == NULL) {
         printf("Error in loading the image\n");
         exit(1);
     }
     // Loading an image
     printf("Loaded image with a width of %dpx, a height of %dpx and %d channels\n", width, height, desired_no_of_channels);
    //  Desired no fo channels: Controls no of channels to load 
    // 1) MC 
    // 2)MCA 
    // 3) RGB 
    // 4) CMYK
    //Writing to PNG
    // stbi_write_png("output_data/airplane_output_monochrome.png",width,height,desired_no_of_channels, img, width * desired_no_of_channels);
    //Free img
     stbi_image_free(img);
    return 0;
}