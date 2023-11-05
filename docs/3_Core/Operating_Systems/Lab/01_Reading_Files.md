## Return Value

| Return Value | Read Successful? | Return Value     |
| ------------ | ---------------- | ---------------- |
| $>= 0$       | ✅                | no of bytes read |
| $< 0$        | ❌                |                  |

```c
#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  int fd;
  char content[100]="\0";
  fd = open(argv[1], O_RDONLY);
  if(fd < 0)
  {
    printf("File could not be opened.\n");
    return 1;
  }
  else
  {
    read(fd, content, sizeof(content)-1);
    write(1, content, sizeof(content)-1);
  }
  return 0;
}
```

- `argc` stands for argument count and argv stands for argument values
- `open`: Used to Open the file for reading, writing or both.
    - `int open (const char* Path, int flags [, int mode ]);`
- Flags
    - `O_RDONLY`: read only
    - `O_WRONLY`: write only
    - `O_RDWR`: read and write,  
    - `O_CREAT`: create file if it doesn’t exist
    - `O_EXCL`: prevent creation if it already exists
