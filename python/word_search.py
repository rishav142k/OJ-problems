class Solution(object):
    def exist(self, board, word):
        """
        :type board: List[List[str]]
        :type word: str
        :rtype: bool
        """
        n = len(board)
        m = len(board[0])
        def check(i,j,word):
            out = False
            '''if all the letters are checked'''
            if not word:
                return True
                
            '''if index is out of range'''
            if i<0 or i>n-1 or j<0 or j>m-1:
                return False
                
            '''if the current letter does not match the letter in word'''
            if word[0] != board[i][j]:
                return False
                
            temp = board[i][j]
            board[i][j] = 0
            ''' check for left right top and bottom for next letter'''
            out = check(i-1,j,word[1:]) or check(i+1,j,word[1:]) or check(i,j-1,word[1:]) or check(i,j+1,word[1:])
            board[i][j] = temp
            
            return out
            
        for i in range(0,n):
            for j in range(0,m):
                if check(i,j,word):
                    return True
