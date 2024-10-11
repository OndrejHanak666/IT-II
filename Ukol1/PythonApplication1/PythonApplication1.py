
import sys

# Funkce pro v�po�et medi�nu
def najdi_median(cisla):
    cisla.sort()  # Se�ad� ��sla podle velikosti
    n = len(cisla)
    if n % 2 != 0:
        return cisla[n // 2]
    else:
        return (cisla[n // 2 - 1] + cisla[n // 2]) / 2.0


# Hlavn� program
def main():
    # Z�sk�n� po�tu ��sel od u�ivatele
    while True:
        try:
            n = int(input("Kolik cisel chcete zadat: "))
            break
        except ValueError:
            print("Neplatny vstup! Zadejte cislo!")

    # Vytvo�en� seznamu pro ulo�en� ��sel
    cisla = []
    for i in range(n):
        while True:
            try:
                cislo = int(input(f"Zadejte cislo #{i+1}: "))  # Zadejte ��slo
                cisla.append(cislo)  # P�id�n� ��sla do seznamu
                break
            except ValueError:
                print("Neplatny vstup! Zadejte cislo!")

    # V�pis ��sel
    print("\n\nVase cisla: ", cisla)

    # V�po�et sou�tu
    soucet = sum(cisla)
    print(f"Soucet cisel je: {soucet}")

    # V�po�et sou�inu
    soucin = 1
    for cislo in cisla:
        soucin *= cislo
    print(f"Soucin cisel je: {soucin}")

    # V�po�et pr�m�rn� hodnoty
    prumernahodnota = soucet / n
    print(f"Prumerna hodnota cisel je: {prumernahodnota}")

    # V�po�et medi�nu
    median = najdi_median(cisla)
    print(f"Median cisel je: {median}")


# Spu�t�n� programu
if __name__ == "__main__":
    main()



        
            