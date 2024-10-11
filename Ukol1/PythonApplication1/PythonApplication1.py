
import sys

# Funkce pro výpoèet mediánu
def najdi_median(cisla):
    cisla.sort()  # Seøadí èísla podle velikosti
    n = len(cisla)
    if n % 2 != 0:
        return cisla[n // 2]
    else:
        return (cisla[n // 2 - 1] + cisla[n // 2]) / 2.0


# Hlavní program
def main():
    # Získání poètu èísel od uživatele
    while True:
        try:
            n = int(input("Kolik cisel chcete zadat: "))
            break
        except ValueError:
            print("Neplatny vstup! Zadejte cislo!")

    # Vytvoøení seznamu pro uložení èísel
    cisla = []
    for i in range(n):
        while True:
            try:
                cislo = int(input(f"Zadejte cislo #{i+1}: "))  # Zadejte èíslo
                cisla.append(cislo)  # Pøidání èísla do seznamu
                break
            except ValueError:
                print("Neplatny vstup! Zadejte cislo!")

    # Výpis èísel
    print("\n\nVase cisla: ", cisla)

    # Výpoèet souètu
    soucet = sum(cisla)
    print(f"Soucet cisel je: {soucet}")

    # Výpoèet souèinu
    soucin = 1
    for cislo in cisla:
        soucin *= cislo
    print(f"Soucin cisel je: {soucin}")

    # Výpoèet prùmìrné hodnoty
    prumernahodnota = soucet / n
    print(f"Prumerna hodnota cisel je: {prumernahodnota}")

    # Výpoèet mediánu
    median = najdi_median(cisla)
    print(f"Median cisel je: {median}")


# Spuštìní programu
if __name__ == "__main__":
    main()



        
            