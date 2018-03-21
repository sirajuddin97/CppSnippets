# Fysikk oblig 2 - Oppgave 2b - Øzlem Tuzkaya og Sirajuddin Asjad
import numpy as np, matplotlib.pyplot as plt

A = 1.0;                           # Konstant A (kOhm)
B = 0.1;                           # Konstant B (kOhm)
Ic = 2.5;                          # Konstant Ic (mAmpere)
V = 5;                             # Spenning (Volt)
Imin = 0.01;                       # Minimum I1-verdi (mAmpere)
Imax = 15;                         # Maksimum I1-verdi (mAmpere)
N = 3000;                          # Antall elementer i times (oppdeling)

I = np.linspace(Imin, Imax, N);
R1 = V/I;
R2 = A + (B * np.exp(I/Ic));

fig = plt.figure(1);
plt.xlim(0, 15);
plt.ylim(0, 20);
K1, K2 = plt.plot(I, R1, 'b', I, R2, 'r--');
fig.legend((K1, K2), ('Ligning 1', 'Ligning 2'), 'upper right');
plt.xlabel('I1 (mA)');
plt.ylabel('R1 (kOhm)');
plt.show();
