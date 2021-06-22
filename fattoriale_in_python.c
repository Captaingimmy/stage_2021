n = int(input("dimmi il numero che vuoi trasformare in n_fattoriale "))
def fattoriale(n):
    risultato = 1
    for i in range(2,n+1):
        risultato = risultato * i
    return(risultato)
risultato_1= fattoriale(n)
print(risultato_1)
    