🪴 Monitor de Umidade de Solo Inteligente

Este projeto foi desenvolvido como um experimento de Robótica Educacional, com o objetivo de simular o monitoramento da hidratação de plantas.
Utiliza um sensor de umidade de solo analógico para detectar o estado do solo e fornece feedback visual em tempo real por meio de LEDs, auxiliando no cuidado botânico e no aprendizado de conceitos de eletrônica e programação.

🚀 Simulação Online

Você pode testar e visualizar o funcionamento deste projeto diretamente no seu navegador:

👉 Tinkercad
https://www.tinkercad.com/things/hpZXp5pk3lg-projeto-sensor-de-umidade?sharecode=2DmjMTskPsJgY_8oANBasrzixq8QFXCsuGJ90Bx2VZo

🎯 Objetivos Pedagógicos

Compreender o funcionamento do sensor de umidade de solo analógico

Aplicar lógica condicional (if / else) para tomada de decisão com base em leituras analógicas

Trabalhar com sinalização visual usando LEDs para representar estados do sistema

Solo Seco

Solo Úmido

🛠️ Componentes Utilizados

Microcontrolador: Arduino Uno R3

Sensor de Umidade:

Sensor de Umidade de Solo Analógico (conectado ao pino A0)

Atuadores Visuais:

01 LED Vermelho — Solo Seco (pino 12)

01 LED Verde — Solo Úmido (pino 13)

Resistores:

02 resistores para proteção dos LEDs

Outros:

Protoboard

Jumpers

🔌 Esquema do Circuito

📖 Funcionamento do Sistema

O sistema opera com base na leitura da condutividade elétrica do solo, que varia conforme o nível de umidade.

🔍 Processo de Funcionamento

O sensor realiza a leitura analógica do solo pelo pino A0

O valor lido é exibido no Monitor Serial

O sistema avalia o nível de umidade e ativa os LEDs conforme a condição:

🧠 Lógica de Verificação

Leitura ≤ 300

Solo considerado seco

LED Vermelho (pino 12) ligado

LED Verde desligado

Leitura > 300

Solo considerado úmido/hidratado

LED Verde (pino 13) ligado

LED Vermelho desligado

💻 Código-Fonte

O arquivo principal (.ino) realiza leituras contínuas do sensor, com um pequeno intervalo de 10 ms para garantir estabilidade.
Abaixo está o trecho da lógica principal:

// Lógica de verificação da umidade
if (analogRead(A0) <= 300) {
    digitalWrite(12, HIGH); // Liga LED de alerta (Solo Seco)
    digitalWrite(13, LOW);
} else {
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH); // Liga LED de status OK (Solo Úmido)
}
