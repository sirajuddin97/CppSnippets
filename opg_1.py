# Fysikk oblig 2 - Oppgave 1g - Øzlem Tuzkaya og Sirajuddin Asjad
import numpy as np, matplotlib.pyplot as plt

K = 0.20;                           # Friksjon
m = 10.0;                           # Masse kloss A
M = 20.0;                           # Masse kloss B
mtr = 5.0;                          # Trinsens masse
g = 9.81;                           # Tyngdekraft
R = 0.30;                           # Trinsens radius
v0 = 0;                             # Startfart
h0 = 10;                            # Starthøyde
t0 = 0;                             # Starttid
t = 12;                             # Slutttid
D = 3000;                           # Antall elementer i times (oppdeling)

C1 = (M-m)*g/(M+m+mtr/2);           # Systemets akselerasjon
C2 = K/((M+m+mtr/2)*R**3);          # Systemets akselerasjon

times = np.linspace(t0, t, D);
dt = times[1] - times[0];

h = np.zeros(D);                    # Alle tallene i arrayet settes lik 0 (3000 plasser)
v = np.zeros(D);                    # Alle tallene i arrayet settes lik 0 (3000 plasser)
h[0] = h0;
v[0] = v0;

vuF = C1*times + v0;                # Fart uten friksjon
huF = -C1*times**2/2 + h0;          # Høyde uten friksjon

for t in range(0, D-1, 1):
    dhdt = -v[t];
    dvdt = C1-C2*(v[t])**2;

    h[t+1] = h[t] + dhdt*dt;
    v[t+1] = v[t] + dvdt*dt;

# Første graf (høyde og tid):
fig = plt.figure(1);
plt.ylim(0, 1.1*h0);
plt.xlim(0, 4);
K1, K2 = plt.plot(times, h, 'b', times, huF, 'r--');
fig.legend((K1, K2), ('Med luftmotstand', 'Uten luftmotstand'), 'upper right');
plt.xlabel('t (sekunder)');
plt.ylabel('h (meter)');
plt.show();

# Andre graf (hastighet og tid):
fig = plt.figure(2);
plt.ylim(0, 35);
plt.xlim(0, 8);
L1, L2 = plt.plot(times, v, 'b', times, vuF, 'r--');
fig.legend((L1, L2), ('Med luftmotstand', 'Uten luftmotstand'), 'upper right');
plt.xlabel('t (sekunder)');
plt.ylabel('v (meter/sekunder)');
plt.show();
