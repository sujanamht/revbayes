#ifndef Func_certifyPolyhedron_H
#define Func_certifyPolyhedron_H

#include "Procedure.h"

namespace RevLanguage {
    
    class Func_certifyPolyhedron : public Procedure {
        
    public:
        Func_certifyPolyhedron( void );
        
        // Basic utility functions
        Func_certifyPolyhedron*                         clone(void) const;                                          //!< Clone object
        static const std::string&                       getClassType(void);                                         //!< Get Rev type
        static const TypeSpec&                          getClassTypeSpec(void);                                     //!< Get class type spec
        std::vector<std::string>                        getFunctionNameAliases(void) const;                         //!< Get aliases for the Rev name of the function
        std::string                                     getFunctionName(void) const;                                //!< Get the primary name of the function in Rev
        const TypeSpec&                                 getTypeSpec(void) const;                                    //!< Get language type of the object
        
        // Func_quit functions
        const ArgumentRules&                            getArgumentRules(void) const;                               //!< Get argument rules
        const TypeSpec&                                 getReturnType(void) const;                                  //!< Get type of return val
        
        RevPtr<RevVariable>                             execute(void);                                              //!< Execute function
        
    protected:
        
    };
    
}

#endif

