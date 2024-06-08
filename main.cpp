#include<bits/stdc++.h>
using namespace std;
int main(){
    char b[3][3]={
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '}
        };


        const char playerx='X';
        const char playero='O';
        char curr=playerx;
        int r=-1;
        int c=-1;
        char winn=' ';
        for(int i=0;i<9;i++){
        	cout<<b[0][0]<<"|"<<b[0][1]<<"|"<<b[0][2]<<endl;
        	cout<<"-----"<<endl;
        	cout<<b[1][0]<<"|"<<b[1][1]<<"|"<<b[1][2]<<endl;
        	cout<<"-----"<<endl;
			cout<<b[2][0]<<"|"<<b[2][1]<<"|"<<b[2][2]<<endl;
			if(winn!=' '){
				break;
			}
        	cout<<"curr player is"<<curr<<endl;
        	while(true){
			cout<<"enter r c from 0-2";
        	cin>>r>>c;
        	if(r<0||r>2||c<0||c>2)
{
	        cout<<"Invalid! try again"<<endl;
	    }
	        else if(b[r][c]!=' '){
	        	cout<<"Tile is full!tryagain"<<endl;
			}
	        else{
	        	break;
			}
			r=-1;
			c=-1;
			cin.clear();
			cin.ignore(100000,'\n');
			}

        	b[r][c]=curr;
        	curr=(curr==playerx)?playero:playerx;
        	for(int r=0;r<3;r++){
        		if(b[r][0]!=' '&&b[r][0]==b[r][1]&&b[r][1]==b[r][2]){
        			winn=b[r][0];
        			break;
				}

			}
			for(int c=0;c<3;c++){
				if(b[0][c]!=' '&&b[0][c]==b[1][c]&&b[1][c]==b[2][c]){
        			winn=b[0][c];
        			break;

			}
        }
        if(b[0][0]!=' '&&b[0][0]==b[1][1]&&b[1][1]==b[2][2]){
        	winn=b[0][0];

		}
		else if(b[0][2]!=' '&&b[0][2]==b[1][1]&&b[1][1]==b[2][0])
{
	   winn=b[0][2];
			} }
		if(winn!=' '){
			cout<<winn<<"is the winner";
		}
		else{
			cout<<"Tie!";
		}

}
