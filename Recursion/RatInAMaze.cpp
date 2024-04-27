#include<iostream>
#include<string.h>
void printAllPath(int maze[][4],int row, int col, int srcx, int srcy, std::string &ans){
    //basecase
    //destination coordinates are [row-1],[col-1]
    if (srcx == row-1 && srcy == col-1)
    {
        std::cout<<ans<<" ";
        return;
    }

    //1 case solve krdo baaki recursion sambhal lega

    //Upk9tr3
    

    //Right

    //Down

    //Left
    
}
int main(){
    int maze[4][4] ={
        {1,0,0,0},
        {1,1,0,0},
        {1,1,0,0},
        {1,1,1,1}
    };
    int row = 4, col = 4;
    int srcx = 0, srcy = 0; // The source location of Rat
    std::string ans = " ";
    printAllPath(maze,row,col,srcx,srcy,ans);
    return(0);
}