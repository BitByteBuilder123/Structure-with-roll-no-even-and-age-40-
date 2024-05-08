//CREATE A STRUCTURE NAMED STUDENT WHOSE MEMBERS ARE NAME ,ROLL NO,AGE PRINT A DETAILS OF THOSE STUDENT WHOSE ROLL NO IS EVEN AND AGE IS 40 USE FUNCTION  
#include<stdio.h>
#include<string.h>
 struct student {
    char name[15];
    int roll;
    char dep[15];
    int age;
    };
    void shivam(struct student[],int);
int main()
{
    int n;
struct student s[450];
    printf("enter no of students-->");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter details of student no--> %d\n in order as follows -name,roll,department,year-->",i+1);
        scanf("%s",s[i].name);
           scanf("%d",&s[i].roll);
           getchar();
              scanf("%s",s[i].dep);
                 scanf("%d",&s[i].age);
                 getchar();
        
    }
     printf("details of students is-->");
     printf("\n");
    for(int i=0;i<n;i++){
        printf("name of the %d student is-->%s\n",i+1,s[i].name);
        printf("roll no of the %d student is-->%d\n",i+1,s[i].roll);
        printf("department of the %d student is-->%s\n",i+1,s[i].dep);
        printf(" Age of the %d student is-->%d\n",i+1,s[i].age);
    }
      shivam(s,n);
    }
    void shivam(struct student s[],int n)
    {
        int y;
          for(int i=0;i<n;i++){
       if(s[i].roll%2==0&&s[i].age>40){
        printf("the details of required student no %d   is %d-->%s\n",i+1,s[i].name);
       printf("roll no of this %d student is-->%d\n",i+1,s[i].roll);
       
       }
                
            }
        }
    
 


