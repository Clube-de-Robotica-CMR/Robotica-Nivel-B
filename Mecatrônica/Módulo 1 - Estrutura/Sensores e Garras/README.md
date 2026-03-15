# Sensores e Garras em Mecatrônica 🤖

Nesta aula, avançamos no estudo da mecatrônica focando na percepção do ambiente e na manipulação de objetos. Exploramos como os robôs "sentem" o mundo ao seu redor e quais mecanismos utilizam para interagir fisicamente com ele.

---

## Conceitos de Mecatrônica Explorados

### 1. Estrutura e Peças Fundamentais
A base de qualquer robô LEGO Technic (como Mindstorms EV3 ou Spike) e sistemas Arduino utiliza componentes essenciais para garantir integridade e funcionalidade:
* **Vigas (Beams):** Formam o "esqueleto" ou chassi do robô.
* **Conectores e Pinos:** Unem as vigas e permitem que as articulações girem ou fiquem fixas.
* **Engrenagens:** Fundamentais para aumentar o torque (força) do braço ou mudar a direção do movimento.

### 2. Sistemas Sensoriais (Os Sentidos do Robô)
O sensor é um dispositivo que transforma estímulos físicos (luz, distância, toque, giro) em um sinal elétrico que o cérebro do robô (Hub) consegue entender. Ele funciona de forma análoga aos sentidos humanos.

* **Ultrassónico:** Emite ondas sonoras para medir a distância de objetos, sendo ideal para evitar colisões e realizar mapeamento. Na prática, deteta quando um objeto está perto o suficiente para ser agarrado.
* **Infravermelho (IR):** Deteta a presença de objetos próximos com alta precisão.
* **Toque:** Pode ser usado como "fim de curso" para a garra, indicando o limite de fecho ou abertura.
* **HC-SR04:** Exemplo de sensor de distância ultrassónico comum em projetos com Arduino.

---

## Mecanismos de Manipulação: Garras

Exploramos diferentes designs de garras, cada uma adequada para um tipo de tarefa ou objeto:

| Tipo de Garra | Descrição e Funcionamento | Vantagem Principal |
| :--- | :--- | :--- |
| **Pinça Simples** | Utiliza dois "dedos" que se movem simultaneamente para agarrar objetos. | Maior controle de velocidade e posição com uso de motor médio. |
| **Caçamba ou Coleta** | Possui uma estrutura tipo caixa que envolve o objeto (como uma bola) e o arrasta ou levanta. | Envolve o objeto em vez de apenas apertar. |
| **Rosca Sem Fim** | Usa um mecanismo de engrenagem de rosca sem fim para travar a garra. | Permite segurar objetos pesados sem que o motor precise fazer força constante. |
| **Mecanismo Passivo** | Não utiliza motor; usa a inércia do robô ou batentes da arena para abrir e fechar. | Economiza saídas de motor para outras funções, muito comum na FLL. |

---

## Aplicações e Referências
* **Competições:** O uso eficiente de sensores e garras é o que permite alcançar altas pontuações em rounds de competições como a OBR (Olimpíada Brasileira de Robótica), onde a precisão na manipulação de objetos é um fator decisivo.