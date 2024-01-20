//https://www.geeksforgeeks.org/problems/distribute-candies-in-a-binary-tree/1

int solve(Node* root, int& moves){
        if(root == NULL)
        return 0;
        
        int leftMoves = solve(root->left, moves);
        int rightMoves = solve(root->right, moves);
        
        moves += abs(leftMoves) + abs(rightMoves);
        return root->key - 1 + leftMoves + rightMoves;
    }
    int distributeCandy(Node* root)
    {
        int moves = 0;
        solve(root, moves);
        return moves;
    }
