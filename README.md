# embarca_kit

**embarca_kit** é uma biblioteca em C para conversão de bases numéricas, integrada com suporte a um sistema de conversão de unidades de medidas. Ideal para aplicações relacionadas a cálculos em obras, engenharia e projetos técnicos.  

## 👨🏻‍💻 Componentes do grupo 4

- Emily Cerqueira
- Victor G. S.
- John Porto
- Jônatas da Silva
- Joseph
- Julia Santana
- Richard Lima

## 🚀 Funcionalidades  

- Conversão entre diferentes bases numéricas (binária, decimal, octal e hexadecimal).
- Suporte para unidades de medida usadas em construção civil, incluindo:
  - Comprimento (metros, milímetros, polegadas, pés).
  - Área (milímetros quadrados, centímetros quadrados, metros quadrados, hectômetros quadrados e quilômetro quadrados).
  - Volume (metros cúbicos, litros, galões).
- Fácil integração com projetos em C.
- Simples de usar e configurável.

## 🛠️ Tecnologias Utilizadas  

- Linguagem C: Desempenho e controle de baixo nível.
- Metodologias estruturadas para máxima eficiência e reutilização.

## 📦 Instalação  

Para utilizar a biblioteca Embarcatech:  

1. Clone este repositório:
  ```bash
   git clone https://github.com/seu-usuario/embarcatech.git
  ```
2. Realize a compilação, da seguinte forma:
  ```bash
   gcc -o conversor-grupo-4 main.c libs/*.c
  ```
> Obs: no comando acima usamos o coringa `*` para realizar a compilação com todas as bibliotecas de conversão existentes.

## ⚙️ Execução do sistema:
  ```bash
   ./conversor-grupo-4 ou ./conversor-grupo-4.exe
  ```

## 🌍 Aplicações Práticas
- A biblioteca embarca_kit foi projetada para simplificar conversões importantes em cenários como:

- Construção Civil
Imagine um engenheiro que precisa traduzir medidas entre sistemas métricos em projetos de construção. Por exemplo, converter desenhos técnicos feitos em metros para pés ou polegadas.
- Engenharia Elétrica
Imagine um engenheiro elétrico qure precisa realizar ajustes relacionados a sistemas que exigem conversões precisas de unidades e bases numéricas. Por exemplo: Conversão de energia ou potência entre unidades como joules, watts e quilowatts-hora.
- Engenharia Térmica
Inclui suporte para conversões entre escalas de temperatura (Celsius, Fahrenheit e Kelvin), simplificando cálculos em projetos industriais e acadêmicos.

## 🌡️ Conversor de Temperaturas

O Conversor de Temperaturas tem o uso simples, porém, muito eficaz. Quando a aplicação for iniciada e o usuário escolher a opção de conversão de temperaturas, ele será redirecionado a sessão onde a aplicação irá perguntar: "Insira a temperatura e a unidade de origem (ex: 100 C): ", a própria aplicação já mostra ao usuário como a inserção de dados deve ser inserida (número* _espaço unidade-de-temperatura*). Depois do usuário inserir a temperatura que deseja converter para uma outra unidade, ele escolhe para qual outra unidade ele quer que seja convertida (C ou C para Celsius, K ou k para Kelvin, F ou f para Fahrenheit), após ele confirmar a unidade de temnperatura, a aplicação irá retornar o numero convertido.
Observações: se o usuário escolher determinada temperatura e unidade de medida e no momento que ele escolher para qual unidade de medida quer converter for a mesma inicial, a aplicação irá retornar o mesmo número e unidade de medida iniciais, pois a conversão de celsius para celcius não altera o valor (o memso vale para as outras unidade de temperatura).

## 💾 Conversor de Unidades de Armazenamento

O Conversor de Unidades de Armazenamento é uma ferramenta simples e eficaz para converter valores entre diferentes unidades de armazenamento digital, como **bit**, **byte**, **kilobyte**, **megabyte**, **gigabyte** e **terabyte**. Este conversor é ideal para sistemas que precisam realizar cálculos precisos entre as unidades de armazenamento.

### 🛠️ Funcionamento
O conversor utiliza uma tabela de fatores de conversão que define como cada unidade é relacionada a **bits**. A lógica segue os seguintes passos:

1. **Entrada:** O usuário fornece:
   - Um valor numérico a ser convertido.
   - A unidade de origem.
   - A unidade de destino.

2. **Conversão para Bits:**
   - O valor fornecido é convertido para a unidade base, que são **bits**, utilizando fatores de conversão predefinidos.

3. **Conversão para a Unidade de Destino:**
   - O valor em **bits** é convertido para a unidade de destino.

4. **Resultado:** O valor convertido é retornado na unidade especificada.

---

### 🧮 Exemplo de Uso
Se o usuário deseja converter `1 Megabyte` para `Kilobytes`:
1. O valor `1` é multiplicado pelo fator de conversão de **Megabyte para Bits** (`8.0 * 1024 * 1024`), resultando em `8.388.608 bits`.
2. Este valor em bits é dividido pelo fator de conversão de **Kilobytes para Bits** (`8.0 * 1024`), resultando em `1024 Kilobytes`.
3. O conversor retorna o valor `1024 Kilobytes`.

---

### 🔧 Configurações de Conversão
O sistema utiliza a seguinte tabela de fatores de conversão (todos em relação a bits):

| Unidade    | Fator de Conversão para Bits           |
|------------|----------------------------------------|
| **Bit**    | `1.0`                                  |
| **Byte**   | `8.0`                                  |
| **Kilobyte** | `8.0 * 1024`                          |
| **Megabyte** | `8.0 * 1024 * 1024`                   |
| **Gigabyte** | `8.0 * 1024 * 1024 * 1024`            |
| **Terabyte** | `8.0 * 1024 * 1024 * 1024 * 1024`     |

---

### ⚠️ Observações
1. **Unidades Inválidas:** Se a unidade de origem ou destino for inválida (fora do intervalo definido de 0 a 5), o conversor retorna `-1` para indicar erro.
2. **Conversão entre a Mesma Unidade:** Se a unidade de origem for igual à unidade de destino, o valor retornado será o mesmo fornecido como entrada.

---

