#include <unistd.h>

int main()
{
    write(1, "C:\\Windows\\System32\\notepad.exe", 31);
    return 0;
}
