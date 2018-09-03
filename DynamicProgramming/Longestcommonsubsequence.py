def LCS(P,Q,n,m)
 if arr[n][m]!=undefined :
  return arr[n][m]
 if n==0 or m==0:
  result =0
 else if P[n-1]==Q[m-1]:
  result=1+LCS(P,Q,n-1,m-1)
 else if P[n-1]!=Q[m-1]:
  temp1=LCS(P,Q,n-1,m)
  temp2=LCS(P,Q,n,m-1)
  result = max(temp1,temp2)
 arr[n][m]=result
 return result
