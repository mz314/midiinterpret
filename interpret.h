/* 
 * File:   interpret.h
 * Author: maciek
 *
 * Created on 25 lipiec 2013, 13:41
 */

#ifndef INTERPRET_H
#define	INTERPRET_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <libxml/parser.h>
#include <libxml/tree.h>
    
 xmlDocPtr loadXML(char *buffer,int size);
 void freeXML(xmlDocPtr xml,char *buffer);
 int loadFile(char *buffer, const char const *fn); //a helper for testing
 void parseMusicXML(xmlDocPtr xml);
 


    


#ifdef	__cplusplus
}
#endif

#endif	/* INTERPRET_H */

