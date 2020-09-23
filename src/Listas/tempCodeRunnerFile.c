
            l3 = insereNo(l3, l1->info, pre );
            l1 = l1->prox;
        }
    }
    while(l2 != NULL){
        if (!busca(l3, l2->info, &pre)){
            l3 = insereNo(l3, l2->info, pre);
            l2 = l2->prox;
        }     
    }
    imprimeLista(l3);
}

// Função principal
int main(void){