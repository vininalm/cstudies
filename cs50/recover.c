#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./recover image\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");

    if(file == NULL)
    {
        printf("Can't open file\n");
        return 1;
    }

    unsigned char buffer[512];
    FILE *img;
    char filename[8];
    int counter = 0;

    while(fread(buffer, 512, 1, file) == 1)
    {
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            if(counter == 0)
            {
                sprintf(filename, "%03i.jpg", counter);
                img = fopen(filename, "w");
                fwrite(buffer, 512, 1, img);

            }

                fclose(img);
                sprintf(filename, "%03i.jpg", counter);
                img = fopen(filename, "w");
                fwrite(buffer, 512, 1, img);
                counter++;

        } else
        {
          fwrite(buffer, 512, 1, img);
        }

    }

    fclose(file);
    fclose(img);

}