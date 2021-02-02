#ifndef Func_chronoToPhylo_h
#define Func_chronoToPhylo_h

#include <string>
#include <iosfwd>
#include <vector>

#include "RlBranchLengthTree.h"
#include "RlTypedFunction.h"
#include "DeterministicNode.h"
#include "DynamicNode.h"
#include "RevPtr.h"
#include "RlDeterministicNode.h"
#include "Tree.h"
#include "TypedDagNode.h"
#include "TypedFunction.h"

namespace RevLanguage {
class ArgumentRules;
class TypeSpec;
    
    class Func_chronoToPhylo : public TypedFunction<BranchLengthTree> {
        
    public:
        Func_chronoToPhylo( void );
        
        // Basic utility functions
        Func_chronoToPhylo*                                                 clone(void) const;                                          //!< Clone the object
//        virtual RevPtr<RevVariable>                                         execute(void);
        static const std::string&                                           getClassType(void);                                         //!< Get Rev type
        static const TypeSpec&                                              getClassTypeSpec(void);                                     //!< Get class type spec
        std::string                                                         getFunctionName(void) const;                                //!< Get the primary name of the function in Rev
        const TypeSpec&                                                     getTypeSpec(void) const;                                    //!< Get the type spec of the instance
        
        // Function functions you have to override
        RevBayesCore::TypedFunction<RevBayesCore::Tree>*                    createFunction(void) const;                                 //!< Create internal function object
        const ArgumentRules&                                                getArgumentRules(void) const;                               //!< Get argument rules
        
    };
    
}

#endif /* Func_chronoToPhylo_h */
