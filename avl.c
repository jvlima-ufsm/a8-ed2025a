/*
 * avl.c
 * Implementação da TAD avl_t.
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
#include <stdio.h>
#include <stdlib.h>

#include "avl.h"

avl_t* avl_cria(void)
{
	return NULL;
}

avl_t* avl_insere( avl_t* a, int dado )
{
	if(a == NULL){
		a = (avl_t*)malloc(sizeof(avl_t));
		a->esq = a->dir = NULL;
		a->dado = dado;
		a->altura = 0;
		return a;
	}

	if( dado > a->dado )
		a->dir = avl_insere( a->dir, dado );
	else if ( dado < a->dado )
		a->esq = avl_insere( a->esq, dado );

	/* TODO atualiza a altura do nó */

	/* TODO verifica FB e efetua rotacoes */
	
	return a;
}


/* faz uma rotacao simples a esquerda */
avl_t* avl_rotacao_esq( avl_t* a )
{
	/* TODO */
	return a;
}

/* faz uma rotacao simples a direita */
avl_t* avl_rotacao_dir( avl_t* a )
{
	/* TODO */
	return a;
}

/* faz uma rotacao dupla direita-esquerda */
avl_t* avl_rotacao_dir_esq( avl_t* a )
{
	/* TODO */
	return a;
}

/* faz uma rotacao dupla esquerda-direita */
avl_t* avl_rotacao_esq_dir( avl_t* a )
{
	/* TODO */
	return a;
}

avl_t* avl_remove( avl_t* a, int dado )
{
	/* TODO */
	return NULL;
}

void avl_destroi( avl_t* a )
{
	if(a != NULL){
		avl_destroi(a->esq);
		avl_destroi(a->dir);
		free(a);
	}
}

int avl_vazia( avl_t* a )
{
	return (a == NULL);
}

int avl_busca( avl_t* a, int dado )
{
	if( a == NULL)
		return 0;

	if( a->dado == dado )
		return 1;
	else if (dado > a->dado)
		return avl_busca(a->dir, dado);
	else if (dado < a->dado)
		return avl_busca(a->esq, dado);

	return 0;
}

void avl_imprime(avl_t* a)
{
	if(a==NULL)
		return;
	avl_imprime(a->esq);
	printf("%d ", a->dado);
	avl_imprime(a->dir);
}
