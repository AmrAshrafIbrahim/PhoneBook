void Print()
{
    system("cls");
    printf("(1)Sort by Last Name\t\t\t(2)Sort by Date of Birth (younger to older)\n");
    switch(getch())
    {
    case '1':
        sortbyLN();
        break;
    case '2':
        sortbyDOB();
        break;
    default:
        printf("\nWrong Entry");
        printf("\nPress any key to continue:\n");
        getch();
        Menu();
        break;
    }
    for(int i=0; i<count; i++)
        printContact(i);

    printf("\nPress any key to continue:\n");
    getch();
    Menu();
}

void printContact(int i)
{
    printf("\nLast Name: %s\n",p[i].lastname);
    printf("First Name: %s\n",p[i].firstname);
    printf("Date of Birth: %d / %d / %d \n",p[i].dob.day,p[i].dob.month,p[i].dob.year);
    printf("Address: %s\n",p[i].address);
    printf("Email: %s\n",p[i].email);
    printf("Phone Number: %s\n",p[i].phonenumber);
}

void sortbyLN()
{
    person swap;
    for (int i= 0 ; i < count-1; i++)
        for (int j= 0 ; j< count- i- 1; j++)
            if (strcasecmp(p[j].lastname,p[j+1].lastname)>0)
            {
                swap= p[j];
                p[j]=p[j+1];
                p[j+1]=swap;
            }
}

void sortbyDOB()
{
    person swap;
    for (int i= 0 ; i < count-1; i++)
        for (int j= 0 ; j< count-i-1; j++)
            if (p[j].dob.year<p[j+1].dob.year)
            {
                swap= p[j];
                p[j]=p[j+1];
                p[j+1]=swap;
            }
            else if(p[j].dob.year==p[j+1].dob.year&&p[j].dob.month<p[j+1].dob.month)
            {
                swap= p[j];
                p[j]=p[j+1];
                p[j+1]=swap;
            }
            else if(p[j].dob.year==p[j+1].dob.year&&p[j].dob.month==p[j+1].dob.month&&p[j].dob.day<p[j+1].dob.day)
            {
                swap= p[j];
                p[j]=p[j+1];
                p[j+1]=swap;
            }
}
