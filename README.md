Simulação Enchente no Wokwi :

Descrição do Problema:

Este projeto simula um sistema de alarme utilizando um sensor ultrassônico HC-SR04 e um buzzer. O objetivo é detectar a aproximação de um objeto e acionar um alarme sonoro quando a distância for inferior a um determinado limite (ex: 20 cm). Esse tipo de sistema é ideal para:

Sistemas de segurança simples;

Alarmes de presença;

Barreiras de segurança automatizadas;

Monitoramento de distância em projetos de robótica.

Visão Geral da Solução:

A solução utiliza um Arduino Uno, conectado ao sensor ultrassônico e a um buzzer ativo. O Arduino mede a distância até o objeto usando o sensor HC-SR04 e, se essa distância for menor que o limite pré-definido, ele aciona o alarme (buzzer).

Componentes Utilizados

Arduino Uno

Sensor Ultrassônico HC-SR04

Buzzer ativo

Jumpers

Esquema de Conexão (figura ilustrativa):

HC-SR04         Arduino UNO
--------        ------------
VCC     →       5V  
GND     →       GND  
TRIG    →       D9  
ECHO    →       D10

Buzzer          Arduino UNO
--------        ------------
VCC     →       D8  
GND     →       GND

Como Simular o Projeto:

Simulação no Wokwi
Acesse o projeto diretamente pelo link abaixo:
https://wokwi.com/projects/432241312168016897

Clique em "Start Simulation" (botão verde no topo).

Use o mouse para arrastar o objeto virtual no sensor (simulando aproximação).

Se a distância for menor que 20 cm, o buzzer será ativado.

Lógica do Código

O sensor HC-SR04 emite um pulso ultrassônico.

Mede o tempo até o eco retornar.

Calcula a distância usando a fórmula:

distância (cm) = Tempo x 0.0343
                       2
                       
Se a distância for menor que 20 cm, o buzzer é acionado.
