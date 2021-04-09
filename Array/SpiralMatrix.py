#Spiral form of given matrix
def userinput():
    m = int(input("Enter the number of rows"))
    n = int(input("Enter the numeber of columns"))
    a = []
    for i in range(m):
        b = []
        for j in range(n):
            j = int(input(f"Enter elements for matrix{i},{j}"))
            b.append(j)
        a.append(b)
    print("matrix is:")
    for i in range(m):
        for j in range(n):
            print(a[i][j],end=" ")  
        print("\n")      
# We can use above function also to take magrix as users input
a = [[1,2,3,4],
     [5,6,7,8],
     [9,10,11,12],
     [13,14,15,16]]
m = 4
n = 4
row = 0
column = 0
while row<m and column<n:
    for i in range(column,n):
        print(a[row][i],end=" ")
    row=row+1
    for i in range(row,m):
        print(a[i][n-1],end=" ")
    n = n-1  
    if row<n:
        for i in range(n-1,column-1,-1):
            print(a[m-1][i],end = " ")
        m = m-1    
    if column<m:
        for i in range(m-1,row-1,-1):
            print(a[i][column],end = " ")
        column = column+1
# Time complexity is O(m*n) as we have to travaerse the matrix 
#Generalization : We have to use for for loops for unpacking this matrix


