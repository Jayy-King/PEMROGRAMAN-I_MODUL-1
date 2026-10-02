import math

putaran = 5
jarak = 14

keliling_1_putaran = jarak / putaran
r = keliling_1_putaran / (2 * math.pi)

print("Diketahui:")
print(f"Pak Dengklek mengelilingi taman = {putaran} Putaran")
print(f"Jarak tempuh Pak Dengklek = {jarak} Kilometer\n")
print("Jawaban:")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {r:.2f} Kilometer")