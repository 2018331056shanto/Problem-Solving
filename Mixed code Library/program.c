#include<stdio.h>
#include<string.h>

typedef struct student{
    char name[10];
    unsigned int attendance : 5;
    unsigned int ct : 6;
    unsigned int finals : 8;
    char grade[3];
}std;
char * cal_grade(int att ,int ct, int finals){
    int total = att + ct + finals;
    if(total>240) return "A+";
    else if(total>225) return"A ";
    else if(total>210) return"A-";
    else if(total>195) return"B+";
    else if(total>180) return"B ";
    else if(total>165) return"B-";
    else if(total>150) return"C+";
    else if(total>135) return"C ";
    else if(total>120) return"D ";
    else return "F ";
}
void main(){
    std record[2];
    int att, ct, fin;
    for(int i=0; i<2; i++){
        scanf("%s",record[i].name);
        scanf("%d",&att);
        scanf("%d",&ct);
        scanf("%d",&fin);
        record[i].attendance=att;
        record[i].ct=ct;
        record[i].finals=fin;
        strcpy(record[i].grade, cal_grade(att,ct,fin));
    }
    for(int i=0; i<2; i++){
        printf("%s %d %d %d %s",record[i].name,record[i].attendance,record[i].ct,record[i].finals,record[i].grade);
    }
}