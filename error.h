#ifndef _SCC_ERROR_H_
#define _SCC_ERROR_H_


class Token;
class Expr;

void Error(const char* format, ...);
void Error(const Token* tok, const char* format, ...);
void Error(const Expr* expr, const char* format, ...);

#endif
