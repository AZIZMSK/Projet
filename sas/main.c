#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix, i, choice;
    int nombre_du_compte=0, counter, number_of_accounts;
    int operation;
    char T_CIN[100][10],T_Nom_Prenom[100][20];
    double T_Montant[100],Retrait,Depot;
    char cin[100];
    menu_principal:
do {
       do{
            printf("choisisser un choix:\n1.Introduire un compte boncaire:\n2.Introduire plusieurs comptes boncaires:\n3.Operations:\n4.Affichage:\n5.Fidelisation:\n6.Quitter l application:\n");
        scanf("%d",&choix);
        }while(choix<1 || choix>6);
    switch(choix){
 // 1.Introduire un compte boncaire:
        case 1:{
                printf("CIN:\t");
                scanf("%s",T_CIN[nombre_du_compte]);
                printf("Nom_Prenom:\t");
                scanf("%s",T_Nom_Prenom[nombre_du_compte]);
                printf("Montant:\t");
                scanf("%d",&T_Montant[nombre_du_compte]);
                nombre_du_compte++;
                system("cls");
                }
        break;
        case 2:
 //2.Introduire plusieurs comptes boncaires:
                printf("Entrez le nombre de comptes que vous souhaitez creer:\n");
                scanf("%d",&number_of_accounts);
                counter=nombre_du_compte;
                  for(i=counter;i<number_of_accounts+counter;i++){
                      printf("CIN:\t");
                      scanf("%s", T_CIN[nombre_du_compte]);
                      printf("Nom_Prenom:\t");
                      scanf("%s",T_Nom_Prenom[nombre_du_compte]);
                      printf("Montant:\t");
                      scanf("%lf",&T_Montant[nombre_du_compte]);
                      nombre_du_compte++;
                    }system("cls");
                     goto  menu_principal;


        break;
        case 3:
 //3.Operations:
               if(nombre_du_compte==0){
                    system("cls");
               printf("svp creer un compt:\n\n");
               goto  menu_principal;
               }
            do{ printf("entrez le type de votre operation:\n1.Retrait:\n2.Depot:\n");
                scanf("%d",&operation);
            }while(operation<1 || operation>2);
                   system("cls");
                   switch(operation){
                        case 1:
                                printf("Les comptes disponible:\n");
                                for(i=0;i<nombre_du_compte;i++){
                                    printf("%d:%s\n",i+1, T_CIN[i]);
                                }
                                    printf("choisir un compte:\n");
                                    scanf("%d",&choice);
                                printf("Entrez le montant que vous souhaitez retirer:");
                                scanf("%lf",&Retrait);
                                  if(T_Montant[choice-1]>Retrait){
                                   T_Montant[choice-1] -=   Retrait;
                                printf("Le montant restant: ");
                                printf("%.2lf",T_Montant[choice-1]);
                                  }else
                                  printf("Votre solde est inssufissante pour effectuer cette operation\n");
                        break;
                        case 2:
                                system("cls");
                                printf("1.2.Depot:");
                                scanf("%lf",Depot);

                        break;
                }
        case 4:{
//4.Affichage:
                }
        break;
        case 5:{
//5.Fidelisation:
                }
        break;
       /* case 6:{
//6.Quitter l application:
                }
        break;
        default:{
            printf("try again\n\n");
            goto  menu_principal;
             }*/
    }
}while(choix!=6);



    return 0;
}
