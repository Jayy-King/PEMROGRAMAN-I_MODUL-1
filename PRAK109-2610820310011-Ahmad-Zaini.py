pasukan_yuzhong = 958730

pahlawan = ["Zilong", "Ling", "Baxia", "Wanwan", "Chang'e"]
jumlah_pahlawan = len(pahlawan)

pasukan_per_pahlawan = pasukan_yuzhong // jumlah_pahlawan

print(f"Jumlah pasukan yang dibawa Yu Zhong = {pasukan_yuzhong}")
print(f"Pahlawan yang dikirim: {', '.join(pahlawan)}")
print(f"Jumlah pahlawan = {jumlah_pahlawan}")
print(f"Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah {pasukan_per_pahlawan} pasukan")