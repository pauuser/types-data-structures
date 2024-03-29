#ifndef __H_GRAPH__
#define __H_GRAPH__

#include <stdio.h>

#include "bst.h"
#include "avl.h"
#include "errors.h"

// Функция перевода структуры ДДП в формат DOT
void bst_to_dot(bst_node_t *tree, void *param);

// Вывод ДДП в формате DOT
void bst_export_to_dot(FILE *f, const char *tree_name,
                                       bst_node_t *tree);

// Вывод изображения ДДП
void bst_output_dot_graph(bst_node_t *bst);

// Функция перевода структуры АВЛ-дерева в формат DOT
void avl_to_dot(avl_node_t *tree, void *param);

// Вывод АВЛ-дерева в формате DOT
void avl_export_to_dot(FILE *f, const char *tree_name,
                                       avl_node_t *tree);

// Вывод изображения АВЛ-дерева
void avl_output_dot_graph(avl_node_t *avl);

#endif