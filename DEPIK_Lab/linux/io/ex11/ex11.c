#include <stdio.h>
#include <fcntl.h>
typedef struct
{
  int Id;
  char name[20];
  int phNo;
}student_t;  

main()
{
  student_t rec;
  int len;
  char source[25];
  char target[25];
  //char buf[];
  FILE *fp1;
  FILE *fp2;
  printf("Enter source file name:");
  scanf("%s",source);
  fp1=fopen(source,"r");
  if(fp1==NULL)
  {
    printf(" source file open error");
    exit(1);
  }  
  printf("Enter target file name:");
  scanf("%s",target);
  fp2=fopen(target,"w+");
  if(fp2==NULL)
  {
    printf("can not open target file");
    fclose(fp1);
    exit(1);
  }
  
  len=fscanf(fp1,"%d  |  %s  |  %d\n",&rec.Id,rec.name,&rec.phNo);
  while(len!=-1)
  {
    fwrite(&rec,1,sizeof(student_t),fp2);
    len=fscanf(fp1,"%d  |  %s  |  %d\n",&rec.Id,rec.name,&rec.phNo);
  }  
    
 
  fclose(fp1);
  fclose(fp2);
} 
