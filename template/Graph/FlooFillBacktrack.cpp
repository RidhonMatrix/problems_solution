void fill(i,j){
  //base case
  
  visited[i][j]=true;
  str[i][j]='#';
  
  fill(i-1,j);
  fill(i+1,j);
  fill(i,j-1);
  fill(i,j+1);
}
