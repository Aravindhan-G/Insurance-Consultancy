#include<stdio.h>
#include<string.h>
#define z fputc(f,p)
#define x f=','
struct custdetail
{
    char name[30],phnum[30],email[50],maritial[10],nomnme[20],nomrelation[20];
    int dd,yy,mm,id;
    long int income;
};
struct date
   {
       int dd,mm,yyyy;
   } ;
struct points
{   struct custdetail cus;
    struct date dob,cur_date;
    int age,monthpay;
    float height,weight,bmi,bp,score;
    char gender[8],smoke[10],alcohol[9],drugs;
    char exercise[20],diet[10],stress[10],insomniac[20],healhis[20],accident,insurance[30];
};
    int i;
    char f;
    FILE *p;
    void age(struct points *ag);
    void smoke(struct points* sm);
    void alcohol(struct points* al);
    void drugs(struct points* dr);
    void exercise(struct points* ex);
    void diet(struct points* di);
    void stress(struct points* st);
    void insomniac(struct points* in);
    void healhis(struct points* he);
    void accident(struct points* ac);
    void policy(struct points* po);
    void month(struct points* mo);
main()
{
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                                                  WELCOME TO PAAAKCA INSURANCE CONSULTATION !!!");
    printf(" \n MOTTO : DELIVERING MORE THAN EXPECTED TO OUR BELOVED CUSTOMERS SINCE 1951 \n");
    printf("\n VARIOUS POLICIES : \n");
    printf("\n 1.POLICY NAME : 'PAAKCA LIFE E-SHIELD' ");
    printf("\n a.Entry age : 18 to 65 years ");
    printf("\n b.Policy term : 5 years to 30 years ");
    printf("\n c.Sum assured : Min - 20L  Max - no limit \n");
    printf("\n 2.POLICY NAME : 'PRAGATI PLAN'");
    printf("\n a.Entry age : 12 to 45 years ");
    printf("\n b.Policy term : 12 to 20 years ");
    printf("\n c.Sum assured : Min - 15L  Max - no limit\n");
    printf("\n 3.POLICY NAME : 'LIFE ELITE SECURE'");
    printf("\n a.Entry age : 18 to 75 years");
    printf("\n b.Policy term : 25 to 30 years ");
    printf("\n c.Sum assured : 25L Max - no limit \n");
    printf("\n 4.POLICY NAME : 'AVIVA I-LIFE'");
    printf("\n a.Entry age : 18 to 60 years");
    printf("\n b.Policy term : 10-35 years");
    printf("\n c.Sum assured : Min-15L Max-50L\n");
    printf("\n 5.POLICY NAME : 'SUN LIFE'");
    printf("\n a.Entry age : 18 to 65 years");
    printf("\n b.Policy term : 5-40 years");
    printf("\n c.Sum assured : Min-30L Max-NO LIMIT");
    printf("\n\t\t\t");
    system("pause");
    system("cls");
    int flag=0,j=1,idg;
    p=fopen("Insurance1.0.csv","w+");
    fputs("ID,NAME,GENDER,PHONE NUMBER,E-MAIL ID,DOB,AGE,ANNUAL INCOME,MARITIAL STATUS,NOMINEE NAME,NOMINEE RELATIONSHIP,HEIGHT,WEIGHT,BMI,SMOKE STATUS,ALCOHOLIC CONSUMPTION,DRUGS,EXERCISE,DIET,STRESS,INSOMANIAC,HEALTH HISTORY,ACCIDENT,POLICY SUGGESTED,MONTHLY PAYMENT",p);
    flag=1;
    char temp,temp1,temp23;
    struct points per[j];
    for(i=0;i<j;i++)
    {
        system("cls");
        per[i].score=10.0;
        if(flag==1)
        {
            f='\n';
            fputc(f,p);
        }
        printf("\n\t\t\t NO : %d ID registration   ",i+1);
        idg=1000+(i+1);
        printf("\n\n YOUR ID IS : %d\n",idg);
        per[i].cus.id=idg;
        fprintf(p,"%d",per[i].cus.id);
        x;z;
        printf("\n Your good name : ");
        scanf(" %s",per[i].cus.name);
        fprintf(p,"%s",per[i].cus.name);
        x;z;
        printf("\n  Please enter your gender \n a:MALE \n b:FEMALE \n\t ANS -");
        scanf(" %c",&temp23);

        if(temp23=='a'||temp23=='A')
        {
          strcpy(per[i].gender,"MALE");
          per[i].score-=0.1;
          fprintf(p,"%s",per[i].gender);
          x;z;
        }
        else
        {
            strcpy(per[i].gender,"FEMALE");
            fprintf(p,"%s",per[i].gender);
            x;z;
        }
        printf("\n Mobile number : ");
        scanf(" %s",per[i].cus.phnum);
        fprintf(p,"%s",per[i].cus.phnum);
        x;z;
        printf("\n Email ID : ");
        scanf("%s",per[i].cus.email);
        fprintf(p,"%s",per[i].cus.email);
        x;z;
        printf("\n Enter your Date of birth(DD MM YYYY format) : ");
        scanf("%d %d %d",&per[i].cus.dd,&per[i].cus.mm,&per[i].cus.yy);
        fprintf(p,"%d %d %d",per[i].cus.dd,per[i].cus.mm,per[i].cus.yy);
        x;z;
        age(&per[i]);
        printf("\n\n Enter your Annual Income : ");
        scanf("%ld",&per[i].cus.income);
        fprintf(p,"%d",per[i].cus.income);
        x;z;
        printf("\n Are you Married(Y/N) ? ");
        scanf(" %c",&temp1);
        if(temp1=='y'||temp1=='Y')
        {
            strcpy(per[i].cus.maritial,"MARRIED");
            fprintf(p,"%s",per[i].cus.maritial);
            x;z;
        }
        else
        {
            strcpy(per[i].cus.maritial,"NOT-MARRIED");
            fprintf(p,"%s",per[i].cus.maritial);
            x;z;
        }
        printf("\n Enter your Nominee's Name(Only blood relation) : ");
        scanf(" %s",per[i].cus.nomnme);
        fprintf(p,"%s",per[i].cus.nomnme);
        x;z;
        printf("\n Enter your Relationship with Nominee : ");
        scanf(" %s",per[i].cus.nomrelation);
        fprintf(p,"%s",per[i].cus.nomrelation);
        x;z;
        printf("\nHeight(in cm) : ");
        scanf(" %f",&per[i].height);
        fprintf(p," %f",per[i].height);
        x;z;
        printf("\n Weight(in kg) : ");
        scanf(" %f",&per[i].weight);
        fprintf(p," %f",per[i].weight);
        x;z;
        per[i].bmi=(per[i].weight)/(per[i].height/100*per[i].height/100);
        fprintf(p," %f",per[i].bmi);
        x;z;
        printf("\n Your BMI is %f : ",per[i].bmi);
        if(per[i].bmi<18.5)
        {
            printf("\n\t\t\t !!You are underweight !!");
            per[i].score-=0.2;
        }
        else if((per[i].bmi>18.5)&&(per[i].bmi<24.9))
        {
            printf("\n\t\t\t !* You are perfect *!");
        }
        else if((per[i].bmi)<29.9)
        {
            printf("\n\t\t\t !# Sorry you are obese :(  #!");
            per[i].score-=0.1;
        }
        else if((per[i].bmi)<39.9)
        {
         printf("\n\t !$ Obese  $! ");
         per[i].score-=0.2;
        }
        else if ((per[i].bmi)>40)
        {
            printf("\n\t Morbidly obese !");
            per[i].score-=0.4;
        }
        smoke(&per[i]);
        alcohol(&per[i]);
        drugs(&per[i]);
        exercise(&per[i]);
        diet(&per[i]);
        stress(&per[i]);
        insomniac(&per[i]);
        healhis(&per[i]);
        accident(&per[i]);
        policy(&per[i]);
        month(&per[i]);
        system("cls");
        printf("\n\n\t\t\t ! !PLEASE CHECK YOUR DETAILS ! !\n");
        printf("\n 1.ID = %d.\n 2.NAME = %s.\n 3. GENDER(M/F) = %c.\n 4.MOBILE NUMBER = %s.\n 5.EMAIL-ID = %s.\n 6.DOB = %d/%d/%d.\n",per[i].cus.id,per[i].cus.name,per[i].gender,per[i].cus.phnum,per[i].cus.email,per[i].cus.dd,per[i].cus.mm,per[i].cus.yy);
        printf("\n 7.AGE = %d.\n 8.ANNUAL INCOME = %ld.\n 9.MARITIAL STATUS = %s.\n 10.HEIGHT = %f.\n 11.WEIGHT = %f.\n 12.SMOKE STATUS = %s.\n 13.ALCOHOLIC CONSUMPTION=%s.",per[i].age,per[i].cus.income,per[i].cus.maritial,per[i].height,per[i].weight,per[i].smoke,per[i].alcohol);
        printf("\n\n 14.DRUG BEHAVIOUR(Y/N) = %c.\n 15.EXERCISE = %s.\n 16.DIET = %s.\n 17.STRESS STATUS = %s.\n 18.SLEEPING SCHEDULE = %s per day.\n",per[i].drugs,per[i].exercise,per[i].diet,per[i].stress,per[i].insomniac);
        printf("\n 19.HEALTH HISTORY = %s.\n 20.ACCIDENT STATUS = %c.\n 21.POLICY SUGGESTED = %s.\n",per[i].healhis,per[i].accident,per[i].insurance);
        printf("\n 22.NOMINEE NAME=%s.\n 23.NOMINEE RELATIONSHIP=%s.\n\n\n 24.MONTHLY PAYMENT = %d.\n",per[i].cus.nomnme,per[i].cus.nomrelation,per[i].monthpay);
        printf("\n\t\t\t");
        system("pause");
        printf("\n\t\t\t Do you Want To Register(Y/N) ? ");
        scanf(" %c",&temp);
        if(temp=='y'||temp=='Y')
           {
            j++;
           }
            else
                break;
}
}
        void age(struct points *ag)
        {


      int month[] = {31,28,31,30,31,30,31,31,30,31,30,31 };

      current_date :
        printf("\n Please Enter Today's date in DD MM YYYY format : ");
      scanf("%d %d %d", &ag->cur_date.dd, &ag->cur_date.mm, &ag->cur_date.yyyy);

   if(ag->cur_date.dd > month[(ag->cur_date.mm) - 1])
    {
      printf("\n Please enter valid date : ");
      goto current_date;
    }
   if(ag->cur_date.dd > 31 || ag->cur_date.dd < 1 ||ag->cur_date.mm < 1 ||ag->cur_date.mm > 12||ag->cur_date.yyyy > 9999||ag->cur_date.yyyy < 2019)
    {
      printf("\n Please enter valid date : ");
      goto current_date;
    }



    date_of_birth :
    ag->dob.dd=ag->cus.dd;
    ag->dob.mm=ag->cus.mm;
    ag->dob.yyyy=ag->cus.yy;

 if(ag->dob.dd > month[ag->dob.mm - 1])
   {
     printf("\n Please enter valid date : ");
     goto date_of_birth;
   }

 if(ag->dob.dd > 31 || ag->dob.mm > 12||ag->dob.yyyy >= ag->cur_date.yyyy)
  {
      goto date_of_birth ;

  }
else

{    if (ag->dob.dd > ag->cur_date.dd)
      {
         ag->cur_date.dd += month[ag->dob.mm - 1];
          ag->cur_date.mm -= 1;
      }
      if (ag->dob.mm > ag->cur_date.mm)
      {
          ag->cur_date.yyyy -= 1;
          ag->cur_date.mm += 12;
      }

  printf("\n Your age as of now is : %d years %d months %d days. ",ag->cur_date.yyyy-ag->dob.yyyy,ag->cur_date.mm-ag->dob.mm,ag->cur_date.dd-ag->dob.dd);
    ag->age=ag->cur_date.yyyy-ag->dob.yyyy;
    fprintf(p,"%d",ag->age);
    x;z;
return 0;
  }
        }



        void smoke(struct points* sm)
        {
             char sheet,sheet11[3];
        int flag=0;
         printf("\n\n Do you smoke(y/n) ? ");
         scanf(" %c",&sheet11[0]);
         repeat:
         if(sheet11[0]=='y'||sheet11[0]=='Y')
         {
             flag=1;
             printf("\n\t\tWhat type of cigarette do you smoke?(Enter Your Choice.)\n a) Mild. \n b)Strong.  \n c) Normal.\n\t Ans--");
         scanf(" %c",&sheet11[1]);
         sheet=sheet11[1];
         if(sheet11[1]=='a')
         {
             sm->score-=0.1;
            printf("\n How many cigarettes do you smoke?(Enter Your Choice.)\n a) 1-3.\n b) One pack.\n c) More than one pack.\n\t Ans--");
            scanf(" %c",&sheet11[2]);
            if(sheet11[2]=='a')
           sm->score-=0.2;
           else if(sheet11[2]=='b')
              sm->score-=0.4;
           else
              sm->score-=0.6;
         }
         else if(sheet11[1]=='b')
          {

             sm->score-=0.2;
            printf("\n How many cigarettes do you smoke per day ?(Enter Your Choice)\n a) 1-3.\n b) One pack.\n c) More than one pack.\n\t Ans--");
            scanf(" %c",&sheet11[2]);
            if(sheet11[2]=='a')
            sm->score-=0.2;
            else if(sheet11[2]=='b')
                sm->score-=0.4;
            else if(sheet11[2]=='c')
                sm->score-=0.6;

          }
          else if(sheet11[1]=='c')
          {

             sm->score-=0.4;
            printf("\nHow many cigarettes do you smoke per day ?(Enter Your Choice)\n a) 1-3.\n b) One pack.\n c) More than one pack.\n\t Ans--");
            scanf(" %c",&sheet11[2]);

            if(sheet11[2]=='a')
            sm->score-=0.2;
            else if(sheet11[2]=='b')
                sm->score-=0.4;
            else if(sheet11[2]=='c')
                sm->score-=0.6;
         }

          }

        else if(sheet11[0]=='n'||sheet11[0]=='N')
            {
                strcpy(sm->smoke,"NULL");
fputs("NULL",p);
x;z;
            }
            else
            {
                printf("Enter your Response Properly(Y/N)");
                scanf(" %c",sheet11[0]);
                goto repeat;
            }
if(flag==1)
{
    switch(sheet)
    {

    case 'a':
        strcpy(sm->smoke,"MILD");
        fputs("MILD",p);
        x;z;
        break;
    case 'b':
        strcpy(sm->smoke,"STRONG");
        fputs("STRONG",p);
        x;z;
        break;
    case 'c':
        strcpy(sm->smoke,"REGULARLY");
        fputs("REGULARLY",p);
        x;z;
        break;
    }
}
        }
void alcohol(struct points* al)
{

    char sheet2;
    int flag=0;
    printf("\nDo you drink(y/n) : ");
    scanf(" %c",&al->alcohol[0]);
    if(al->alcohol[0]=='y'||al->alcohol[0]=='Y')
    {

        flag=1;
        printf("\n\t\tHow about your drinking routine ?(Enter Your Choice)\n a) Rarely.\n b) Once in a month.\n c) 2-4 times a month.\n d) Daily.\n e) Constantly drinking.\n\t Ans--");
        scanf(" %c",&al->alcohol[1]);
        sheet2=al->alcohol[1];
        if(al->alcohol[1]=='a')
        al->score-=0.3;
        else if(al->alcohol[1]=='b')
            al->score-=0.5;
        else if(al->alcohol[1]=='c')
            al->score-=0.7;
    else if(al->alcohol[1]=='d')
        al->score-=1.0;
        else al->score-=2.0;
    }
    else
      {
    strcpy(al->alcohol,"NILL");
    fputs("NILL",p);
    x;z;
      }
    if(flag==1)
    {
        switch(sheet2)
        {
        case 'a':
            strcpy(al->alcohol,"RARELY");
            fputs("RARELY",p);
            x;z;
            break;
        case 'b':
            strcpy(al->alcohol,"ONCE MONTH");
            fputs("ONCE MONTH",p);
            x;z;
            break;
        case 'c':
            strcpy(al->alcohol,"2-4 TIMES A MONTH");
            fputs("2-4 TIMES A MONTH",p);
            x;z;
            break;
        case 'd':
            strcpy(al->alcohol,"DAILY");
            fputs("DAILY",p);
            x;z;
            break;
        case 'e':
            strcpy(al->alcohol,"CONSTANTLY");
            fputs("CONSTANTLY",p);
            x;z;
            break;
        }
    }
}

void drugs(struct points* dr)
{

    printf("\n Do you consume any drugs(y/n)?");
    scanf(" %c",&dr->drugs);
    if(dr->drugs=='y'||dr->drugs=='Y')
       {
        dr->score-=0.5;
        fputs("JUNKIE",p);
        x;z;
       }
       else
       {
        fputs("NILL",p);
        x;z;
       }
}
void exercise(struct points* ex)
{
    int flag=0;
    char sheet3,sheet4;
    printf("\n Do you do exercise(y/n) ? ");
    scanf(" %c",&sheet3);
    if(sheet3=='y'||sheet3=='Y')
    {
        flag=1;
        printf("\n\t\t Which of the following exercise you do?(Enter Your Choice.)\n a) Yoga.\n b) Gym.\n c) Jogging.\n\t Ans--");
        scanf(" %c",&sheet4);
    }
    else
    {
        strcpy(ex->exercise,"NULL");
        ex->score-=0.5;
        fputs("NO",p);
        x;z;
    }
        if(flag==1)
        {
            switch(sheet4)
            {
            case 'a':
                strcpy(ex->exercise,"YOGA");
                fputs("YOGA",p);
                x;z;
                break;
            case 'b':
                strcpy(ex->exercise,"GYM");
                fputs("GYM",p);
                x;z;
                break;
            case 'c':
                strcpy(ex->exercise,"JOGGING");
                fputs("JOGGING",p);
                x;z;
                break;
            }
        }


}
void diet(struct points* di)
{
    char sheet5;
    printf("\n\t\t What kind of diet do you follow?(Enter Your Choice.)\n a) Healthy. \n b) Average. \n c) Fast food.\n\t Ans--");
    scanf(" %c",&sheet5);
    switch(sheet5)
    {

    case 'a':{
        strcpy(di->diet,"HEALTHY");
        fputs("HEALTHY",p);
        x;z;
        break;
    }
    case 'b':
    {
    strcpy(di->diet,"AVERAGE");
    fputs("AVERAGE",p);
    x;z;
    break;
    }
case'c':
   {
    strcpy(di->diet,"FAST FOOD");
    fputs("FASTFOOD",p);
    x;z;
    break;
   }
}
}
void stress(struct points* st)
{
    char sheet6;
    printf("\n\t\t How often are you stressed ?(Enter Your Choice.) \n a) Rarely \n b) Often \n c) Never\n\t Ans--");
    scanf(" %c",&sheet6);
    switch(sheet6)
    {
    case 'a':
       {
        strcpy(st->stress,"Rarely");
        st->score-=0.5;
        fputs("RARELY",p);
        x;z;
        break;
       }
    case 'b':
        {
          strcpy(st->stress,"Often");
        st->score-=0.7;
        fputs("OFTEN",p);
        x;z;
        break;
        }
    case 'c':
        {
         strcpy(st->stress,"Never");
        st->score-=0;
        fputs("NEVER",p);
        x;z;
        break;
        }

    }
}
void insomniac(struct points* in)
{
    char sheet7;
    printf("\n\t\tHow many hours do you sleep a day?\n a) More than 10 hours.\n b) Proper sleep.\n c) Less than five hours.\n d)Very less.\n\t Ans--");
    scanf(" %c",&sheet7);
    switch(sheet7)
    {
    case 'a':
{
         strcpy(in->insomniac,">Than 10 hours");
        in->score-=0.1;
        fputs("MORE THAN TEN HOURS",p);
        x;z;
        break;
    }
    case 'b':{

        strcpy(in->insomniac,"Proper sleep");;
        in->score-=0.0;
        fputs("PROPER SLEEP",p);
        x;z;
        break;
    }
    case 'c':{
        strcpy(in->insomniac,"Less than 5 hours");
        in->score-=0.5;
        fputs("LESS THAN FIVE HOURS",p);
        x;z;
        break;
    }
    case 'd':{
        strcpy(in->insomniac,"Insomniac");
        in->score-=1.0;
        fputs("INSOMNIAC",p);
        x;z;
        break;}
    }
}
void healhis(struct points* he)
{
    char sheet8,sheet9;
    printf("\n\t\t Have you been through any major disease?(Enter Your Choice.)\n a) Cardiac Arrest.\n b) Appendix.\n c) Organ Transplantation.\n d) Kidney/Liver Failure.\n e) Any other.\n f) Never been affected.\n\t Ans--");
    scanf(" %c",&sheet8);
    switch(sheet8)
    {
    case 'a':{
        printf("\n Do you still undergo medication for cardiac arrest?(Enter Your Choice.)\n a) Yes.\n b) No.\n\t Ans--");
        scanf(" %c",&sheet9);
        strcpy(he->healhis,"Cardiac Arrest");
        fputs("CARDIAC ARREST",p);
        x;z;
        if(sheet9=='y'||sheet9=='Y')
            he->score-=0.5;
        else
            he->score-=0.3;
        break;
    }
    case 'b':{
          printf("\n Do you still undergo medication for appendix?(Enter Your Choice.) \n a) Yes.\n b) No.\n Ans--");
        scanf(" %c",&sheet9);
        strcpy(he->healhis,"Appendix");
        fputs("APPENDIX",p);
        x;z;
        if(sheet9=='y'||sheet9=='Y')
            he->score-=0.5;
        else
            he->score-=0.3;
        break;
    }
    case 'c':{

          printf("\n Do you still undergo medication for Organ Transplantation?(Enter Your Choice.)\n a) Yes.\n b) No.\n Ans--");
        scanf(" %c",&sheet9);
        strcpy(he->healhis,"Organ Transplantation");
        fputs("ORGAN TRANSPLANTATION",p);
        x;z;
        if(sheet9=='y'||sheet9=='Y')
            he->score-=0.5;
        else
            he->score-=0.3;
        break;
    }
    case 'd':{}
          printf("\n Do you still undergo medication for Kidney/liver failure?(Enter Your Choice.)\n a)Yes.\n b) No.\n Ans--");
        scanf(" %c",&sheet9);
        strcpy(he->healhis,"Kidney/Liver failure");
        fputs("KIDNEY/LIVER FAILURE",p);
        x;z;
        if(sheet9=='y'||sheet9=='Y')
            he->score-=0.5;
        else
            he->score-=0.3;
        break;
    case 'e':{
             printf("\n Do you still undergo medication for other illness?(Enter Your Choice.)\n a) Yes.\n b) No.\n Ans--");
        scanf(" %c",&sheet9);
        strcpy(he->healhis,"Other illness");
        fputs("OTHER ILLNESS",p);
        x;z;
        if(sheet9=='y'||sheet9=='Y')
            he->score-=0.5;
        else
            he->score-=0.3;
        break;
    }
    default:
        strcpy(he->healhis,"NULL");
        fputs("NULL",p);
    }
}

void accident(struct points* ac)
{
char sheet10;
    printf("\n\t\t Have you faced any serious accidents/Trauma(y/n)?");
    scanf(" %c",&ac->accident);
    if(ac->accident=='y'||ac->accident=='Y')
       {printf("\n How many ?(Enter Your Choice.)\n a) More than 3.\n b) Less than 3.\n c) Never.\n Ans--");
       scanf(" %c",&sheet10);
       if(sheet10=='a')
        {
            ac->accident-=0.4;
        }
        else
            ac->accident-=0.3;
        fputs("YES",p);
        x;z;
       }
       else
       {
        fputs("NO",p);
        x;z;
       }
}

void policy(struct points* po)
{
    if ((po->score>=0)&&(po->score<=2))
    {
        strcpy(po->insurance,"SUN LIFE");
        fputs("SUN LIFE",p);
        x;z;
    }
    else if((po->score>2)&&(po->score<=4))
    {

                strcpy(po->insurance,"LIFE ELITE SECURE");
        fputs("LIFE ELITE SECURE",p);
        x;z;
    }
    else if((po->score>4)&&(po->score<=6))
    {

                strcpy(po->insurance,"PAAAKCA LIFE eSHIELD");
        fputs("PAAKCA LIFE eSHIELD",p);
        x;z;
    }
    else if((po->score>6)&&(po->score<=8))
    {
             strcpy(po->insurance,"PRAGATI PLAN");
     fputs("PRAFATI PLAN",p);
     x;z;
    }
    else
    {
              strcpy(po->insurance,"AVIVA I-LIFE");
    fputs("AVIVA I-LIFE",p);
    x;z;
    }
    }
void month(struct points* mo)
{


    if(mo->insurance=="SUN LIFE")
    {
        if(mo->age<50)
        {
            mo->monthpay=3500;
            fprintf(p,"%d",mo->monthpay);
            x;z;
        }
        else
            {
            mo->monthpay=4500;
            fprintf(p,"%d",mo->monthpay);
            x;z;
            }
    }
    else if(mo->insurance=="LIFE ELITE SECURE")
    {
        if(mo->age<50)
        {
            mo->monthpay=3000;
            fprintf(p,"%d",mo->monthpay);
            x;z;
        }
        else
        {
            mo->monthpay=4000;
            fprintf(p,"%d",mo->monthpay);
            x;z;
        }
    }
    else if(mo->insurance=="PAAAKCA LIFE eSHIELD")
    {
        if(mo->age<50)
        {
            mo->monthpay=3300;
            fprintf(p,"%d",mo->monthpay);
            x;z;
        }
        else
            {
            mo->monthpay=4300;
            fprintf(p,"%d",mo->monthpay);
            x;z;
            }
    }
    else if(mo->insurance=="PRAGATI PLAN")
    {
         if(mo->age<50)
        {
            mo->monthpay=2000;
            fprintf(p,"%d",mo->monthpay);
            x;z;
        }
        else
            {
            mo->monthpay=3000;
            fprintf(p,"%d",mo->monthpay);
            x;z;
            }
    }
    else
    {
        if(mo->age<50)
        {
            mo->monthpay=1800;
            fprintf(p,"%d",mo->monthpay);
            x;z;
        }
        else
            {
            mo->monthpay=2800;
            fprintf(p,"%d",mo->monthpay);
            x;z;
            }

    }
}

