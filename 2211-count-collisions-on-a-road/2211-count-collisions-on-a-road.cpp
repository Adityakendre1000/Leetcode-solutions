class Solution {
public:
    int countCollisions(string directions) {
        int c = 0;
        int n = directions.size()-1;
        // while(directions[0]=='L') directions.erase(0,1);
        // while(directions[n]=='R'){ 
        //     directions.pop_back();
        //     n--;
        // }


        // for(int i = 0; i < directions.size()-1;i++){
        //     if(directions[i]=='R' && directions[i+1]=='L'){
        //         c+=2;
        //         directions[i]='S'; 
        //         directions[i+1]='S';
        //     } else if(directions[i]=='R' && directions[i+1]=='S'){
        //         c+=1;
        //         directions[i]='S';
        //     } else if(directions[i]=='S' && directions[i+1]=='L'){
        //         c+=1;
        //         directions[i+1]='S';
        //     } else{
        //         c+=0;
        //     }
        // }

        bool x = true;
        while (x&&n>0){
            while(n>-1 && directions.front() == 'L'){ 
                directions.erase(0,1);
                n--;    
            }
            while(n>-1 && directions.back() == 'R'){ 
                directions.pop_back();
                n--;
            }
            int cr = 0;
            int b = 0;

            for(int i = 0; i < n;i++){
                if(directions[i]=='R' && directions[i+1]=='L'){
                    c+=2;
                    b++;
                    directions[i]='S'; 
                    directions[i+1]='S';
                } else if(directions[i]=='R' && directions[i+1]=='S'){
                    c+=1;
                    directions[i]='S';
                    b++;
                } else if(directions[i]=='S' && directions[i+1]=='L'){
                    c+=1;
                    directions[i+1]='S';
                    b++;
                } else{
                    c+=0;
                }

                //cosecutive R
                if(directions[i]=='R'){
                    cr++;
                } else if(cr>0){
                    c+=cr;
                    // cr=0;

                    for(cr; cr > 0; cr--) directions[i-cr] = 'S';
                }
            }
            if(b==0) x = false;

        }
        return c;
    }
};