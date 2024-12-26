# embarca_kit

**embarca_kit** é uma biblioteca em C para conversão de bases numéricas, integrada com suporte a um sistema de conversão de unidades de medidas. Ideal para aplicações relacionadas a cálculos em obras, engenharia e projetos técnicos.  

## 👨🏻‍💻 Componentes do grupo 4

- Emily Cerqueira
- Vitor Santos 
- Jônathas Porto
- Jônatas da Silva
- Joseph
- Julia Santana
- Richard Lima
- Ian Borges

## 🚀 Funcionalidades  

- Conversão entre diferentes bases numéricas (binária, decimal, octal e hexadecimal).
- Suporte para unidades de medida usadas em construção civil, incluindo:
  - Comprimento (metros, milímetros, polegadas, pés).
  - Área (milímetros quadrados, centímetros quadrados, metros quadrados, hectômetros quadrados e quilômetro quadrados).
  - Volume (metros cúbicos, litros, galões).
  - Potência (watts, quilowatts, cavalos-vapor).
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

### 📐 Conversor de Área

O conversor de área, é uma biblioteca construída em linguagem C, onde permite a conversão entre diferentes unidades de medida. As suas funções permitem realizar o cálculo automaticamente, e sua interface é simples e eficiente, solicitando ao usuário a unidade de entrada, o valor da área e a unidade de saída, para obter um resultado imediato. A aplicação assume que os dados fornecidos sobre as unidades de entrada e saída estão corretas, realizando verificação apenas em casos graves.

### 🧮 unidades permitidas

As seguintes unidades área são aceitas no conversor:

1. milímetros quadrados
2. centímetros quadrados
3. metros quadrados
4. hectares
5. quilômetros quadrados

### 🛠️ Forma de uso

O usuário deve seguir os seguintes passos:

1. escolher a opção 1 do menu principal;
2. inserir a unidade de entrada;
3. inserir a unidade de saída;
4. informar o valor da área a ser convertida;
  
Após as informações serem fornecidas o conversor será executado e o valor convertido retornado.

### ⚠️ Observações

1. *Erros*: em caso das unidades de entrada e saída forem as mesmas ou a área informada for menor que 0 (ex.: -0.0001), o programa é interrompido e o erro é informado ao usuário;

#### 🌡️ Conversor de Temperaturas

O Conversor de Temperaturas tem o uso simples, porém, muito eficaz. Quando a aplicação for iniciada e o usuário escolher a opção de conversão de temperaturas, ele será redirecionado a sessão onde a aplicação irá perguntar: "Insira a temperatura e a unidade de origem (ex: 100 C): ", a própria aplicação já mostra ao usuário como a inserção de dados deve ser inserida (número* _espaço unidade-de-temperatura*). Depois do usuário inserir a temperatura que deseja converter para uma outra unidade, ele escolhe para qual outra unidade ele quer que seja convertida (C ou C para Celsius, K ou k para Kelvin, F ou f para Fahrenheit), após ele confirmar a unidade de temnperatura, a aplicação irá retornar o numero convertido.
Observações: se o usuário escolher determinada temperatura e unidade de medida e no momento que ele escolher para qual unidade de medida quer converter for a mesma inicial, a aplicação irá retornar o mesmo número e unidade de medida iniciais, pois a conversão de celsius para celcius não altera o valor (o memso vale para as outras unidade de temperatura).

#### 💾 Conversor de Unidades de Armazenamento

O Conversor de Unidades de Armazenamento é uma ferramenta simples e eficaz para converter valores entre diferentes unidades de armazenamento digital, como **bit**, **byte**, **kilobyte**, **megabyte**, **gigabyte** e **terabyte**. Este conversor é ideal para sistemas que precisam realizar cálculos precisos entre as unidades de armazenamento.

#### 🛠️ Funcionamento
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

#### 🧮 Exemplo de Uso
Se o usuário deseja converter `1 Megabyte` para `Kilobytes`:
1. O valor `1` é multiplicado pelo fator de conversão de **Megabyte para Bits** (`8.0 * 1024 * 1024`), resultando em `8.388.608 bits`.
2. Este valor em bits é dividido pelo fator de conversão de **Kilobytes para Bits** (`8.0 * 1024`), resultando em `1024 Kilobytes`.
3. O conversor retorna o valor `1024 Kilobytes`.

---

#### 🔧 Configurações de Conversão
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

#### ⚠️ Observações
1. **Unidades Inválidas:** Se a unidade de origem ou destino for inválida (fora do intervalo definido de 0 a 5), o conversor retorna `-1` para indicar erro.
2. **Conversão entre a Mesma Unidade:** Se a unidade de origem for igual à unidade de destino, o valor retornado será o mesmo fornecido como entrada.

---
##### ⚡ Conversor de Potência

O conversor de potência permite realizar a conversão entre diferentes unidades de potência, incluindo **Watts (W)**, **Quilowatts (kW)** e **Cavalos-vapor (cv)**. Esta funcionalidade é ideal para aplicações em engenharia elétrica, mecânica e outras áreas que demandam cálculos precisos de potência.


##### 🛠️ Funcionamento
O sistema aceita entradas no formato:
- **Valor numérico**: Representa a magnitude da potência.
- **Unidade de origem**: Unidade da potência fornecida pelo usuário.
- **Unidade de destino**: Unidade para a qual a potência será convertida.


##### 🌟 Unidades Aceitas
1. **W** ou **w**: Watts.
2. **KW**, **kW**, **kw**, **Kw**: Quilowatts.
3. **CV**, **cv**, **Cv**, **cV**: Cavalos-vapor.


##### 🧮 Exemplo de Uso
Ao executar o programa, o usuário deve:
1. Informar o valor da potência.
2. Especificar a unidade de origem (exemplo: `W` para Watts).
3. Especificar a unidade de destino (exemplo: `KW` para Quilowatts).

**Exemplo:**
Para converter `1000 W` para **Quilowatts (kW)**:
- O valor de entrada será `1000`.
- A unidade de origem será `W`.
- A unidade de destino será `KW`.
O sistema retornará: **A conversão de `1000 W` para `1 KW`.**


##### ⚠️ Observações
1. **Validação de Unidades**: O sistema verifica se as unidades fornecidas pelo usuário são válidas. Caso contrário, o valor retornado será `-1` para indicar erro.
2. **Conversão para a Mesma Unidade**: Se as unidades de origem e destino forem iguais, o sistema retornará o valor fornecido sem alterações.

---
#### 💧 Conversor de Volume
O módulo conversor_volume é uma funcionalidade essencial da biblioteca embarca_kit, projetada para facilitar a conversão entre diferentes unidades de volume. Ele suporta as seguintes unidades:

- Litros (l)
- Mililitros (ml)
- Metros cúbicos (m³)

#### 🛠️ Funcionamento
A função conversor_volume aceita três parâmetros:

1. **unidade_inicial**: A unidade do valor fornecido (string: "l", "ml", ou "m3").
2. **unidade_final**: A unidade para a qual o valor será convertido (string: "l", "ml", ou "m3").
3. **valor**: O valor numérico a ser convertido (float).

Com base nos parâmetros, o código calcula e retorna o valor convertido, exibindo também o resultado no console com precisão de 8 casas decimais.

#### 🚫 Tratamento de Erros 
Se for fornecida uma unidade inválida, o programa exibe a mensagem:

conversão incorreta!

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
