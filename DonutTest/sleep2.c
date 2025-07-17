#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

int main() {
    printf("I'm going to sleep\n");
#ifdef _WIN32
    Sleep(5 * 60 * 1000); // Sleep for 5 minutes (milliseconds)
#else
    sleep(5 * 60);        // Sleep for 5 minutes (seconds)
#endif
    printf("Woke up, exiting now.\n");
    return 0;
} 