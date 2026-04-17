primeiro = int(input("número 1 = "))
segundo = int(input("número 2 = "))

if primeiro < segundo:
    ordem_cresc = f"{primeiro}, {segundo}"
    ordem_decresc = f"{segundo}, {primeiro}"
else:
    ordem_cresc = f"{segundo}, {primeiro}"
    ordem_decresc = f"{primeiro}, {segundo}"

print(ordem_cresc)
print(ordem_decresc)
