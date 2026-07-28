class RottenOranges
{
    static class Pair 
    {
        int x, y;
        Pair(int x, int y) 
        {
            this.x = x;
            this.y = y;
        }
    }

    public static int orangesRotting(int[][] grid) 
    {
        int rows = grid.length;
        int cols = grid[0].length;
        Pair[] queue = new Pair[rows * cols];
        int front = 0, rear = 0;
        int fresh = 0;
        for(int i = 0; i < rows; i++) 
        {
            for(int j = 0; j < cols; j++) 
            {
                if(grid[i][j] == 2) 
                {
                    queue[rear++] = new Pair(i,j);
                }
                if(grid[i][j] == 1) 
                {
                    fresh++;
                }
            }
        }
        int[][] dir = {{-1,0},{1,0},{0,-1},{0,1}};
        int minutes = 0;
        while(front < rear && fresh > 0) {
            int size = rear - front;
            for(int i = 0; i < size; i++) {
                Pair p = queue[front++];
                for(int d = 0; d < 4; d++) {
                    int nx = p.x + dir[d][0];
                    int ny = p.y + dir[d][1];
                    if(nx >= 0 && ny >= 0 && nx < rows && ny < cols && grid[nx][ny] == 1) 
                    {
                        grid[nx][ny] = 2;
                        fresh--;
                        queue[rear++] = new Pair(nx, ny);
                    }
                }
            }
            minutes++;
        }
        return (fresh == 0) ? minutes : -1;
    }
    public static void main(String[] args) 
    {
        int[][] grid = 
        {
            {2,1,1},
            {1,1,0},
            {0,1,1}
        };
        int result = orangesRotting(grid);
        System.out.println("Minimum minutes: " + result);
    }
}