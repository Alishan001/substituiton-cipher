# substituiton-cipher
Substitution cipher
run the program by typing the following in the terminal:

    ./substitutions [space] 26 characters long ciphering key
    e.g: ./substituitons qwertyuiopasdfghjklzxcvbnm

After checking the key for the following conditions the program will prompt the user for the text to be ciphered and will return the ciphered text at the end.
if you want to view the source code please double click the file substitutions.c in the panel to the left.

Conditions:
    A.The program will only accept a key if it is:
        1. 26 characters long;
        2. contains only alphabetical characters; and
        3. does not have a character repeated (case in-sensensitive).

    B.The program will generate an error if the command line arguement is not provided or is provided more than once.
    C. Ciphering will only work for alphabetical characters so, non alphabetical characters will be printed as it is.


