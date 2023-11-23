#include "arvore_binaria.h"

int main() {
    struct TreeNode* root = NULL;
    int choice, value;

    do {
        printf("\nMenu:\n");
        printf("1. Inserir valor\n");
        printf("2. Remover valor\n");
        printf("3. Buscar valor\n");
        printf("4. Percorrer em ordem\n");
        printf("5. Percorrer em pre-ordem\n");
        printf("6. Percorrer em pos-ordem\n");
        printf("7. Valor minimo\n");
        printf("8. Valor maximo\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;
                
            case 2:
                printf("Digite o valor a ser removido: ");
                scanf("%d", &value);
                root = removeNode(root, value);
                break;
                
            case 3:
                printf("Digite o valor a ser buscado: ");
                scanf("%d", &value);
                struct TreeNode* result = search(root, value);
                if (result) {
                    printf("Valor encontrado na árvore.\n");
                } else {
                    printf("Valor não encontrado na árvore.\n");
                }
                break;

            case 4:
                printf("Inorder Traversal: ");
                inorder(root);
                printf("\n");
                break;

            case 5:
                printf("Preorder Traversal: ");
                preorder(root);
                printf("\n");
                break;

            case 6:
                printf("Postorder Traversal: ");
                postorder(root);
                printf("\n");
                break;

            case 7:
    {
        struct TreeNode* minNode = findMin(root);
        if (minNode) {
            printf("Valor mínimo: %d\n", minNode->key);
        } else {
            printf("Árvore vazia. Não há valor mínimo.\n");
        }
        break;
    }

            case 8:
    {
        struct TreeNode* maxNode = findMax(root);
        if (maxNode) {
            printf("Valor máximo: %d\n", maxNode->key);
        } else {
            printf("Árvore vazia. Não há valor máximo.\n");
        }
        break;
    }

            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }

    } while (choice != 0);

    // Liberação de memória
    freeTree(root);

    return 0;
}
