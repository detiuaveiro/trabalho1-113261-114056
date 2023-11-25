#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "instrumentation.h"
#include "image8bit.h"


int main(void)
{
    /*printf("(ImageBlur: 1ª função(tempo de execução maior/mais lenta)\n");
    Image img = ImageLoad("pgm/small/bird_256x256.pgm");
    double start_time = cpu_time();
    ImageBlur(img, 40, 221); 
    double finish_time = cpu_time();
    double exec_time = finish_time - start_time;
    printf("Tempo de execução (imagem pequena): %f segundos\n", exec_time);*/



    /*printf("(ImageBlur: 1ª função(tempo de execução maior/mais lenta)\n");
    img = ImageLoad("pgm/small/ireland-06-1200x1600.pgm");
    start_time = cpu_time();
    ImageBlur(img, 7, 7); 
    finish_time = cpu_time();
    exec_time = finish_time - start_time;
    printf("Tempo de execução (imagem pequena): %f segundos\n", exec_time);

    printf("(ImageBlur: 1ª função(tempo de execução maior/mais lenta)\n");
    img = ImageLoad("pgm/small/ireland-06-1200x1600.pgm");
    start_time = cpu_time();
    ImageBlur(img, 7, 7); 
    finish_time = cpu_time();
    exec_time = finish_time - start_time;
    printf("Tempo de execução (imagem pequena): %f segundos\n", exec_time);*/

    printf("(ImageBlur: \n");
    Image img = ImageLoad("pgm/small/art3_222x217.pgm");
    double start_time = cpu_time();
    ImageBlur(img, 7, 7); 
    double finish_time = cpu_time();
    double exec_time = finish_time - start_time;
    printf("Tempo de execução (imagem pequena): %f segundos\n", exec_time);
    return 0;

    printf("(ImageBlur: 1ª função(tempo de execução maior/mais lenta)\n");
    ImageInit();
    InstrReset();
    Image img1 = ImageLoad("pgm/large/ireland_03_1600x1200.pgm");
    Image img2 = ImageLoad("pgm/small/bird_256x256.pgm");
    

    
    ImagePaste(img1,2,2,img2);
    double start_time = cpu_time();
    int px,py;
    //ImageLocateSubImage(small, &px, &py,medium);
    COMP = 0;
    printf("\n%d\n",ImageLocateSubImage(img1, &px, &py,img2));
    double finish_time = cpu_time();
    double exec_time = finish_time - start_time;
    printf("comparacoes: %ld\n", COMP);
    printf("tempo: %f\n", exec_time);

//InstrReset();  // reset to zero

//InstrPrint();



    }