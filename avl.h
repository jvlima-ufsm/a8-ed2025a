/*
 * avl.h
 * Definição da TAD avl_t.
 *
 * The MIT License (MIT)
 * 
 * Copyright (c) 2025 João Vicente, UFSM
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#pragma once

/* Definicao de Arvore de Busca Binaria (ABB) para inteiros
 */
struct _avl {
    int dado;            /* dado armazenado */
    struct _avl* esq;    /* filho da esquerda */
    struct _avl* dir;    /* filho da direita */

    int altura;          /* altura do nó */
};

/* define o tipo avl_t, derivado da 'struct _avl' */
typedef struct _avl avl_t;

/* cria uma avl vazia, ou seja, retorna NULL */
avl_t* avl_cria(void);

/* insere na avl, retorna a avl atualizada,
 */
avl_t* avl_insere( avl_t* a, int dado );

/* remove da avl o elemento que contem 'dado'.  Se avl ficar vazia, retorna NULL.
   Se nao encontrou, retorna a avl 'a'.
*/
avl_t* avl_remove( avl_t* a, int dado );

/* libera a memória de cada nó da avl.
 * ATENÇÃO: não libera memória dos dados.
 */
void avl_destroi( avl_t* a );

/* retorna se a avl esta vazia (1), ou 0 caso contrario */
int avl_vazia( avl_t* a );

/* busca um elemento na avl.
*/
int avl_busca( avl_t* a, int dado );

/* retorna altura */
inline int avl_altura( const avl_t* const a )
{
    return a->altura;
}

/* retorna Fator de Balanceamento */
inline int avl_get_fb( const avl_t* const esq, const avl_t* const dir )
{
    return (avl_altura(esq) - avl_altura(dir));
}

/* faz uma rotacao simples a esquerda */
avl_t* avl_rotacao_esq( avl_t* a );

/* faz uma rotacao simples a direita */
avl_t* avl_rotacao_dir( avl_t* a );

/* faz uma rotacao dupla direita-esquerda */
avl_t* avl_rotacao_dir_esq( avl_t* a );

/* faz uma rotacao dupla esquerda-direita */
avl_t* avl_rotacao_esq_dir( avl_t* a );

void avl_imprime(avl_t* a);
