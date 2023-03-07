void Load()
{
    system("cls");
    FILE *f;
    f=fopen("a.txt","r");
    while(!feof(f))
    {
        fscanf(f,"%[^,],",p[count].lastname);
        fscanf(f,"%[^,],",p[count].firstname);
        fscanf(f,"%d-",&p[count].dob.day);
        fscanf(f,"%d-",&p[count].dob.month);
        fscanf(f,"%d,",&p[count].dob.year);
        fscanf(f,"%[^,],",p[count].address);
        fscanf(f,"%[^,],",p[count].email);
        fscanf(f,"%[^\n]\n",&p[count].phonenumber);
        count++;
    }
    fclose(f);
    Menu();
}

void Save()
{
    FILE *f;
    f=fopen("a.txt","w");
    for (int i=0 ; i<count ; i++)
        fprintf(f,"%s,%s,%d-%d-%d,%s,%s,%s\n",p[i].lastname,p[i].firstname,p[i].dob.day,p[i].dob.month,p[i].dob.year,p[i].address,p[i].email,p[i].phonenumber);
    fclose(f);
    system("cls");
    system("color 2f");
    printf("Directory Saved Successfully");
    check++;
    printf("\nPress any key to continue:\n");
    getch();
    Menu();
}
