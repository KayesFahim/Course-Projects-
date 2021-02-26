//Md. Kayes Hossan Fuad
//ID:1731040642


#include <stdio.h>

int main()
{
    char alphabet;
    int r,c;

    printf("Enter Any Capital Latter To Print Its Star Pattern Shape (A-Z): ");
    scanf("%c", &alphabet);

    switch(alphabet)
    {

 //Print A

        case 'A':

        for (r = 0; r < 7; r++) {

            for (c = 0; c <= 5; c++) {

                if(((c==0 || c==4) && (r!=0)) || ((r==0 || r==4) && (c>0 && c<4)))
                printf("*");

                else
                printf(" ");
        }

        printf("\n");
    }
       break;

//print B

        case 'B':

        for (r = 0; r < 7; r++) {

            for (c = 0; c <= 5; c++) {

                if((c==0) || ((c==4) && (r!=0 && r!=3 && r!=6)) || ((r==0 || r==3 || r == 6) && (c>0 && c<4)))
                printf("*");

                else
                printf(" ");
        }

        printf("\n");
    }
    break;

//Print C

        case 'C':

            for(r=0;r<8;r++){
                for(c=0;c<6;c++){
                    if((c==0 && (r>0 && r<6)) || ((r==0 || r==6) && (c>0 && c<5)))
                        printf("*");
                    else
                        printf(" ");
            }
            printf("\n");
   }

            break;

//Print D

        case 'D':

        for (r = 0; r < 7; r++) {

            for (c = 0; c <= 9; c++) {

                if((c==0) || ((c==6) && (r!=0 && r!=6)) || ((r==0 || r == 6) && (c>0 && c<4)))
                printf(" *");
                
                else
                printf(" ");
        }

        printf("\n");
    }
            break;

//Print E

        case 'E':
             for (r = 0; r < 7; r++) {

                for (c = 0; c <= 5; c++) {

                   if((c==0) || ((r==0 || r==3 || r ==6) && (c>0 && c<4)))
                    printf("*");
                    
                   else
                   printf(" ");
        }

        printf("\n");
    }
            break;

//Print F

        case 'F':
             for (r = 0; r < 7; r++) {

                for (c = 0; c <= 5; c++) {

                     if((c==0) || ((r==0 || r==3) && (c>0 && c<4)))
                     printf(" *");
                     
                     else
                     printf(" ");
        }

        printf("\n");
    }
     break;

//Print G
        case 'G':
          for (r = 0; r < 7; r++) {
               for (c = 0; c <= 5; c++) {
                   if((c==0 || r==0 || r==6) || ((c==5) && (r>2 && r<6)) || ((r==3) && (c>2 && c<5)))
                   printf("*");
        
                   else
                   printf(" ");
        }

        printf("\n");
    }

            break;
//Print H
        case 'H':
      for (r = 0; r < 7; r++) {
             for (c = 0; c <= 5; c++) {
                  if((c==0 || c==5)|| ((r==3)&&(c>0 && c<5)))
                  printf("*");
                  
                 else
                 printf(" ");
        }

        printf("\n");
    }
            break;

//Print I
        case 'I':
        for (r = 0; r < 7; r++) {
              for (c = 0; c <= 6; c++) {
                   if((c==5) || ((r==0 || r ==6) && (c>0 && c<6)))
                   printf(" *");
                   
                   else
                   printf(" ");
        }

        printf("\n");
    }
            break;
//Print J

        case 'J':
             for (r = 0; r < 7; r++) {

                  for (c = 0; c <= 5; c++) {

                       if((r==0) || (c==4) || ((r==6) && (c>0 && c<5)) || ((c==1) && (r>4 && r<6)))
                        printf("*");
                        
                        else
                        printf(" ");
        }

        printf("\n");
    }
            break;
//Print K

        case 'K':
            for (r = 0; r < 5; r++) {

                 for (c = 0; c <= 7; c++) {

                     if((c==1) || (r==0 && c==4) || (r==1 && c==3)|| (r==2 && c==2)||(r==3 && c==3) || (r==4 && c==4))
                     printf("*");
                     else
                     printf(" ");
        }

        printf("\n");
    }
            break;
//Print L

        case 'L':
        for (r = 0; r < 7; r++) {
               for (c = 0; c <= 6; c++) {
                    if((c==0) || ((r==6) && (c>0 && c<4)))
                    printf(" *");
                    
                    else
                    printf(" ");
        }

        printf("\n");
    }

            break;
//Print M

        case 'M':
            for (r = 0; r < 7; r++) {
                for (c = 0; c <= 7; c++) {
                     if(c==0 || c==6 || ((r==c) && (c>0 && c<4)) || (r==1 && c==5) || (r==2 && c==4))
                     printf("*");
                     
                     else
                     printf(" ");
        }

        printf("\n");
    }
            break;
//Print N

        case 'N':

    for (r = 0; r < 6; r++) {
             for (c = 0; c <= 6; c++) {
                  if(c==0 || c==5 || (r==c && (c>0 && c<5)))
                    printf("*");
                    
                    else
                    printf(" ");
        }

        printf("\n");
    }
           break;

//Print O

        case 'O':
           for (r = 0; r < 8; r++) {

                for (c = 0; c <= 9; c++) {

                      if(((c==0 || c==5) && (r>0 && r<6)) || ((r==0 || r ==6) && (c>0 && c<4)))
                      printf(" *");
                      
                      else
                      printf(" ");
        }

        printf("\n");
    }

            break;

//Print P

        case 'P':
             for (r = 0; r < 7; r++) {

                  for (c = 0; c <= 5; c++) {

                        if((c==0) || ((r==0 || r==3) && (c>0 && c<4)) || ((c==4)&&(r>0 && r<3)))
                        printf("*");
                        
                        else
                printf(" ");
        }

        printf("\n");
    }
            break;

//Print Q

        case 'Q':             
            for (r = 0; r < 8; r++) {
                for (c = 0; c <=6; c++) {

                 if(((c==0 || c==5) && (r>0 && r<6)) || ((r==0 || r ==6) && (c>0 && c<4)) || (c==6 && r==7) || (c==5 && r==6) || (c==3 && r==5))
                 printf("*");
                 
                 else
                printf(" ");
        }

        printf("\n");
    }

            break;

//Print R

        case 'R':
              for (r = 0; r < 7; r++) {
                   for (c = 0; c <= 5; c++) {
                        if((c==0) || ((r==0 || r==3) && (c>0 && c<4)) || ((c==4)&&(r>0 && r<3)) || (c==4) && (r>3 && r<7))
                        printf("*");
                        
                        else
                        printf(" ");
        }

        printf("\n");
    }

            break;


//Print S

        case 'S':
             for (r = 0; r < 8; r++) {

                 for (c = 0; c <= 8; c++) {

                      if((r==0 && c==1)|| (r==0 && c==2) ||(r==0 && c==3)||(r==1 && c==1) || (r==2 && c==1) || (r==3 && c==1)
                           ||(r==3 && c==2) || (r==3 && c==3) || (r==4 && c==5) || (r==5 && c==5)|| (r==6 && c==3)|| (r==6 && c==2) || (r==6 && c==1))
                      printf(" *"); 
                      
                      else
                      printf(" ");
        }

        printf("\n");
    }

            break;

 //Print T

        case 'T':
    for (r = 0; r < 7; r++) {
         for (c = 0; c <= 6; c++) {
              if((c==5) || ((r==0) && (c>0 && c<6)))
              printf(" *");
              
              else
              printf(" ");
        }

        printf("\n");
    }
         break;

//Print U

        case 'U':
              for (r = 0; r < 7; r++) {

                   for (c = 0; c <= 5; c++) {

                        if(((c==0 || c==4) && (r!=6)) || ((r==6) && (c>0 && c<4)))
                        printf("*");
                        
                        else
                        printf(" ");
        }

        printf("\n");
    }

            break;

 //Print V

        case 'V':
         for (r = 0; r < 5; r++) {
                for (c = 0; c <= 6; c++) {
                     if((r==3 && c==3) ||(r==2 && c==2)||(r==2 && c==4)
                          || (r==1 && c==1) || (r==1 && c==5)|| (r==0 && c==0) || (r==0 && c==6))
                printf("*");
                
                else
                printf(" ");
        }

        printf("\n");
    }

            break;

//Print W
        case 'W':
          for (r = 0; r < 5; r++) {
                for (c = 0; c <= 9; c++) {
                     if((r==0 && c==0)|| (r==0 && c==4) ||(r==0 && c==8)||(r==1 && c==1) || (r==1 && c==3)
                           || (r==1 && c==5)||(r==1 && c==7) || (r==2 && c==2) || (r==2 && c==6))
                     printf("*");
                     
                     else
                     printf(" ");
        }

        printf("\n");
    }

            break;

 //Print X
        case 'X':
            for (r = 0; r < 5; r++) {

                for (c = 0; c <= 4; c++) {

                    if((r==c) || (r==0 && c==4) || (r==1 && c==3)|| (r==3 && c==1)||(r==4 && c==0))
                    printf("*");
                    
                    else
                    printf(" ");
        }

        printf("\n");
    }

            break;

//Print Y
        case 'Y':
          for (r = 0; r < 7; r++) {

                for (c = 0; c <= 7; c++) {

                     if((r==3 && c==3) ||(r==2 && c==2)||(r==2 && c==4)
                          || (r==1 && c==1) || (r==1 && c==5) || (r==0 && c==0) || (r==0 && c==6)|| ((c==3) && (r>3 && c<6)))
                     printf("*");
                     else
                     printf(" ");
        }

        printf("\n");
    }

            break;

//Print Z
        case 'Z':

    for (r = 0; r < 5; r++) {

        for (c = 0; c <= 4; c++) {

               if((r==0 || r==4) || (r==0 && c==4) || (r==1 && c==3)|| (r==2 && c==2)||(r==3 && c==1))
               printf("*");
                
               else
               printf(" ");
        }

        printf("\n");
    }
          break;
        default:
            printf("Invaid Type ! Please Input Any Alphabet (A - Z) And Also Capital Latter");
    }

    return 0;
}
