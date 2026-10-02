import math

alas = 5
tinggi = 12

sisi_A = tinggi
sisi_C = alas
sisi_B = int(math.sqrt((alas*2) + (tinggi*2)))

keliling = sisi_A + sisi_B + sisi_C
luas = int((alas * tinggi) / 2)

print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm\n")
print("Jawab :")
print(f"Sisi A = {sisi_A} cm")
print(f"Sisi B = {sisi_B} cm")
print(f"Sisi C = {sisi_C} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm")