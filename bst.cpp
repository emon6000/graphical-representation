#include <graphics.h>
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

Node* insertNode(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }
    
    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }
    return root;
}


void displayTree(Node* root, int x, int y, int xOffset, int yOffset) {
    if (root == nullptr) {
        return;
    }

    int radius = 20; 
    setcolor(WHITE);
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR, 1);//VERT_DIR//HORIZ_DIR

    circle(x, y, radius);
    
    char valueStr[10];
    sprintf(valueStr, "%d", root->data);
    outtextxy(x - 10, y - 10, valueStr);


    if (root->left != nullptr) {
        line(x, y, x - xOffset, y + yOffset);
        displayTree(root->left, x - xOffset, y + yOffset, xOffset / 2, yOffset);
    }

    if (root->right != nullptr) {
        line(x, y, x + xOffset, y + yOffset);
        displayTree(root->right, x + xOffset, y + yOffset, xOffset / 2, yOffset);
    }
}

int calculateDepth(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + max(calculateDepth(root->left), calculateDepth(root->right));
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    Node* root = nullptr;
    int numValues, value;

    cout << "Enter the number of values to insert in the BST: ";
    cin >> numValues;

    for (int i = 0; i < numValues; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;
        root = insertNode(root, value);
    }

    cleardevice();

    int maxDepth = calculateDepth(root);

    int startX = getmaxx() / 2;
    int startY = 50;              
    int xOffset = 100;           
    int yOffset = 70;             

    displayTree(root, startX, startY, xOffset, yOffset);

    getch();

    closegraph();
    return 0;
}
