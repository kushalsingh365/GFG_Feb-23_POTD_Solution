class Solution{

    public:

    vector<int> dx={0,1,0,-1};

    vector<int> dy={1,0,-1,0};

 

 

    bool isValid(int x,int y, int n,int m)

    {

        if(x>=0&&x<n&&y>=0&&y<m)return 1;

        

        return 0;

        

    }

    pair<int,int> endPoints(vector<vector<int>> matrix)

    {

        int x,y,dir;

        x=y=0;

        dir=0;

        while(1)

        {

            if(matrix[x][y]==0)

            {

                if(!isValid(x+dx[dir],y+dy[dir],matrix.size(),matrix[0].size()))

                break;

                

                x+=dx[dir];

                y+=dy[dir];

            

            }   

            else

            {

                matrix[x][y]=0;

              

                

                dir=(dir+1)%4;

                if(!isValid(x+dx[dir],y+dy[dir],matrix.size(),matrix[0].size()))

                break;

                x+=dx[dir];

                y+=dy[dir];

                

            }

        }       

        return {x,y};

    }

};
