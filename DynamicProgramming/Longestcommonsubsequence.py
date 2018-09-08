arr = [[0 for x in range(50)] for x in range(50)]
def LCS(P,Q,n,m):

 if arr[n][m]!= NULL :
  return arr[n][m]
 if n==0 or m==0:
  result =0
 elif P[n-1]==Q[m-1]:
  result=1+LCS(P,Q,n-1,m-1)
 elif P[n-1]!=Q[m-1]:
  temp1=LCS(P,Q,n-1,m)
  temp2=LCS(P,Q,n,m-1)
  result = max(temp1,temp2)
 arr[n][m]=result
 return result
X = "AGGTAB"
Y = "GXTXAYB"
n= len(X)
m=len(Y)
print "Length of LCS is ",LCS(X, Y,n,m)
