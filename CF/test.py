n = int(input())

l = ["", "", "", "", "", "", "", ""]

for _ in range(0,8):
	s = input()
	for i in range(0,8):

		if(s[i] != "."):
			l[_] += s[i]

ans = ""

for i in l:

	ans+=i 

print(ans)
