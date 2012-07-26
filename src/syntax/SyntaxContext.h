#ifndef SYNTAXCONTEXT_H
#define SYNTAXCONTEXT_H

#include "SyntaxRule.h"

#include <QHash>
#include <QString>

namespace Syntax {

class Context
{
public:
    typedef QHash<QString, Syntax::Context> Hash;
    
    QString name; ///< Name of the context
    QString attribute;
    QString lineEndContext;
    QString fallThrough;
    QString fallThroughContext;
    QString dynamic;
    QString noIndentationBasedFolding;
    QString caseSensitive;
    Syntax::Rule::List rules; ///< Rules of the context
    
    Context();
    virtual ~Context();
};

}; // Syntax

#endif // SYNTAXCONTEXT_H
