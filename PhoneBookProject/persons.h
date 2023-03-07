typedef struct
{
    int day;
    int month;
    int year;
}date;

typedef struct
{
    char lastname[20];
    char firstname[20];
    date dob;
    char address[50];
    char email[40];
    char phonenumber[20];

}person;
person p[100];
int count=0;
int check=1;
