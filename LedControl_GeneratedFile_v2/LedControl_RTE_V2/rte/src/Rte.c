#include "Rte_Type.h"


Value_1_ButtonState1 TopLevelComposition_Prototype_1_P_Port_1_SR1_Button1State_SR_1_Button1State_Element_1 = 0;
Value_2_ButtonState2 TopLevelComposition_Prototype_1_P_Port_2_SR2_Button2State_SR_2_Button2State_Element_1 = 0;


Std_ReturnType Rte_Write_TopLevelComposition_Prototype_1_P_Port_1_SR1_Button1State_SR_1_Button1State_Element_1(Value_1_ButtonState1 data)
{
     TopLevelComposition_Prototype_1_P_Port_1_SR1_Button1State_SR_1_Button1State_Element_1 = data;
   return E_OK;
}

Std_ReturnType Rte_Write_TopLevelComposition_Prototype_1_P_Port_2_SR2_Button2State_SR_2_Button2State_Element_1(Value_2_ButtonState2 data)
{
     TopLevelComposition_Prototype_1_P_Port_2_SR2_Button2State_SR_2_Button2State_Element_1 = data;
   return E_OK;
}

Std_ReturnType Rte_Read_TopLevelComposition_Prototype_2_R_Port_1_SR1_Button1State_SR_1_Button1State_Element_1(Value_1_ButtonState1* data)
{
   Std_ReturnType return_value = E_NOT_OK;
   if (NULL_PTR == data){
         return_value = E_NOT_OK;
   }

   else{
      *data = TopLevelComposition_Prototype_1_P_Port_1_SR1_Button1State_SR_1_Button1State_Element_1;
      return_value = E_OK;
   }
   return return_value;
}

Std_ReturnType Rte_Read_TopLevelComposition_Prototype_2_R_Port_2_SR2_Button2State_SR_2_Button2State_Element_1(Value_2_ButtonState2* data)
{
   Std_ReturnType return_value = E_NOT_OK;
   if (NULL_PTR == data){
         return_value = E_NOT_OK;
   }

   else{
      *data = TopLevelComposition_Prototype_1_P_Port_2_SR2_Button2State_SR_2_Button2State_Element_1;
      return_value = E_OK;
   }
   return return_value;
}



