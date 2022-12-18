#include <bits/stdc++.h>
using namespace std;
void prnt(vector<char>board)
{
	//Prints the board
	printf(" __ __ __\n");
	printf("|%c |%c |%c |\n",board[1],board[2],board[3]);
	printf("|__|__|__|\n");
	printf("|%c |%c |%c |\n",board[4],board[5],board[6]);
	printf("|__|__|__|\n");
	printf("|%c |%c |%c |\n",board[7],board[8],board[9]);
	printf("|__|__|__|\n\n");
}
int main() {
    int n=10,choice,i;
    vector<char>board(n,' ');
    cout<<"TIC-TAC-TOE designed by VINAY GOTTIPAMULA"<<endl;
    cout<<"Start the Game:\n";
    prnt(board);
    cout<<"Choose option: (1-9)"<<endl;
    for(i=0;i<n;i++)
    {
        //takes input from user1 and user2
        if(i==n-1)
	    {
	        cout<<"--DRAW--"<<endl;
	    } 
        else if(i%2==0)
        {
            cout<<"Player1(X):";
            cin>>choice;
            if(choice>9 || choice<1 || board[choice]!=' ')
            {
            	i--;
            	cout<<"Enter Valid Input"<<endl;            	
			}
			else
            {
            	board[choice]='X';
            	prnt(board);
			}
        }
        else
        {
            cout<<"Player2(O):";
            cin>>choice;
            if(choice>9 || choice<1 || board[choice]!=' ')
            {
            	i--;
            	cout<<"Enter Valid Input"<<endl;            	
			}
			else
            {
            	board[choice]='O';
            	prnt(board);
			}	
        }
        
        if(//Horizontal Winning conditions
		   (board[1]==board[2] && board[3]==board[1] && board[1]=='X') ||
           (board[4]==board[5] && board[6]==board[4] && board[4]=='X') ||
           (board[7]==board[8] && board[9]==board[7] && board[7]=='X') ||
           //Vertical Winning conditions
           (board[1]==board[4] && board[7]==board[1] && board[1]=='X') ||
           (board[2]==board[5] && board[8]==board[2] && board[2]=='X') ||
           (board[3]==board[6] && board[9]==board[3] && board[3]=='X') ||
           //Diagonal Winning conditions
           (board[1]==board[5] && board[9]==board[1] && board[1]=='X') ||           
           (board[3]==board[5] && board[7]==board[3] && board[3]=='X'))
        {
            cout<<"PLAYER 1 WON"<<endl;
            break;
        }
        else if(//Horizontal Winning conditions
		   (board[1]==board[2] && board[3]==board[1] && board[1]=='O') ||
           (board[4]==board[5] && board[6]==board[4] && board[4]=='O') ||
           (board[7]==board[8] && board[9]==board[7] && board[7]=='O') ||
           //Vertical Winning conditions
           (board[1]==board[4] && board[7]==board[1] && board[1]=='O') ||
           (board[2]==board[5] && board[8]==board[2] && board[2]=='O') ||
           (board[3]==board[6] && board[9]==board[3] && board[3]=='O') ||
           //Diagonal Winning conditions
           (board[1]==board[5] && board[9]==board[1] && board[1]=='O') ||           
           (board[3]==board[5] && board[7]==board[3] && board[3]=='O'))
        {
            cout<<"PLAYER 2 WON"<<endl;
            break;
        }    
    }
    return 0;
}
