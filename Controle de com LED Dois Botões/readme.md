# Controle de Lâmpada com Dois Botões (Lógica OU)

Circuito que aciona uma lâmpada a partir de dois pontos de controle independentes, qualquer um dos dois botões liga a lâmpada.

## Como funciona

O código lê continuamente o estado de duas entradas digitais (botões). Se **qualquer uma delas** estiver em nível alto (pressionada), a lâmpada é ligada:

- Botão 1 (pino 2) pressionado → Lâmpada (pino 4) acende
- Botão 2 (pino 3) pressionado → Lâmpada (pino 4) acende
- Não há `else`: a lâmpada permanece acesa mesmo após soltar o botão, já que não existe lógica de desligamento

Esse comportamento representa uma porta lógica **OU (OR)** aplicada a hardware: dois pontos de ativação controlando a mesma saída.

## Componentes utilizados

- 1x Arduino Uno
- 2x Botão (push button)
- 1x Lâmpada
- 3x Resistor 
- Protoboard e jumpers

## Esquema de conexão

| Pino Arduino | Componente |
|---|---|
| 2 | Botão 1 (entrada) |
| 3 | Botão 2 (entrada) |
| 4 | Lâmpada (saída) |

## Como reproduzir

1. Monte o circuito conforme o esquema acima
2. Faça upload do código via Arduino IDE (ou abra no Tinkercad/simulador)
3. Pressione qualquer um dos dois botões e observe a lâmpada acender

---

Desenvolvido por Maria Eduarda Albuquerque
