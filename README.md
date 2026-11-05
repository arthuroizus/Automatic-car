# Robô Desvia-Obstáculos com Arduino 🚗🤖

Este repositório contém o código para um robô autônomo construído com Arduino. O robô se move para frente continuamente até que seu sensor ultrassônico detecte um obstáculo a menos de 15 cm de distância. Ao detectar o obstáculo, ele recua e faz uma curva aleatória (para a esquerda ou direita) antes de continuar seu caminho.

## 🛠️ Componentes Utilizados

* 1x Placa Arduino (Uno)

* 1x Sensor Ultrassônico HC-SR04

* 1x Driver de Motor (Ponte H L298N)

* 2x Motores DC 

* Baterias/Pilhas para alimentação

## 🔌 Esquema de Ligações (Pinout)

Com base no código, as conexões no Arduino devem ser feitas da seguinte forma:

**Sensor Ultrassônico (HC-SR04):**

* `Trig` -> Pino Digital 12

* `Echo` -> Pino Digital 10

**Driver de Motor (Ponte H):**

* `Motor A (Trás/Frente)` -> Pinos Digitais 3 e 5

* `Motor B (Trás/Frente)` -> Pinos Digitais 7 e 8

## ⚙️ Como Funciona a Lógica

1. **Leitura de Distância:** O sensor envia pulsos sonoros e calcula o tempo de retorno (eco). O valor é convertido para centímetros.

2. **Movimento Padrão:** Os motores giram em uma direção padrão, movendo o robô para frente.

3. **Evasão:**

   * Se a distância medida for menor que `15 cm`, o robô inverte a rotação dos motores por 500 milissegundos (marcha à ré).

   * Em seguida, ele gera um número aleatório (1 ou 2).

   * Dependendo do número, ele vira para a esquerda ou para a direita por mais 500 milissegundos, desviando do obstáculo.

## 🚀 Como Usar

1. Monte o circuito conforme o esquema de ligações.

2. Abra a Arduino IDE.

3. Copie o código fornecido e cole em um novo sketch.

4. Conecte o Arduino ao computador e faça o upload do código.

5. Abra o Monitor Serial (9600 baud rate) para acompanhar as leituras de distância em tempo real.
