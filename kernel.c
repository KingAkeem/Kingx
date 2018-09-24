static char* const VGA_MEMORY = (char*)0xb8000;
static const int VGA_WIDTH = 80;
static const int VGA_HEIGHT = 25;

void kernel_early(void) {
  // do something here
}

int main(void) {
  const char * str = "Hello world";
  unsigned int i = 0; // place holder for text string position
  unsigned int j = 0; // place holder for video buffer position
  while (str[i] != '\0') {
    VGA_MEMORY[j] = str[i];
    VGA_MEMORY[j + 1] = 0x01;
    i++;
    j = j + 2;
  }
  return 0;
}
