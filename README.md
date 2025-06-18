# 🔋 Projeto: Controle de Energia Inteligente com 2 Cargas Prioritárias
## 🎯 Objetivo
Simular um sistema de gerenciamento inteligente de energia usando Arduino, com controle de cargas prioritárias (LEDs) baseado no nível de uma bateria simulada com um potenciômetro.
## 🧰 Componentes Utilizados
- Arduino Uno
- Potenciômetro
- LEDs (primário e secundário)
- Resistor 220Ω
- LCD 16x2 com I2C
- Protoboard e jumpers
## ⚙️ Funcionamento
- O potenciômetro simula o nível de carga da bateria.
- Os LEDs acendem de acordo com esse nível:
 - 🔴 Abaixo de 500: nenhum LED ligado.
 - 🟡 Entre 501 e 800: apenas LED primário ligado.
 - 🟢 Acima de 800: ambos os LEDs ligados.
- O display LCD exibe o valor do nível da bateria em tempo real.
## 🔗 Links Importantes
- 💡 [Simulação no Wokwi](https://wokwi.com/projects/433395785548565505)
- 📄 [Relatório Técnico (PDF)](./Relatorio_SPRINT2.pdf)
- 📹 [Vídeo no YouTube](https://www.youtube.com/watch?v=QxXpvk3aInQ)
## 📁 Código
O código principal do projeto está no arquivo [`codigo.ino`](./codigo.ino) presente neste repositório.
---
*Projeto da SPRINT 2 – Curso Técnico Integrado*
