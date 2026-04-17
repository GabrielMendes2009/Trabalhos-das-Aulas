total_seg = int(input("Informe a quantidade de segundos: "))

horas = total_seg // 3600
minutos = (total_seg % 3600) // 60
segundos_rest = total_seg % 60

print(f"{horas} hora(s), {minutos} minuto(s) e {segundos_rest} segundo(s)")
