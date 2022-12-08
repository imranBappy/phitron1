
s = 'abba'
 
i=0
j=len(s)-1
flag =1
while(i<j):
    if s[i]!=s[j]:
        flag =0
        print('string is not palindrome.')
        break
    i+=1
    j-=1
if flag==1:
    print('string is palindrome.')