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
    printf("(ImageBlur: 1ª função(tempo de execução maior/mais lenta)\n");
    Image img = ImageLoad("pgm/small/art3_222x217.pgm");
    double start_time = cpu_time();
    ImageBlur(img, 7, 7); //  valores só para 1 pixel(640,480(neste caso da img2))
    double finish_time = cpu_time();
    double exec_time = finish_time - start_time;
    printf("Tempo de execução (imagem pequena): %f segundos\n", exec_time);
    }