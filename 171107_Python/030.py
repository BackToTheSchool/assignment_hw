# 030 0부터 12까지의 곱셈표를 만드는 프로그램
import sys

for i in range(0, 13):
	for j in range(0, 13):
		sys.stdout.write("%2d x %2d = %3d\t" % (i, j, i * j))
	print(" ")
