#include<stdio.h>
int main()
{
    int a,hotel,dish,qty,price1,price2,price3;
    printf("\t\t FOOD APP \n");
    printf("\n 1.VEG HOTEL \t \t \t 2.NON-VEG HOTEL \n");
    scanf("\n %d",&a);
    switch(a)
        {

        case 1:{
            printf("THANK YOU FOR SELECTING VEG HOTEL \n");
            printf("PLEASE SELECT YOUR FAV-HOTEL \n");
            printf("\n 1.A2B \n 2.MURGAN IDLY \n 3.VASANTHA BHAVAN \n");
            scanf("%d",&hotel);

            switch(hotel)
                {

                    case 1:{
                        printf("THANK YOU FOR SELECTING A2B \n");
                        dishs:
                        printf("PLEASE SELECT YOUR DISH \n");
                        printf("\n 1.POORI \n 2.PONGAL \n 3.IDLY \n");
                        scanf("%d",&dish);

                        switch(dish)
                            {
                                case 1:{
                                    printf("THANK YOU FOR SELECTING POORI \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price1=qty*20;
                                    printf("\n TOTAL :- %d",price1);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto dishs;


                                break;}

                                case 2:{
                                    printf("THANK YOU FOR SELECTING PONGAL \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price2=qty*30;
                                    printf("\n TOTAL :- %d",price2);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto dishs;


                                break;}

                                case 3:{
                                    printf("THANK YOU FOR SELECTING IDLY \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price3=qty*40;
                                    printf("\n TOTAL :- %d",price3);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto dishs;


                                break;}
                            }
                                    printf("\t \t \t TOTAL AMOUNT :- %d",price1+price2+price3);
                                    printf("\n \t \t THANK YOU SIR PLEASE VIST AGAIN NEXT TIME");

                    break;}


                    case 2:{
                        printf("THANK Y`OU FOR SELECTING MURGAN IDLY \n");
                        dishes:
                        printf("PLEASE SELECT YOUR DISH \n");
                        printf("\n 1.POORI \n 2.PONGAL \n 3.IDLY \n");
                        scanf("%d",&dish);

                        switch(dish)
                            {
                                case 1:{
                                    printf("THANK YOU FOR SELECTING POORI \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price1=qty*20;
                                    printf("\n TOTAL :- %d",price1);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto dishes;

                                break;}

                                case 2:{
                                    printf("THANK YOU FOR SELECTING PONGAL \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price2=qty*30;
                                    printf("\n TOTAL :- %d",price2);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto dishes;

                                break;}

                                case 3:{
                                    printf("THANK YOU FOR SELECTING IDLY \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price3=qty*40;
                                    printf("\n TOTAL :- %d",price3);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto dishes;

                                break;}
                            }
                                    printf("\t \t \t TOTAL AMOUNT :- %d",price1+price2+price3);
                                    printf("\n \t \t THANK YOU SIR PLEASE VIST AGAIN NEXT TIME");
                    break;}


                    case 3:{
                        printf("THANK YOU FOR SELECTING VASANTHA BHAVAN \n");
                        dish:
                        printf("PLEASE SELECT YOUR DISH \n");
                        printf("\n 1.POORI \n 2.PONGAL \n 3.IDLY \n");
                        scanf("%d",&dish);

                        switch(dish)
                            {
                                case 1:{
                                    printf("THANK YOU FOR SELECTING POORI \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price1=qty*20;
                                    printf("\n TOTAL :- %d",price1);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto dishes;


                                break;}

                                case 2:{
                                    printf("THANK YOU FOR SELECTING PONGAL \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price2=qty*30;
                                    printf("\n TOTAL :- %d",price2);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto dishes;


                                break;}

                                case 3:{
                                    printf("THANK YOU FOR SELECTING IDLY \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price3=40;
                                    printf("\n TOTAL :- %d",price3);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto dishes;


                                break;}
                            }
                                    printf("\t \t \t TOTAL AMOUNT :- %d",price1+price2+price3);
                                    printf("\n \t \t THANK YOU SIR PLEASE VIST AGAIN NEXT TIME");
                    break;}
                }
        break;}

        case 2:{
            printf("THANK YOU FOR SELECTING NON-VEG HOTEL \n");
            printf("PLEASE SELECT YOUR FAV-HOTTEL \n");
            printf("\n 1.PANDIYAN \n 2.MALABAR \n 3.KADHARBAI \n");
            scanf("%d",&hotel);


            switch(hotel)
                {

                    case 1:{
                        printf("THANK YOU FOR SELECTING PANDIYAN \n");
                        dieshs:
                        printf("PLEASE SELECT YOUR DISH \n");
                        printf("\n 1.CHICKEN RICE \n 2.CHICKEN NOODELS \n 3.CHICKEN BRIYANI \n");
                        scanf("%d",&dish);

                        switch(dish)
                            {
                                case 1:{
                                    printf("THANK YOU FOR SELECTING CHICKEN RICE \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price1=qty*20;
                                    printf("\n TOTAL :- %d",price1);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto dieshs;


                                break;}

                                case 2:{
                                    printf("THANK YOU FOR SELECTING CHICKEN NOODELS \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price2=qty*30;
                                    printf("\n TOTAL :- %d",price2);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto dieshs;


                                break;}

                                case 3:{
                                    printf("THANK YOU FOR SELECTING CHICKEN BRIYANI \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price3=qty*40;
                                    printf("\n TOTAL :- %d",price3);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto dieshs;


                                break;}
                            }

                                    printf("\t \t \t TOTAL AMOUNT :- %d",price1+price2+price3);
                                    printf("\n \t \t THANK YOU SIR PLEASE VIST AGAIN NEXT TIME");

                    break;}


                    case 2:{
                        printf("THANK YOU FOR SELECTING MALABAR \n");
                        deishs:
                        printf("PLEASE SELECT YOUR DISH \n");
                        printf("\n 1.CHICKEN RICE \n 2.CHICKEN NOODELS \n 3.CHICKEN BRIYANI \n");
                        scanf("%d",&dish);

                        switch(dish)
                            {
                                case 1:{
                                    printf("THANK YOU FOR SELECTING CHICKEN RICE \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price1=qty*20;
                                    printf("\n TOTAL :- %d",price1);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto deishs;



                                break;}

                                case 2:{
                                    printf("THANK YOU FOR SELECTING CHICKEN NOODELS \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price2=qty*30;
                                    printf("\n TOTAL :- %d",price2);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto deishs;


                                break;}

                                case 3:{
                                    printf("THANK YOU FOR SELECTING CHICKEN BRIYANI \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price3=qty*40;
                                    printf("\n TOTAL :- %d",price3);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto deishs;


                                break;}
                            }

                                    printf("\t \t \t TOTAL AMOUNT :- %d",price1+price2+price3);
                                    printf("\n \t \t THANK YOU SIR PLEASE VIST AGAIN NEXT TIME");

                    break;}


                    case 3:{
                        printf("THANK YOU FOR SELECTING KADHARBAI \n");
                        dishss:
                        printf("PLEASE SELECT YOUR DISH \n");
                        printf("\n 1.CHICKEN RICE \n 2.CHICKEN NOODELS \n 3.CHICKEN BRIYANI \n");
                        scanf("%d",&dish);

                        switch(dish)
                            {
                                case 1:{
                                    printf("THANK YOU FOR SELECTING CHICKEN RICE \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price1=qty*20;
                                    printf("\n TOTAL :- %d",price1);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto dishss;


                                break;}

                                case 2:{
                                    printf("THANK YOU FOR SELECTING CHICKEN NOODELS \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price2=qty*30;
                                    printf("\n TOTAL :- %d",price2);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto dishss;


                                break;}

                                case 3:{
                                    printf("THANK YOU FOR SELECTING CHICKEN BRIYANI \n");
                                    printf("PLEASE ENTER THE QUTANTY \n");
                                    scanf("%d",&qty);
                                    price3=qty*40;
                                    printf("\n TOTAL :- %d",price3);
                                    printf("\n\n SELECT \n 0.CONTINUE \n 1.BILLING \n");
                                    scanf("\n%d",&a);
                                    if (a==0)
                                    goto dishss;


                                break;}
                            }
                                    printf("\t \t \t TOTAL AMOUNT :- %d",price1+price2+price3);
                                    printf("\n \t \t THANK YOU SIR PLEASE VIST AGAIN NEXT TIME");



                    break;}
                }
        break;}

        }
    return 8;
}
