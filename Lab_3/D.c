#include <stdio.h>


int G;
int i = 0;
int vowelCount = 0;
int consonantCount = 0;


//char isVowel(char anArray[])
//{
     // goes beyong 100 //{
           // while( anArray[i] != '/0')
           // {
               // if (anArray[i] == 'a'|| anArray[i] == 'A'|| anArray[i] == 'e'|| anArray[i] == 'E'||\
                anArray[i] == 'i'|| anArray[i] == 'I'|| anArray[i] == 'o'|| anArray[i] == 'O'||\
                anArray[i] == 'u'|| anArray[i] == 'U')
               //     vowelCount++;
             //   i++;
            //}
       // printf("Number of vowels in string %d\n", vowelCount); 
       // }
    //for (G = 0; anArray[G]; G++)
         //   {
           //     if ((anArray[G] >= 65 && anArray[G] <=90) || (anArray[G] >= 97 && anArray <=122))
           //     {
             //       if (anArray[G] == 'a'|| anArray[G] == 'A'|| anArray[G] == 'e'|| anArray[G] == 'E'||\
                anArray[G] == 'i'|| anArray[G] == 'I'|| anArray[G] == 'o'|| anArray[G] == 'O'||\
                anArray[G] == 'u'|| anArray[G] == 'U') 
                //    vowelCount++;
                //        else
                  //          consonantCount++;
                
          //      }
        //    }  
   // return vowelCount; 
       
//}

//char isConsonant(char anArray[])
//{
    //for (G = 0; anArray[G]; G++)
        //    {
          //      if ((anArray[G] >= 65 && anArray[G] <=90) || (anArray[G] >= 97 && anArray <=122))
          //      {
           //         if (anArray[G] == 'a'|| anArray[G] == 'A'|| anArray[G] == 'e'|| anArray[G] == 'E'||\
                anArray[G] == 'i'|| anArray[G] == 'I'|| anArray[G] == 'o'|| anArray[G] == 'O'||\
                anArray[G] == 'u'|| anArray[G] == 'U') 
        //            vowelCount++;
          //              else
          //                  consonantCount++;
               
         //       }
       //     }
       //      return consonantCount;
//}


//char isUpper(char anArray[])
//{
   // for (G = 0; anArray[G]; G++)
    //{
     //          anArray[G] = toUpper(anArray[G]);
   // }
   // return anArray[G];
//}


//char *isLower(char *anArray, size_t len)
//{
    // char *anArray_l = calloc(len+1, sizeof(char));
    // for (size_t i = 0; i < len; ++i)
    // {
     //          anArray_l[i] = isLower((unsigned char)anArray[i]));
    // }
    // return anArray_1;
//}




int main()
{
    int vowel;
    int consonant;
    int upper;
    int lower;
    char userMenu;
    char anotherArray[100];
    
    printf("Enter a string: \n");
    gets(anotherArray);
    
    printf("\nSelect an option:\n");
    
     do 
     {      
        //Initial Menu Display
        printf("\nM) Display menu\
        \nX) Exit the program\n");
        
        
        //Request Input from User
        scanf("%c", &userMenu);
    
    
        //M Displays Menu
        if (userMenu == 'M'|| userMenu == 'm')
        {
        printf("\nA) Count the number of vowels in the string\
        \nB) Count the numbeer of consonants in the string\
        \nC) Convert the string to uppercase\
        \nD) Convert the string to lowercase\
        \nE) Display the current string\
        \nF) Enter another string\n\n");
        }
        
       
        //Number of Vowels algorithm
        if ( userMenu == 'A' || userMenu == 'a' )
        {
             //vowel = isVowel(anotherArray);
            // printf("Number of vowels in string %d\n", vowel);  
        }
        
        
        //Number of Consonants algorithm
        else if (userMenu == 'B'|| userMenu == 'b')
        {
            // consonant = isConsonant(anotherArray);
             //printf("Number of consonants in string %d\n", consonant) ; 
        }
        
        
        //String to Uppercase algorithm
        else if (userMenu == 'C'|| userMenu == 'c')
        {
            //upper = isUpper(anotherArray);
            //printf("\nString in all uppercase: %s\n", upper);
        }
    
    
        //String to Lowercase algorithm
        else if (userMenu == 'D'|| userMenu =='d')
        {
           // lower = isLower(*anotherArray);
           // printf("\nString in all lowercase: %s\n", lower);
        }
    
    
        //Display current String algorithm
        else if (userMenu == 'E'|| userMenu =='e')
        {
            printf("Current string: %s\n", anotherArray);
        }
    
    
        //Enter another string algorithm
        else if (userMenu == 'F'|| userMenu == 'f')
        {
            scanf("%s", &anotherArray);
        }
        
        else if (userMenu == 'X'|| userMenu == 'x')
        {    
            return 0;
        }
        else
        {
             scanf("%c", &userMenu);
        }
    
  
    }

    while ( userMenu != 'X'|| userMenu != 'x' );
     return 0;
}

