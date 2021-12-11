/**
 * @author: Ammar Malik, Ben McColgan, Shah Hassan, Bailey Cross
 * @version: Fall 2021
 * 
 * Create and launch scripts which change the parameters of the feedme files
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    int prompt1;
    char object[10];
    float posX, posY;
    float magnitude, halflight;
    float index;

    for(int i = 0; i < 10; i++){
        printf("Please enter the parameter number you would like to edit or type -1 to end: ");
        scanf("%d", prompt1);
        printf("\n");

        if(prompt1 == 1){
            printf("Please enter the object type: ");
            scanf("%s", object);
            char changeObject = ("#!/bin/bash/nfor((c=10;c<=30;c=c+10))\ndo  sed \"s/.*1   %s   1    #  object type*/ 3) $c     1 \" galfit.feedme\ndone" , object);
            system(changeObject);
        } else if(prompt1 == -1){
            break;
        } else if(prompt1 == 2){
            printf("Enter the x value: ");
            scanf("%f", posX)
            printf("\nEnter the y value: ");
            scanf("%f", posY);
            char changeObject = ("#!/bin/bash/nfor((c=10;c<=30;c=c+10))\ndo  sed \"s/.*1   %f %f   1  1  #  position x, y*/ 3) $c     1 \" galfit.feedme\ndone", posX, posY);
        } else if(prompt1 == 3){
            printf("Please enter the magnitude: ");
            scanf("%f", magnitude);
            char changeObject = ("#!/bin/bash\nfor((c=10;c<=30;c=c+10))\ndo\n  sed \"s/.*1          #  Integrated magnitude*/ 3) $c     1         #  Integrated magnitude/\" galfit.feedme\ndone");
        }
    }
}