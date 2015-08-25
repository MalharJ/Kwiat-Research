//Malhar Jere
//The code below serves to take in a file of text characters (of 1's and 0's),
//convert those characters to decimal by grouping 4 at a time, convert that decimal value to hex
//and writing that to a binary file
#include <stdio.h>
#include <stdlib.h>

void main() {
    //Buffer and int stuff below
    unsigned int counter,i, val;
    int buffer[8];
    //File stuff below
    FILE* out = fopen("binary_from_text_1.dat","wb"); //write it to a .dat file as binary
    FILE* in = fopen("a_endedwithpi.txt","r"); //This file can be anything that has 0's and 1's
    FILE* log = fopen("log_binary.txt","w");
    //Character stuff below
    char temp;
    for (i=0; i<1500000000; i=i+8) {
        //Code below reads in 4 characters from the pi file into the buffer
        for (counter = 0; counter < 8; ++counter) {
            temp = fgetc(in);
            switch (temp) {
                case '1' : buffer[counter] = 1; break;
                case '0' : buffer[counter] = 0; break;
                default: fprintf(log,"Invalid dude%u \n", i);
            }
        }

        val = (buffer[7] * 128) + (buffer[6] * 64) + (buffer[5]* 32) + (buffer[4] * 16) +(buffer[3] * 8) + (buffer[2] * 4) + (buffer[1] * 2) + buffer[0]; //text to decimal
        fwrite(&val, 1, 1, out);
        //printf("val is %u\n", val);
    }
    fclose(log);
    fclose(out);
    fclose(in);
}
