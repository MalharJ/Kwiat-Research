//Malhar Jere
//This code XORS together the blocks from :
//a. Saved by the Bell
//b. Back to the Future 1
//c. Back to the Future 2

#include <stdio.h>
#include <stdlib.h>

void rounds(FILE* dump1, FILE* dump2, FILE* dump3,FILE* log, FILE* output, int count);

void main() {
    //Iteration 1
    FILE* movie1dump1 = fopen("a1.txt","r"); //Open the first file
    FILE* movie2dump1 = fopen("b1.txt","r"); //Open the second file
    FILE* movie3dump1 = fopen("c1.txt","r"); //Open the third file
    FILE* log = fopen("log1.txt","w");
    FILE* output = fopen("a_secondfile.txt","w"); //Create the final output
    rounds(movie1dump1, movie2dump1, movie3dump1, log, output, 200000000);
    printf("finished first 2 mil bytes\n");
    fclose(log);

    //Iteration 2
    FILE* movie1dump2 = fopen("a2.txt","r"); //Open the first file
    FILE* movie2dump2 = fopen("b2.txt","r"); //Open the second file
    FILE* movie3dump2 = fopen("c2.txt","r"); //Open the third file
    rounds(movie1dump2, movie2dump2, movie3dump2, output, 200000000);
    printf("finished second 2 mil bytes\n");

    //Iteration 3
    FILE* movie1dump3 = fopen("a3.txt","r"); //Open the first file
    FILE* movie2dump3 = fopen("b3.txt","r"); //Open the second file
    FILE* movie3dump3 = fopen("c3.txt","r"); //Open the third file
    rounds(movie1dump3, movie2dump3, movie3dump3, output, 200000000);
    printf("finished third 2 mil bytes\n");

    //Iteration 4
    FILE* movie1dump4 = fopen("a4.txt","r"); //Open the first file
    FILE* movie2dump4 = fopen("b4.txt","r"); //Open the second file
    FILE* movie3dump4 = fopen("c4.txt","r"); //Open the third file
    rounds(movie1dump4, movie2dump4, movie3dump4, output, 200000000);
    printf("finished fourth 2 mil bytes\n");

    //Iteration 5
    FILE* movie1dump5 = fopen("a5.txt","r"); //Open the first file
    FILE* movie2dump5 = fopen("b5.txt","r"); //Open the second file
    FILE* movie3dump5 = fopen("c5.txt","r"); //Open the third file
    rounds(movie1dump5, movie2dump5, movie3dump5, output, 200000000);
    printf("finished fifth 2 mil bytes\n");

    //Iteration 6
    FILE* movie1dump6 = fopen("a6.txt","r"); //Open the first file
    FILE* movie2dump6 = fopen("b6.txt","r"); //Open the second file
    FILE* movie3dump6 = fopen("c6.txt","r"); //Open the third file
    rounds(movie1dump6, movie2dump6, movie3dump6,output, 200000000);
    printf("finished sixth 2 mil bytes\n");

    //Iteration 7
    FILE* movie1dump7 = fopen("a7.txt","r"); //Open the first file
    FILE* movie2dump7 = fopen("b7.txt","r"); //Open the second file
    FILE* movie3dump7 = fopen("c7.txt","r"); //Open the third file
    rounds(movie1dump7, movie2dump7, movie3dump7, output, 200000000);
    printf("finished seventh 2 mil bytes\n");

    //iteration 8
    FILE* movie1dump8 = fopen("a8.txt","r"); //Open the first file
    FILE* movie2dump8= fopen("b8.txt","r"); //Open the second file
    FILE* movie3dump8 = fopen("c8.txt","r"); //Open the third file
    rounds(movie1dump8, movie2dump8, movie3dump8,  output, 100000000);
    printf("finished eighth 2 mil bytes\n");

    fclose(output);
}

void rounds(FILE* dump1, FILE* dump2, FILE* dump3, FILE* output, int count) {
    int idx, count1, val1,val2,val3;
    char temp1,temp2,temp3;
    //Loop below XORs back to the futures together
    for (idx=0; idx<count; ++idx) {
        count1 = count - idx;
        fseek(dump2, count1, SEEK_SET); //Set the position of the second hex dump movie
        count1 --;
        ///The first character - BACK TO THE FUTURE 1
        temp1 = fgetc(dump1);
        //printf("\ntemp1 is %c\n",temp1);
        //Logic to convert a value from hex to binary
        switch(temp1)   {
            case '0': temp1 = '0'; break;
            case '1': temp1 = '1'; break;
            case '2': temp1 = '0'; break;
            case '3': temp1 = '1'; break;
            case '4': temp1 = '0'; break;
            case '5': temp1 = '1'; break;
            case '6': temp1 = '0'; break;
            case '7': temp1 = '1'; break;
            case '8': temp1 = '0'; break;
            case '9': temp1 = '1'; break;
            case 'A': temp1 = '0'; break;
            case 'B': temp1 = '1'; break;
            case 'C': temp1 = '0'; break;
            case 'D': temp1 = '1'; break;
            case 'E': temp1 = '0'; break;
            case 'F': temp1 = '1'; break;
            case 'a': temp1 = '0'; break;
            case 'b': temp1 = '1'; break;
            case 'c': temp1 = '0'; break;
            case 'd': temp1 = '1'; break;
            case 'e': temp1 = '0'; break;
            case 'f': temp1 = '1'; break;
            default:  printf("\nInvalid hexadecimal digit temp1 %c ",temp1);
        }

        //printf("temp1 in binary is %c\n",temp1);

        /// The second character - BACK TO THE FUTURE 2
        temp2 = fgetc(dump2);
        //printf("temp2 is %c\n",temp2);
        //Logic to convert a value from hex to binary
        switch(temp2)   {
            case '0': temp2 = '0'; break;
            case '1': temp2 = '1'; break;
            case '2': temp2 = '0'; break;
            case '3': temp2 = '1'; break;
            case '4': temp2 = '0'; break;
            case '5': temp2 = '1'; break;
            case '6': temp2 = '0'; break;
            case '7': temp2 = '1'; break;
            case '8': temp2 = '0'; break;
            case '9': temp2 = '1'; break;
            case 'A': temp2 = '0'; break;
            case 'B': temp2 = '1'; break;
            case 'C': temp2 = '0'; break;
            case 'D': temp2 = '1'; break;
            case 'E': temp2 = '0'; break;
            case 'F': temp2 = '1'; break;
            case 'a': temp2 = '0'; break;
            case 'b': temp2 = '1'; break;
            case 'c': temp2  = '0'; break;
            case 'd': temp2 = '1'; break;
            case 'e': temp2 = '0'; break;
            case 'f': temp2 = '1'; break;
            default:  printf("\nInvalid hexadecimal digit temp2 %c ",temp2);
        }

        ///The third character - SAVED BY THE BELL
        temp3 = fgetc(dump3);
        switch(temp3)   {
            case '0': temp3 = '0'; break;
            case '1': temp3 = '1'; break;
            case '2': temp3 = '0'; break;
            case '3': temp3 = '1'; break;
            case '4': temp3 = '0'; break;
            case '5': temp3 = '1'; break;
            case '6': temp3 = '0'; break;
            case '7': temp3 = '1'; break;
            case '8': temp3  = '0'; break;
            case '9': temp3 = '1'; break;
            case 'A': temp3 = '0'; break;
            case 'B': temp3 = '1'; break;
            case 'C': temp3 = '0'; break;
            case 'D': temp3 = '1'; break;
            case 'E': temp3 = '0'; break;
            case 'F': temp3 = '1'; break;
            case 'a': temp3 = '0'; break;
            case 'b': temp3 = '1'; break;
            case 'c': temp3  = '0'; break;
            case 'd': temp3 = '1'; break;
            case 'e': temp3 = '0'; break;
            case 'f': temp3 = '1'; break;
            default:  printf("\nInvalid hexadecimal digit temp3 %c ",temp3);
        }
        ///OK NEW LOGIC HERE DUDE
        int a,b,c;
        switch(temp1) {
            case '0': a=0; break;
            case '1': a=1; break;
            default: printf("Weird bruh temp1");
        }
        switch(temp2) {
            case '0': b=0; break;
            case '1': b=1; break;
            default: printf("Weird bruh temp2");
        }
        switch(temp3) {
            case '0': c=0; break;
            case '1': c=1; break;
            default: printf("Weird bruh temp3");
        }

        fprintf(output, "%c", (a^b^c) + 48);







        /*
        ///The three bit XOR table
        //First XOR the back to the future movies
        if (temp1 == temp2) {
             temp4 = '0';
        }

        else if (temp1 != temp2) {
             temp4 = '1';
        }

        //then XOR the output of the SBTB with back to the future
        if (temp3 == temp4) {
             temp5 = '0';
            //fprintf(output, "%c", 48);
        }

        else if (temp3 != temp4) {
             temp5 = '1';
           //fprintf(output, "%c", 49);
        }

        ///THE PI STUFF BRUH

        if (temp5 == fgetc(pival)) {
            //temp5 = '0';
            fprintf(output, "%c", 48);
        }

        else if (temp3 != fgetc(pival)) {
            //temp5 = '1';
           fprintf(output, "%c", 49);
        }
        */
    }

    fclose(dump1);
    fclose(dump2);
    fclose(dump3);
}




