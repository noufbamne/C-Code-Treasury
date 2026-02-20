// A low level file-copy program
#include<fcntl.h>
// #include<types.h>
// #include<stat.h>
void main(int argc, char*argv[])
{
    char buffer[512];
    int inhandle, outhandle, bytes;

    inhandle = open(argv[1],O_RDONLY | O_BINARY);
    if (inhandle == -1)
    {
        puts("Cannot open a file");
    }
    outhandle = open(argv[2],O_CREAT | O_BINARY | O_WRONLY /*O_IWRITE*/ );
    if (inhandle == -1)
    {
        puts("Cannot open a file");
        close(inhandle);
    }
    while(1) 
    {
        bytes = read(inhandle, buffer, 512);

        if (bytes > 0)
        write(outhandle,buffer,bytes);

        else
        break;
    }
    close(inhandle);
    close(outhandle);
}