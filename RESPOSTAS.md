# Respostas da dupla — Atividade PontoCerto

## Dupla

| Papel | Nome completo | Usuário do GitHub |
|---|---|---|
| Integrante 1 (Dono do fork) | Leandro Henrique | (leadrodev-sudo) |
| Integrante 2 (Colaboradora) | Yasmin Lopes Mendes | (lopesyas) |

## Explicação da solução

<!-- 3 a 5 linhas: como calculaPontos e as fábricas de campanhas eliminam a repetição de código? -->

## Desafio 2

Essas promoções valem por um dia e são usadas uma única vez. Uma lambda passada direto para `calculaPontos` descreve a regra no próprio lugar em que ela é usada, sem criar um nome que nunca mais será reaproveitado.

## Desafio 3

`campanhaMultiplicadora 5` devolve uma **função** (a regra "multiplicar por 5"), não um número. O `:t` confirma: `:t campanhaMultiplicadora 5` mostra `Int -> Int`, o tipo de uma função que recebe um `Int` e devolve um `Int`. Só aparece um número quando essa função é aplicada a um valor, como em `campanhaMultiplicadora 5 150`.

## Desafio 4

**a)** A ordem muda a conta. Com `blackFriday` primeiro: 150 × 5 = 750, depois + 200 = 950. Com `aniversarioCliente` primeiro: 150 + 200 = 350, depois × 5 = 1750. Multiplicar e somar não dão o mesmo resultado quando a ordem troca, porque no segundo caso o bônus também é multiplicado.

**b)** Primeiro `blackFriday` (multiplica) e depois `aniversarioCliente` (soma). Assim o bônus de 200 entra no final e não é multiplicado.

## Desafio 5 — revisão de código

| Erro | Função | O que estava errado | Como o GHC avisou (resumo da mensagem) | Como corrigimos |
|---|---|---|---|---|
| 1 | | | | |
| 2 | | | | |
| 3 | | | | |
| 4 | | | | |

## Desafio 6 — Haskell × C

<!-- Cite duas diferenças entre o calculaPontos em Haskell e o calculaPontos em C. -->

## Evidência de execução

Saída do `main` de `fidelidade.hs`:

```text
(cole aqui)
```

Saída do `main` de `revisao.hs` (depois de corrigido):

```text
(cole aqui)
```

Saída de `pontocerto.c`:

```text
(cole aqui)
```
