
# 031
# Resting Pulse: 65 Age:22
# Intensity	| Rate
# -------------|-----------
# 55%			| 138bpm

restingPulse = int(input("Resting Pulse: "))
age = int(input("Age: "))

print("Intensity\t | Rate")
print("-" * 12, "|", "-" * 10)

for i in range(11, 20):
	targetHR = (((220 - age) - restingPulse) * i / 20) + restingPulse
	print("%d%%\t\t\t | %d bpm" % (i * 5, targetHR))
