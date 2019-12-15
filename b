     * C Program to List All Lines containing a given String

     */

    #include <stdio.h>

    #include <stdlib.h>

    #include <string.h>

     

    int search(FILE *, char *);

     

    void main(int argc, char * argv[])

    {

        FILE *fp1;

        int p;

     

        fp1 = fopen(argv[1], "r+");

        if (fp1 == NULL)

        {

            printf("cannot open the file ");

            exit(0);

        }

        search(fp1, argv[2]);

        fclose(fp1);

    }

     

    /* Searches the lines */

    int search(FILE *fp, char * str)

    {

        FILE *fp1;

        fp1 = fopen("fp1","w");

        char s[10],c;

        int len = strlen(str);

        int i = 0;

        int d;

        int seek = fseek(fp, 0, 0);

        c = fgetc(fp);

        while (c != EOF)

        {

            if (c == ' ' || c == '\n')

            {

                s[i] = '\0';

                i = 0;

                if (strcmp(s, str) == 0)

                {

                    while (c = fgetc(fp) != '\n')

                    {

                        fseek(fp, -2L, 1);

                        d = ftell(fp);

                    }

                    while ((c = fgetc(fp)) != '\n')

                    {

                        fputc(c, fp1);

                    }

                }

            }

            else

            {

                s[i] = c;

                i++;

            }

            c = fgetc(fp);

        }

        return 1;

    }
