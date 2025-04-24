/*Write a menu-driven program that implements a circular linked list for the following operations:

Create
Insert
Delete
Reverse

Test case 1
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·1	
Position:·1	
Element:·10	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·1	
Position:·3	
Element:·30	
Position·not·found⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
Elements·in·CLL·are:·10·-->·⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·1	
Position:·2	
Element:·20	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
Elements·in·CLL·are:·10·-->·20·-->·⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·1	
Position:·1	
Element:·5	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
Elements·in·CLL·are:·5·-->·10·-->·20·-->·⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·1	
Position:·4	
Element:·30	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
Elements·in·CLL·are:·5·-->·10·-->·20·-->·30·-->·⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·4	
CLL·reversed⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
Elements·in·CLL·are:·30·-->·20·-->·10·-->·5·-->·⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·1	
Position:·1	
Element:·40	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
Elements·in·CLL·are:·40·-->·30·-->·20·-->·10·-->·5·-->·⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·4	
CLL·reversed⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
Elements·in·CLL·are:·5·-->·10·-->·20·-->·30·-->·40·-->·⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·2	
Position:·6	
Position·not·found⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·2	
Position:·1	
Deleted·element:·5⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
Elements·in·CLL·are:·10·-->·20·-->·30·-->·40·-->·⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·4	
CLL·reversed⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
Elements·in·CLL·are:·40·-->·30·-->·20·-->·10·-->·⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·2	
Position:·1	
Deleted·element:·40⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
Elements·in·CLL·are:·30·-->·20·-->·10·-->·⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·4	
CLL·reversed⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
Elements·in·CLL·are:·10·-->·20·-->·30·-->·⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·5	
Test case 2
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·2	
CLL·is·empty⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
CLL·is·empty⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·4	
CLL·is·empty⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·1	
Position:·1	
Element:·10	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
Elements·in·CLL·are:·10·-->·⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·2	
Position:·1	
Deleted·element:·10⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
CLL·is·empty⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·2	
CLL·is·empty⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·5	
Test case 3
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·1	
Position:·1	
Element:·12	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·1	
Position:·1	
Element:·13	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·1	
Position:·2	
Element:·14	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
Elements·in·CLL·are:·13·-->·14·-->·12·-->·⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·1	
Position:·3	
Element:·15	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
Elements·in·CLL·are:·13·-->·14·-->·15·-->·12·-->·⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·2	
Position:·1	
Deleted·element:·13⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·3	
Elements·in·CLL·are:·14·-->·15·-->·12·-->·⏎	
1.Insert·2.Delete·3.Display·4.Reverse·5.Exit⏎	
choice:·5*/

//code
#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data;
    struct node *next;
} Node;

typedef Node* NODE;


NODE insertAtPositionInCLL(NODE first, int pos, int data) {
    NODE newNode = (NODE)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if (first == NULL) {
        if (pos == 1) {
            newNode->next = newNode;
            return newNode;
        } else {
            printf("Position not found\n");
            free(newNode);
            return first;
        }
    }
    int count = 0;
    NODE temp = first;
    do {
        count++;
        temp = temp->next;
    } while (temp != first);
    

    if (pos < 1 || pos > count + 1) {
        printf("Position not found\n");
        free(newNode);
        return first;
    }
    

    if (pos == 1) {
        NODE last = first;
        while (last->next != first)
            last = last->next;
        newNode->next = first;
        last->next = newNode;
        return newNode; 
    }
    
    temp = first;
    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return first;
}
NODE deleteAtPositionInCLL(NODE first, int pos) {
    

    if (pos < 1 || pos > count) {
        printf("Position not found\n");
        return first;
    }
 if (pos == 1) {

        if (first->next == first) {
            printf("Deleted element: %d\n", first->data);
            free(first);
            return NULL;
        }
        NODE last = first;
        while (last->next != first)
            last = last->next;
        NODE temp = first;
        first = first->next;
        last->next = first;
        printf("Deleted element: %d\n", temp->data);
        free(temp);
        return first;
    }
    
  NODE prev = first;
    for (int i = 1; i < pos - 1; i++) {
        prev = prev->next;
    }
    NODE toDelete = prev->next;
    prev->next = toDelete->next;
    printf("Deleted element: %d\n", toDelete->data);
    free(toDelete);
    return first;
}
void traverseListInCLL(NODE first) {
    NODE temp = first;
    do {
        printf("%d --> ", temp->data);
        temp = temp->next;
    } while (temp != first);
    printf("\n");
}


NODE reverseCLL(NODE first) {
    if (first == NULL || first->next == first)
        return first;
    

    NODE last = first;
    while (last->next != first)
        last = last->next;
    last->next = NULL;
    
    NODE prev = NULL, curr = first, next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    

    first = prev;
    

    last = first;
    while (last->next != NULL)
        last = last->next;
    last->next = first;
    
    return first;
}
void main() {
    NODE first = NULL;
    int x, pos, op;
    while (1) {
        printf("1.Insert 2.Delete 3.Display 4.Reverse 5.Exit\n");
        printf("choice: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                printf("Position: ");
                scanf("%d", &pos);
                if (pos <= 0) {
                    printf("Position not found\n");
                } else {
                    printf("Element: ");
                    scanf("%d", &x);
                    first = insertAtPositionInCLL(first, pos, x);
                }
                break;
            case 2:
                if (first == NULL) {
                    printf("CLL is empty\n");
                } else {
                    printf("Position: ");
                    scanf("%d", &pos);
                    first = deleteAtPositionInCLL(first, pos);
                }
                break;
            case 3:
                if (first == NULL) {
                    printf("CLL is empty\n");
                } else {
                    printf("Elements in CLL are: ");
                    traverseListInCLL(first);
                }
                break;
            case 4:
                if (first == NULL) {
                    printf("CLL is empty\n");
                } else {
                    first = reverseCLL(first);
                    printf("CLL reversed\n");
                }
                break;
            case 5:
                exit(0);
        }
    }
}
