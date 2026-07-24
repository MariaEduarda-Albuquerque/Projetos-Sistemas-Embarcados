# 🚦 Semáforo Inteligente

Sistema de semáforo automatizado para cruzamento de carros e pedestres, com ciclo de tempo controlado por software, incluindo fase de aviso (pisca-pisca) antes da troca de sinal.

## Demonstração

![Semáforo Inteligente em funcionamento](semafor-demo.gif)

*Ciclo completo: vermelho → amarelo → verde (carro), sincronizado com o sinal de pedestres.*

## Como funciona

O código controla 5 LEDs através de uma sequência de tempos (`delay`) que simula o ciclo real de um semáforo:

1. **Sinal vermelho para carros** fica aceso por 3s, enquanto o pedestre pode atravessar
2. **Transição**: vermelho apaga, seguido de 1s de amarelo
3. **Sinal verde para carros** acende por 3s, liberando o fluxo
4. **Fase de aviso**: o sinal do pedestre pisca 2 vezes antes do ciclo reiniciar, alertando que o tempo está acabando

Esse comportamento reproduz a lógica de temporização usada em semáforos reais de cruzamento.

## Componentes utilizados

- 1x Arduino Uno
- 5x LED (vermelho, amarelo e verde para carro / vermelho e verde para pedestre)
- 5x Resistor 
- Protoboard e jumpers

## Esquema de conexão

| Pino Arduino | Componente |
|---|---|
| 2 | LED Vermelho (carro) |
| 3 | LED Amarelo (carro) |
| 4 | LED Verde (carro) |
| 5 | LED Verde (pedestre) |
| 6 | LED Vermelho (pedestre) |

## Como reproduzir

1. Monte o circuito conforme o esquema acima
2. Faça upload do arquivo `semáforo Inteligente.ino` via Arduino IDE (ou abra no Tinkercad/simulador)
3. Observe o ciclo completo do semáforo rodando automaticamente

---

Desenvolvido por Maria Eduarda Albuquerque
