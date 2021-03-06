#pragma once
/******************************************************************************/
/* File   : Dcm.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstDcm.hpp"
#include "CfgDcm.hpp"
#include "Dcm_core.hpp"
#include "infDcm_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Dcm:
      INTERFACES_EXPORTED_DCM
   ,  public abstract_module
   ,  public class_Dcm_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstDcm_Type* lptrConst = (ConstDcm_Type*)NULL_PTR;
      infPduRClient_Up infPduRClient_Dcm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
   private:
      FUNC(void, DCM_CODE) print_versions (void);

   public:
      FUNC(void, DCM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, DCM_CONST,       DCM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   DCM_CONFIG_DATA, DCM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, DCM_CODE) DeInitFunction (void);
      FUNC(void, DCM_CODE) MainFunction   (void);
      DCM_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_Dcm, DCM_VAR) Dcm;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

