#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    printf("<<< ex002 - LISTAGEM DE FORMATAÇÕES >>>\n\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\\n\t=\tQuebra linha\n\\t\t=\tTabulação\n\\\\\t=\tEscreve \\\n\\?\t=\tEscreve ?\n\\a\t=\tEmite um beep\n%%\t=\tEscreve %%");
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
}