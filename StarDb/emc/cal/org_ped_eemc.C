TDataSet *CreateTable() { 
// -----------------------------------------------------------------
// Top/cal/org_ped_eemc Allocated rows: 1440  Used rows: 1440  Row size: 4 bytes
//  Table: emc_pedestal_st[0]--> emc_pedestal_st[1439]
// ====================================================================
// ------  Test whether this table share library was loaded ------
  if (!gROOT->GetClass("St_emc_pedestal")) return 0;
  emc_pedestal_st row;
  St_emc_pedestal *tableSet = new St_emc_pedestal("org_ped_eemc",1440);
//
  memset(&row,0,tableSet->GetRowSize());
  row.ped	 =          0; // pedestal for ADC channel ;
   for (Int_t i=0;i<1440;i++) tableSet->AddAt(&row,i); 
// ----------------- end of code ---------------
 return (TDataSet *)tableSet;
}
