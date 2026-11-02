{

         printf("MENU\n1.Name \n2.Roll\n");
         scanf("%d",&bh);
       switch (bh)
       {
       case 1:
       printf("Enter the roll no of the name you want to change ");
       scanf("%d",&new);
       for ( i = 0; i < a; i++)
       {  flag=0;
          if (s[i].roll==new)
          {
            printf("Enter the new name");
            scanf("%s",s[i].name);
          }
          
       }
       break;
       case 2:
       printf("Enter Roll No To modify");
       scanf("")