//#include <iostream>
//#include<windows.h>
// using namespace std;
// char  board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
// char turn = 'O';
// int row ,col;
// bool gameover = false;
// int choice = 0;
// bool draw = 0;
// void setcolor(int x) {
//     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
// }
// 
// void game_board() {
//     system("cls");
//     //(game board specs)
// //kisi bhi game ke liye sab se zaroori us ka board hota hai jis pai game khela jata hai 
// //us ke liye hum simple cout statte,ment ko use karke board bnayenge ..
//
//
// //hum ne ab ye aik normal board bnaliya hai lekin is main to har baar value change honi hai jis ke liye 
// //hamain aik arraya declare karne pare gy..or wo 2 dimensional character array ho gy kionke
// //humne 'x' or 'o' ke saath kaam karna hai to main pahle 2d char array declare kadeta hn jo baord main value 
// //change karta rahe ga 
//     setcolor(10);
//     cout << "\t\t__________________T I C   T A C   T O E    G A M E___________________" << endl;
//     cout << endl << endl;
//
//     cout << "\t\t\t         |     |     \n";
//     cout << "\t\t\t   " << board[0][0] << "     |  " << board[0][1] << "  |  " << board[0][2] << "  \n";
//     cout << "\t\t\t         |     |     \n";
//     cout << "\t\t\t_________|_____|_________\n";
//
//     cout << "\t\t\t         |     |     \n";
//     cout << "\t\t\t   " << board[1][0] << "     |  " << board[1][1] << "  |  " << board[1][2] << "  \n";
//     cout << "\t\t\t         |     |     \n";
//     cout << "\t\t\t_________|_____|_________\n";
//
//     cout << "\t\t\t         |     |     \n";
//     cout << "\t\t\t   " << board[2][0] << "     |  " << board[2][1] << "  |  " << board[2][2] << "  \n";
//     cout << "\t\t\t         |     |     \n";
//
//     cout << endl;
// }
// 
// void player_turn() {
//     int choice;
//     if (turn == 'O') {
//         setcolor(5);
//         cout << "Player1 turn[O]==";
//         cin >> choice;
//     }
//     else if (turn == 'X') {
//         setcolor(3);
//         cout << "Player2 turn[X]==";
//         cin >> choice;
//     }
//         
//         //ye humnne kaam kiya hai turns ke ;liye ab hum ne aik oor zaroori kaam karna hai 
//         //wo ye hai ke hum ne jo wo chiuce enetr kare ga 1-9 tak us ko hum usi location par strie karna hai 
//         //us ke liye hum swith use karsakte hain or aik or tareeqa bhi hai ;;lekin hum switch use kareinge;
//         switch (choice) {
//         case 1:row = 0; col = 0;
//             break;
//         case 2:row = 0; col = 1;
//             break;                     //ab yahan par ye hoa hai ke jpo user choice enetr kare ga wo aik 
//             //indexes main store hojaye ga
//             //or baad main hum us index pai us player ki jo symbol ho gy wo add kardeige 
//
//         case 3:row = 0; col = 2;
//             break;
//         case 4:row = 1; col = 0;
//             break;
//         case 5:row = 1; col = 1;
//             break;
//
//         case 6:row = 1; col = 2;
//             break;
//         case 7:row = 2; col = 0;
//             break;
//         case 8:row = 2; col = 1;
//             break;
//         case 9:row = 2; col = 2;
//             break;
//         default: cout << "Invalid nuber  !!!!" << endl;
//             player_turn();
//             break;
//         }
//         if (turn == 'O' && board[row][col] != 'X' && board[row][col] != 'O') {
//             setcolor(5);
//             board[row][col] = 'O';
//            
//             turn = 'X';
//         }
//         else if (turn == 'X' && board[row][col] != 'X' && board[row][col] != 'O') {
//             setcolor(3);
//             board[row][col] = 'X';
//             turn = 'O';
//         }
//         else {
//             cout << "INvalid choice:!!!!" << endl;
//             player_turn();
//         }
//     }
// bool game_over() {
//     //sa se pahle hum game win ka logic likhte hain 
//     for (int i = 0; i < 3; i++) {
//         if ((board[i][0] == board[i][1] && board[i][0] == board[i][2]) || (board[0][i] == board[1][i] && board[0][i] == board[2][i])) {
//             return true;
//
//         }
//        }
//     if ((board[0][0] == board[1][1] && board[0][0] == board[2][2]) || board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
//         return true;
//     }
//     //game draw or continye ki logic;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (board[i][j] != 'O' && board[i][j] != 'X') {
//                 return false;//yahan main check karta hn ke koi aysi jaga hai jana index khaali hai 
//                 //to matlb game abhi chal rahi hai to game continue hAI 
//                // OOR AGAR KOI INDEX BHI KHAALI NAHI HAI OR KOI JEETA BHI NAHI HAI TO IS KA MATLKB HAI 
//                // KOI NAHI JEETA GAME DRAW HAI 
//             }
//             
//         }
//     }
//     draw = true;
//     return true;
// }
// 
// int main() {
//        while (!game_over()) {
//            game_board();
//            player_turn();
//            game_board();
//            game_over();
//        }
//        //win ki tamaam conditions hum yahan lagaeinge or message out karaige 
//        if ( turn == 'X' && draw == false) {
//            setcolor(3);
//            cout << "Player1 win   congratulation palyer [O]";
//        }
//        else if (turn == 'O' && draw == false) {
//            setcolor(5);
//            cout << "Player2 win   congratulation palyer [X]";
//        }
//        return 0;
//        system("pause");
//    }
//
//
//
//	
