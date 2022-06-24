#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
//Global Variable
int square[26]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25}; //Board Position
int checkWin();
void drawboard();
int main(){
    int player=1,i,choice;
    char mark;
    do{
        drawboard();
        player=(player%2)?1:2;
        printf("\nPlayer %d, Enter your Choice : ",player);
        scanf("%d",&choice);
        mark=(player==1)?'X':'O';
        if(choice==1 && square[1]==1){
            square[1]=mark;
        }else if(choice==2 && square[2]==2){
            square[2]=mark;
        }else if(choice==3 && square[3]==3){
            square[3]=mark;
        }else if(choice==4 && square[4]==4){
            square[4]=mark;
        }else if(choice==5 && square[5]==5){
            square[5]=mark;
        }else if(choice==6 && square[6]==6){
            square[6]=mark;
        }else if(choice==7 && square[7]==7){
            square[7]=mark;
        }else if(choice==8 && square[8]==8){
            square[8]=mark;
        }else if(choice==9 && square[9]==9){
            square[9]=mark;
        }else if(choice==10 && square[10]==10){
            square[10]=mark;
        }else if(choice==11 && square[11]==11){
            square[11]=mark;
        }else if(choice==12 && square[12]==12){
            square[12]=mark;
        }else if(choice==13 && square[13]==13){
            square[13]=mark;
        }else if(choice==14 && square[14]==14){
            square[14]=mark;
        }else if(choice==15 && square[15]==15){
            square[15]=mark;
        }else if(choice==16 && square[16]==16){
            square[16]=mark;
        }else if(choice==17 && square[17]==17){
            square[17]=mark;
        }else if(choice==18 && square[18]==18){
            square[18]=mark;
        }else if(choice==19 && square[19]==19){
            square[19]=mark;
        }else if(choice==20 && square[20]==20){
            square[20]=mark;
        }else if(choice==21 && square[21]==21){
            square[21]=mark;
        }else if(choice==22 && square[22]==22){
            square[22]=mark;
        }else if(choice==23 && square[23]==23){
            square[23]=mark;
        }else if(choice==24 && square[24]==24){
            square[24]=mark;
        }else if(choice==25 && square[25]==25){
            square[25]=mark;
        }else if(choice>25 || choice<0){
            printf("Oops! Invalid Input!\nPress any key to continue!");
            player--;
            getch();
        }else{
            printf("Oops! Position already taken!\nPress any key to continue!");
            player--;
            getch();
        }
        i=checkWin();
        player++;
    } while (i==-1);

    drawboard();
    if(i==1){
        printf("\n====> Player %d won!!",--player);
        getch();
        return 0;
    }
    else{
        printf("\n====> Match Draw!!");
        getch();
        return 0;
    }
}
int checkWin(){
//Game's Logic : For 3x3 Tic Tac Toe, 3 in a row means Win... In our case(5x5), we choose 4 in a row means Win
    //Checking Horizontal Rows for Win
        //row1
    if(square[1]==square[2] && square[2]==square[3] && square[3]==square[4])
        return 1;
    else if(square[2]==square[3] && square[3]==square[4] && square[4]==square[5])
        return 1;
        //row2
    else if(square[6]==square[7] && square[7]==square[8] && square[8]==square[9])
        return 1;
    else if(square[7]==square[8] && square[8]==square[9] && square[9]==square[10])
        return 1;
        //row3
    else if(square[11]==square[12] && square[12]==square[13] && square[13]==square[14])
        return 1;
    else if(square[12]==square[13] && square[13]==square[14] && square[14]==square[15])
        return 1;
        //row4
    else if(square[16]==square[17] && square[17]==square[18] && square[18]==square[19])
        return 1;
    else if(square[17]==square[18] && square[18]==square[19] && square[19]==square[20])
        return 1;
        //row5
    else if(square[21]==square[22] && square[22]==square[23] && square[23]==square[24])
        return 1;
    else if(square[22]==square[23] && square[23]==square[24] && square[24]==square[25])
        return 1;

    //Checking Vertical Rows for Win
        //col1
    if(square[1]==square[6] && square[6]==square[11] && square[11]==square[16])
        return 1;
    else if(square[6]==square[11] && square[11]==square[16] && square[16]==square[21])
        return 1;
        //col2
    else if(square[2]==square[7] && square[7]==square[12] && square[12]==square[17])
        return 1;
    else if(square[7]==square[7] && square[12]==square[17] && square[17]==square[22])
        return 1;
        //col3
    else if(square[3]==square[8] && square[8]==square[13] && square[13]==square[18])
        return 1;
    else if(square[8]==square[13] && square[13]==square[18] && square[18]==square[23])
        return 1;
        //col4
    else if(square[4]==square[9] && square[9]==square[14] && square[14]==square[19])
        return 1;
    else if(square[9]==square[14] && square[14]==square[19] && square[19]==square[24])
        return 1;
        //col5
    else if(square[5]==square[10] && square[10]==square[15] && square[15]==square[20])
        return 1;
    else if(square[10]==square[15] && square[15]==square[20] && square[20]==square[25])
        return 1;

    //Checking Diagonal Rows
    //left diagonals - d1,d2,d3,d4
    //right diagonals - d5,d6,d7,d8
        //d1
    else if(square[2]==square[8] && square[8]==square[14] && square[14]==square[20])
        return 1;
        //d2
    else if(square[1]==square[7] && square[7]==square[13] && square[13]==square[19])
        return 1;
        //d3
    else if(square[7]==square[13] && square[13]==square[19] && square[19]==square[25])
        return 1;
        //d4
    else if(square[6]==square[12] && square[12]==square[18] && square[18]==square[24])
        return 1;
        //d5
    else if(square[4]==square[8] && square[8]==square[12] && square[12]==square[16])
        return 1;
        //d6
    else if(square[5]==square[9] && square[9]==square[13] && square[13]==square[17])
        return 1;
        //d7
    else if(square[9]==square[13] && square[13]==square[17] && square[17]==square[21])
        return 1;
        //d8
    else if(square[10]==square[14] && square[14]==square[18] && square[18]==square[22])
        return 1;

    //Checking for Match Draw
    else if(square[1]!=1  && square[2]!=2 && square[3]!=3 && square[4]!=4 && square[5]!=5 && square[6]!=6 && square[7]!=7 && square[8]!=8 && square[9]!=9 && square[10]!=10 && square[11]!=11 && square[12]!=12
         && square[13]!=13 && square[14]!=14 && square[15]!=15 && square[16]!=16 && square[17]!=17 && square[18]!=18 && square[19]!=19 && square[20]!=20 && square[21]!=21 && square[22]!=22 && square[23]!=23 && square[24]!=24 && square[25]!=25)
        return 0;
    //Continuing the Game
    else
        return -1;
}
void drawboard(){
    system("cls");
    printf("\n\nTic Tac Toe - 5x5 Multiplayer \n\n");
    printf("Player 1 (X) and Player 2 (O)\n\n\n");
//5x5 Tic Tac Toe Board Starts
    printf("        |        |        |        |\n");
    for(int i=1;i<26;i++){
        if(i>=1 && i<=10){
            if(square[i]=='X' || square[i]=='O'){
                if(i%5==0)
                    printf("    %c",square[i]);
                else    
                printf("    %c   |",square[i]);
            }
            else if(i%5==0)
                printf("    %d",square[i]);
            else
                printf("    %d   |",square[i]);
            if(i%5==0){
                printf("\n________|________|________|________|________\n");
                printf("        |        |        |        |\n");
            }
        }else if(i>=11 && i<=20){
            if(square[i]=='X' || square[i]=='O'){
                if(i%5==0)
                    printf("    %c",square[i]);
                else
                    printf("    %c   |",square[i]);
            }
            else if(i%5==0)
                printf("    %d",square[i]);
            else
                printf("    %d  |",square[i]);
            if(i%5==0){
                printf("\n________|________|________|________|________\n");
                printf("        |        |        |        |\n");
            }
        }else{
            if(square[i]=='X' || square[i]=='O'){
                if(i%5==0)
                    printf("    %c",square[i]);
                else
                    printf("    %c   |",square[i]);
            }
            else if(i%5==0)
                printf("    %d",square[i]);
            else
                printf("    %d  |",square[i]);
            if(i%5==0){
                printf("\n        |        |        |        |\n");
            }
        }
    }

}