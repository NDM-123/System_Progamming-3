#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void findsimilar(char filename[],char  input[]){

FILE *file = fopen(filename, "r");
if ( file != NULL )//file is exist
{
    char line[256]; /* or other suitable maximum line size */
    while (fgets(line, sizeof line, file) != NULL) /* read a line */
    {
       ///////////////////////////////////////////////////////////work with 1 line
       
     char temo_word[100];/* or other suitable maximum word size */
    char newString[10][10]; 
    int i=0,//run on the line
    int j=0,//the start of the temo word 
    int ctr=0;// the temo word index
         
 
 
    j=0; ctr=0;
    for(i=0;i<=(strlen(temo_word));i++)
    {
        // if space or \0 found, assign NULL into newString[ctr]
        if(temo_word[i]==' '||temo_word[i]=='\0')
        {
            newString[ctr][j]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else//we are in the middle of the word
        {
            newString[ctr][j]=temo_word[i];
            j++;
        }
    }
    //lcsOptimized
    for(i=0;i < ctr;i++){
      if( findLCS(newString[i],input,strlen(newString[i]),strlen(input))>strlen(input))//the word is similar!
           printf(newString[i]);
           }
    }
    ///////////////////////////////////////////////////////////////// 
    fclose(file);
}
else
{
printf("file doesnt exist")
}
}
