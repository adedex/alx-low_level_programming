unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    int found = 0;

    while (*s != '\0' && *s != ' ') {
        while (*accept != '\0') {
            if (*s == *accept) {
                count++;
                found = 1;
                break;
            }
            accept++;
        }

        if (!found) {
            return count;
        }
        found = 0;
        accept = accept - (count - 1);
        s++;
    }

    return count;
}

