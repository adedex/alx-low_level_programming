char *_strncat(char *dest, char *src, int n) {
    char *dest_end = dest;

    while (*dest_end != '\0') {
        dest_end++;
    }

    while (*src != '\0' && n > 0) {
        *dest_end = *src;
        dest_end++;
        src++;
        n--;
    }

    *dest_end = '\0';  /* Add null terminator to the end */
    return dest;
}

