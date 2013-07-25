#include "interpret.h"

int loadFile(char *buffer, const char const *fn) {
    int rd = 0;
    unsigned long len;
    FILE *f = fopen(fn, "rb");
    fseek(f, 0, SEEK_END);
    len = (unsigned long) ftell(f);
    fseek(f, 0, SEEK_SET);
    buffer = (char *) malloc(len);
    if (!fn)
        return 0;
    rd = fread((void *) buffer, 1, len, f);
    fclose(f);
    return rd;
}

xmlDocPtr loadXML(char *buffer, int size) {
    xmlDocPtr doc; /* the resulting document tree */
    doc = xmlReadMemory(buffer, size, "noname.xml", NULL, 0);
    if (doc == NULL)
        return 0;
    return doc;
}

void freeXML(xmlDocPtr xml, char *buffer) {
    if (xml)
        xmlFreeDoc(xml);
    if (buffer)
        free(buffer);
}

