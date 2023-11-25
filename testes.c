#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "error.h"
#include <assert.h>

#include "image8bit.h"
#include "instrumentation.h"



int main(void)
{

    double start_time, finish_time, exec_time;
    ImageInit();
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

    printf("(ImageBlur:\n");
    img = ImageLoad("pgm/small/ireland-06-1200x1600.pgm");
    start_time = cpu_time();
    COMP = 0;
    ImageBlur(img, 7, 7); 
    finish_time = cpu_time();
    exec_time = finish_time - start_time;
    printf("Tempo de execução (imagem pequena): %f segundos\n", exec_time);*/
    //ImageInit();
    //InstrReset();
    
    printf("(ImageBlur: \n");
    COMP = 0;
    Image img = ImageLoad("pgm/large/einstein_940x940.pgm");
    InstrReset();
    ImageBlur(img, 940, 940); 
    printf("\nMULTS: %ld\n",MULT);
    printf("SOMAS: %ld\n",SUM);
    InstrPrint();
    printf("Pixeis (imagem): %ld \n",COMP);



    //ImageInit();
    //InstrReset();
    /*Image img1 = ImageLoad("pgm/large/ireland_03_1600x1200.pgm");
    Image img2 = ImageLoad("pgm/small/bird_256x256.pgm");
    ImagePaste(img1,2,2,img2);
    start_time = cpu_time();
    int px,py;
    //ImageLocateSubImage(small, &px, &py,medium);
    COMP = 0;
    printf("\n%d\n",ImageLocateSubImage(img1, &px, &py,img2));
    finish_time = cpu_time();
    exec_time = finish_time - start_time;
    printf("comparacoes: %ld\n", COMP);
    printf("tempo: %f\n", exec_time);
*/
//InstrReset();  // reset to zero

//InstrPrint();
    return 0;


    }