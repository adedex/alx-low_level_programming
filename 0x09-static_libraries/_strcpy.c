char *_strcpy(char *dest, char *src) {
    char *dest_start = dest;

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';  /* Add null terminator to the end */
    return dest_start;
}

