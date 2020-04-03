#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])

    {
// to re-enter the cipher key in case command line argument is not provided


    if (argc != 2)
    {
        printf("Please enter one command line argument as the cipher key \n");

        return 1;

    }
    else
        {
            // to prompt the user to enter only 26 characters in key
                    if (strlen(argv[1]) != 26)
                    {
                        printf("Please enter a key of 26 alphabetical characters as a command line argument \n e.g. : ./substitutions qwertyuiopasdfghjklzxcvbnm \n");
                        return 1;
                    }
                    else
                    {
                    //  checking if the key contains non-alpha chars
                        char* tkey = (argv[1]);

                          for (int c = 0; c < 26; c++)
                            {
                                 if(!isalpha(tkey[c]))
                                 {
                                    printf("Please enter 26 alphabetical characters as key only\n");
                                    return 1;
                                 }
                                    else
                                    {

                                    }


                            }
                    }
        }
        //      check for duplicates in key

        for (int d = 0; d < 25; d++){

                for (int e = d + 1; e < 26; e++){
                        char* tkey = (argv[1]);
                        if (tkey[e] == tkey[d] ){
                                printf("Please donot enter duplicate alphabetical characters in key \n");
                                return 1;
                        }
                        else{

                        }

                }
        }





        // get the plain text to be ciphered
        char* plain = get_string("Plain text:");

        printf("ciphered Text: ");

        //assinging user provided key to variable char "key"
        char* key = (argv[1]);

        //ciphering the plain text
        for (int i=0; i < strlen(plain); i++)
            			{
            			    for (int a = 0; a < 26; a++)
            				{

            					if (plain[i] == 'a' + a)
            					{
            						if(islower(key[a]))
            				        {
            						    printf("%c", key[a]);
            					    }
            					    else
            					    {

            						        printf("%c", key[a] + 32);
            					    }

            					    }

            					else if (plain[i] == 'A' + a)
                					{
                    					if(islower(key[a]))
                    				        {
                    						    printf("%c", key[a]- 32);
                    					    }
                    					    else
                    					    {

                    						        printf("%c", key[a]);
                    					    }
                					}

                				}
                				//print non-alphabetical characters
                				if(!isalpha(plain[i]))
                				{
                				    printf("%c", plain[i]);
                				}


                			}
      printf("\n");
    return 0;

    }
