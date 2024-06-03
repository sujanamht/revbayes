#ifndef Dist_SFSDiffusionApproximation_H
#define Dist_SFSDiffusionApproximation_H

#include "SFSDiffusionApproximationDistribution.h"
#include "ModelVector.h"
#include "Natural.h"
#include "Probability.h"
#include "RlTypedDistribution.h"

namespace RevLanguage {
    
    /**
     * The RevLanguage wrapper of the SFSDiffusionApproximation distribution.
     *
     * The RevLanguage wrapper of the SFSDiffusionApproximation distribution simply
     * manages the interactions through the Rev with our core.
     * That is, the internal distribution object can be constructed and hooked up
     * in a model graph.
     * See the SFSDiffusionApproximationDistribution for more details.
     *
     *
     * @copyright Copyright 2009-
     * @author The RevBayes Development Core Team (Sebastian Hoehna)
     * @since 2022-05-23, version 1.1
     *
     */
    class Dist_SFSDiffusionApproximation : public TypedDistribution< ModelVector<RealPos> > {
        
    public:
        Dist_SFSDiffusionApproximation(void);
        virtual                                        ~Dist_SFSDiffusionApproximation(void);
        
        // Basic utility functions
        Dist_SFSDiffusionApproximation*                 clone(void) const;                                                                      //!< Clone the object
        static const std::string&                       getClassType(void);                                                                     //!< Get Rev type
        static const TypeSpec&                          getClassTypeSpec(void);                                                                 //!< Get class type spec
        const TypeSpec&                                 getTypeSpec(void) const;                                                                //!< Get the type spec of the instance
        std::string                                     getDistributionFunctionName(void) const;                                                //!< Get the Rev-name for this distribution.
        virtual MethodTable                             getDistributionMethods( void ) const;                                                   //!< Get the member methods
        const MemberRules&                              getParameterRules(void) const;                                                          //!< Get member rules (const)
        void                                            printValue(std::ostream& o) const;                                                      //!< Print the general information on the function ('usage')
        
        
        // Distribution functions you have to override
        RevBayesCore::SFSDiffusionApproximationDistribution*         createDistribution(void) const;
        
    protected:
        
        void                                            setConstParameter(const std::string& name, const RevPtr<const RevVariable> &var);       //!< Set member variable
        
        
    private:
        
        RevPtr<const RevVariable>                       theta;
        RevPtr<const RevVariable>                       lengths;
        RevPtr<const RevVariable>                       num_sites;
        RevPtr<const RevVariable>                       num_individuals;
        RevPtr<const RevVariable>                       folded;
        RevPtr<const RevVariable>                       coding;
        
    };
    
}

#endif
