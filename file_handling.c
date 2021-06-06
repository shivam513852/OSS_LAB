# include <stdio.h>
# include <string.h>

int main( )
{
	FILE *filePointer ;
	char dataToBeWritten[50]
		= "GeeksforGeeks-A Computer Science Portal for Geeks";
	filePointer = fopen("GfgTest.c", "w") ;
	if ( filePointer == NULL )
	{
		printf( "GfgTest.c file failed to open." ) ;
	}
	else{		
		printf("The file is now opened.\n") ;
		if ( strlen ( dataToBeWritten ) > 0 )
		{
			fputs(dataToBeWritten, filePointer) ;
			fputs("\n", filePointer) ;
		}
		fclose(filePointer) ;
		
		printf("Data successfully written in file GfgTest.c\n");
		printf("The file is now closed.") ;
	}
FILE *filePointer ;
    filePointer = fopen("GfgTest.c", "r") ;
    if ( filePointer == NULL )
    {
        printf( "GfgTest.c file failed to open." ) ;
    }
    else
    {   
        printf("The file is now opened.\n") ;
       while( fgets ( dataToBeRead, 50, filePointer ) != NULL )
        {
            printf( "%s" , dataToBeRead ) ;
         }
        fclose(filePointer) ;
        printf("Data successfully read from file GfgTest.c\n");
        printf("The file is now closed.") ;
    }
	return 0;		
}
