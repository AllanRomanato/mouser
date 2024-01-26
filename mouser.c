#include <stdio.h>
#include <windows.h>

int main() {
    while (1) {
        mouse_event(MOUSEEVENTF_MOVE, 1, 0, 0, 0); //This is a windows API call to access the MOUSE
        printf("Moving 1px\n");
        Sleep(60000); //This is 1 min pause, you may change it
    }
    return 0;
}
