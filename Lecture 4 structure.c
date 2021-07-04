#include<stdio.h>
#include<string.h>
//CRUD

//user defined data type
struct Student{
    //Members or fields of structure
    char name[20];
    int id;
    float cgpa;
};

/*
struct Teacher{
    char name[20];
    double salary;
    int joining_year;

};
*/

int main(){
    struct Student s1= {"Rahim", 1234, 3.84};
    //initialization using designated initialization
    struct Student s2 = {.name = "Karim" , .cgpa= 3.00, .id= 234};
    int i, index, n;
    float max;

    struct Student strr[20];

    printf("How many students:\n");
    scanf("%d", &n);

    printf("\n\n");

    for(i=0;i<n;i++){
        printf("Take input for student index:%d\n",i);
        printf("Name: ");
        scanf("%s",strr[i].name);
        fflush(stdin);

        printf("ID: ");
        scanf("%d",&strr[i].id);
        fflush(stdin);

        printf("CGPA: ");
        scanf("%f",&strr[i].cgpa);
        fflush(stdin);
    }

    printf("\n\nPrinting the Structure array:\n");
    for(i=0;i<n;i++){
        printf("This is for student index:%d\n",i);
        printf("Name: %s\n",strr[i].name);
        printf("ID: %d\n",strr[i].id);
        printf("CGPA: %f\n",strr[i].cgpa);
    }

    max = strr[0].cgpa;
    index = 0;
    printf("initial max %f\n", max);

    for(i = 0; i<n; i++){
        if(max < strr[i].cgpa){
            printf("%f  %i\n",max,i);
            max = strr[i].cgpa;
            index = i;
        }
    }
    printf("\n-------------------------------------------------------------------\n");
    printf("Max cgpa in the class %f\n", max);
    printf("This is for student with max CGPA of index: %d\n",index);
    printf("Name: %s\n",strr[index].name);
    printf("ID: %d\n",strr[index].id);
    printf("CGPA: %lf\n",strr[index].cgpa);


    return 0;
}
