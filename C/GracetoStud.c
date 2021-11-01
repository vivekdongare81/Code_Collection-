    #include<stdio.h>
 
 // .........grace marks using this if else in switch
      
    
      int main()
      
      {
        int failedsub;
        int class;
        printf("Enter class you Obtained .");
        scanf("%d",&class);
        printf("Enter no.of Subjects in which you got Failed ");
        scanf("%d",&failedsub);
       
       switch (class)
      
       {
         case 1:
           
              if (failedsub>3)
              {
                printf("you will not get graced marks");
              }
              else
              {
                printf("Grace is of 5 marks ");
              }
              break;
              
         case 2:
           
           if (failedsub>2)
             {
               printf("you will not get grace");
              }
              else
              {
                printf("Grace is of 4 marks ");
              }
              break;
          case 3:
             if (failedsub >1)
             {
               printf("You will not get grace ");
              } 
              else
              {
               printf("Grace is of 5 marks ");
              }
              break;
           default:
                
               printf("Non valid class entered");
             
         }
         return 0;
      }
  