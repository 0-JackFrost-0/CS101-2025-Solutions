#include "implementation.cpp"

int main() {
    Restaurant r;
    int n, operation;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> operation;

        if (operation == 1) {
            r.getOrder();
        } else if (operation == 2) {
            r.showOrder();
        } else if (operation == 3) {
            r.deleteOrder();
        } else if (operation == 4) {
            r.updateOrder();
        }
    }
}