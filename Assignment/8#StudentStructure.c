// Online C compiler to run C program online
#include <stdio.h>

struct stud_details{
    int sapid;
    char name[100];
    char course[100];
    float marks;
};

int main() {
    struct stud_details stu[10];
    for(int i=0;i<10;i++){
        printf("Enter details of %d Student \n",i+1);
        printf("Enter Sap ID: \n");
        scanf("%d",&stu[i].sapid);
        printf("Enter Name: \n");
        scanf("%s",stu[i].name);
        printf("Enter Course: \n");
        scanf("%s",stu[i].course);
        printf("Enter Marks: \n");
        scanf("%f",&stu[i].marks);
    }
    
    for(int i=0;i<10;i++){
        printf("-------------------------\n");
        printf("\t Student Details \n");
        printf("SapID : %d \nName : %s\nCourse : %s \nMarks : %f\n",stu[i].sapid,stu[i].name,stu[i].course,stu[i].marks);
    }

    return 0;
}
