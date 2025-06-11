nama = input("Siapa nama kamu? ")
hobi_list = ["membaca", "bermain musik", "olahraga", "melukis", "bermain game"]


print("\nPilihlah satu dari 5 hobi di bawah ini:")
for hobi in hobi_list:
    print("- " + hobi.title())


hobi_input = input("\nKetik nama hobi kamu (sesuai daftar): ").lower()


if hobi_input in hobi_list:
    print(f"Keren banget hobi kamu, {nama}. Ternyata kamu suka {hobi_input.title()}!")
else:
    print("Maaf, hobi yang kamu ketik belum ada dalam daftar.")
