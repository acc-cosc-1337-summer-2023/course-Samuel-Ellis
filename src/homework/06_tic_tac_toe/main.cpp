#include"tic_tac_toe.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include<memory>
using std::cout; using std::cin; using std::string; using std::unique_ptr; using std::make_unique;

int main() 
{
	int size;
	unique_ptr<TicTacToe> game;
	string first_player;
	char user_choice = 'y';


	do
	{
		cout<<"Choose a board size(3 or 4): ";
		cin>>size;
		while (size!=3&&size!=4)
		{
			cout<<"That is not a valid input\n";
			cout<<"Choose a board size(3 or 4): ";
			cin>>size;
		}
		if(size == 3){
			game = make_unique<TicTacToe3>(TicTacToe3());
		} else {
			game = make_unique<TicTacToe4>(TicTacToe4());
		}
		cout<<"Enter first player(X or O): ";
		cin>>first_player;
		while (first_player!="X"&&first_player!="O")
		{
			cout<<"That is not a valid input\n";
			cout<<"Enter first player(X or O): ";
			cin>>first_player;
		}
		game->start_game(first_player);
		int position;
		while(!game->game_over()){
			cout<<"Enter a position: ";
			cin>>position;
			if(size==3){
				while (position != 1&&position != 2&&position != 3&&position != 4&&position != 5&&position != 6&&position != 7&&position != 8&&position != 9)
				{
					cout<<"That is not a valid input\n";
					cout<<"Enter a position(1 through 9): ";
					cin>>position;
				}
			} else {
				while (position != 1&&position != 2&&position != 3&&position != 4&&position != 5&&position != 6&&position != 7&&position != 8&&position != 9&&position != 10&&position != 11&&position != 12&&position != 13&&position != 14&&position != 15&&position != 16)
				{
					cout<<"That is not a valid input\n";
					cout<<"Enter a position(1 through 16): ";
					cin>>position;
				}
			}
			game->mark_board(position);
			game->display_board();
		}
		if(game->get_winner()=="C"){
			cout<<"The game ended in a tie\n";
		} else {
		cout<<"The Winner is "<<game->get_winner()<<"\n";
		}

		cout<<"To play again enter \'y\' or \'Y\': ";
		cin>>user_choice;
	} while(user_choice == 'y' || user_choice == 'Y');
	
	return 0;
}