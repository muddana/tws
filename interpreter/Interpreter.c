/*******************************************************************
         Copyright (C) 1986 by Manuel E. Bermudez
*******************************************************************}
 
{*******************************************************************
              I N T E R P R E T E R     M O D U L E
*******************************************************************/
#include <stdio.h>
#include <header/CommandLine.h>
#include <header/Table.h>
#include <header/Text.h>
#include <header/Error.h>
#include <header/String_Input.h>
#include <header/Machine.h>    
#include <header/Interpreter.h>


extern short TraceSpecified;
extern FILE *TraceFile; 
extern char *TraceFileName; 
FILE * CodeFile; 
char * CodeFileName;
FILE * input;
FILE * output;


void InitializeInterpreter(int argc, char *argv[])
{
   int index;

   input = stdin;
   output = stdout;
 
   InitializeMachine();
       /* MACHINE OPERATIONS */

   String_Array_To_String_Constant ( "HALT", HALTOP );
   String_Array_To_String_Constant ( "NOP", NOP );
   String_Array_To_String_Constant ( "LIT", LITOP );
   String_Array_To_String_Constant ( "LLV", LLVOP );
   String_Array_To_String_Constant ( "LGV", LGVOP );
   String_Array_To_String_Constant ( "SLV", SLVOP );
   String_Array_To_String_Constant ( "SGV", SGVOP );
   String_Array_To_String_Constant ( "LLIV", LLIVOP );
   String_Array_To_String_Constant ( "LGIV", LGIVOP );
   String_Array_To_String_Constant ( "SLIV", SLIVOP );
   String_Array_To_String_Constant ( "SGIV", SGIVOP );
   String_Array_To_String_Constant ( "LLA", LLAOP );
   String_Array_To_String_Constant ( "LGA", LGAOP );
   String_Array_To_String_Constant ( "LUV", LUVOP );
   String_Array_To_String_Constant ( "SUV", SUVOP );
   String_Array_To_String_Constant ( "UOP", UOPOP );
   String_Array_To_String_Constant ( "BOP", BOPOP );
   String_Array_To_String_Constant ( "POP", POPOP );
   String_Array_To_String_Constant ( "DUP", DUPOP );
   String_Array_To_String_Constant ( "SWAP", SWAPOP );
   String_Array_To_String_Constant ( "CALL", CALLOP );
   String_Array_To_String_Constant ( "RTN", RTNOP );
   String_Array_To_String_Constant ( "GOTO", GOTOOP );
   String_Array_To_String_Constant ( "COND", CONDOP );
   String_Array_To_String_Constant ( "CODE", CODEOP );
   String_Array_To_String_Constant ( "SOS", SOSOP );
         /* UNARY OPERANDS */
   String_Array_To_String_Constant ( "UNOT", UNOT );
   String_Array_To_String_Constant ( "UNEG", UNEG );
   String_Array_To_String_Constant ( "USUCC", USUCC );
   String_Array_To_String_Constant ( "UPRED", UPRED );
         /* BINARY OPERANDS */
   String_Array_To_String_Constant ( "BAND", BAND );
   String_Array_To_String_Constant ( "BOR", BOR );
   String_Array_To_String_Constant ( "BPLUS", BPLUS );
   String_Array_To_String_Constant ( "BMINUS", BMINUS );
   String_Array_To_String_Constant ( "BMULT", BMULT );
   String_Array_To_String_Constant ( "BDIV", BDIV );
   String_Array_To_String_Constant ( "BMOD", BMOD );
   String_Array_To_String_Constant ( "BEXP", BEXP );
   String_Array_To_String_Constant ( "BEQ", BEQ );
   String_Array_To_String_Constant ( "BNE", BNE );
   String_Array_To_String_Constant ( "BLE", BLE );
   String_Array_To_String_Constant ( "BGE", BGE );
   String_Array_To_String_Constant ( "BLT", BLT );
   String_Array_To_String_Constant ( "BGT", BGT );
         /* OS SERVICE CALL OPERANDS */
   String_Array_To_String_Constant ( "TRACEX", TRACEX );
   String_Array_To_String_Constant ( "DUMPMEM", DUMPMEM );
   String_Array_To_String_Constant ( "INPUT", OSINPUT );
   String_Array_To_String_Constant ( "OUTPUT", OSOUTPUT );
   String_Array_To_String_Constant ( "OUTPUTL", OSOUTPUTL );
   String_Array_To_String_Constant ( "EOF", OSEOF );
   String_Array_To_String_Constant ( "INPUTC", OSINPUTC );
   String_Array_To_String_Constant ( "OUTPUTC", OSOUTPUTC );
   String_Array_To_String_Constant ( "LIMIT", LIMITOP );
 
   index = System_Flag("-trace",argc,argv);
   TraceFileName = System_Argument ("-trace","_TEXEC",argc,argv);
   TraceFile = fopen(TraceFileName,"w");

   if (TraceFile == NULL) 
   {
      printf("TRACEFILE OPEN ERROR\n");
      FatalError();
   }

   if (index) 
      TraceSpecified = true;
   else 
      TraceSpecified = false;
    
   CodeFileName = System_Argument("-code", "_CODE", argc, argv);

}

int ValidOpCode(Instruction I)
{
   switch (OpCodeOf(I)) 
   {
      case NOP:
      case LITOP:
      case LLVOP:
      case LGVOP:
      case SLVOP:
      case LLIVOP:
      case LGIVOP:
      case SLIVOP:
      case SGIVOP:
      case LIMITOP:
      case SGVOP:
      case LLAOP:
      case LGAOP:
      case LUVOP:
      case SUVOP:
      case UOPOP:
      case BOPOP:
      case POPOP:
      case DUPOP:
      case SWAPOP:
      case CALLOP:
      case RTNOP:
      case GOTOOP:
      case CONDOP:
      case CODEOP:
      case SOSOP:
                   return(true);

      default :
                   return(false);
   }
}


int ValidBinOp(Instruction I)
{
   switch (Operand1Of(I)) 
   {
      case BAND:
      case BOR:
      case BPLUS:
      case BMINUS:
      case BMULT:
      case BDIV:
      case BEXP:
      case BMOD:
      case BEQ:
      case BNE:
      case BLE:
      case BGE:
      case BLT:
      case BGT:
		return(true);
      default:
                return(false);
   }
}


int ValidOsOp(Instruction I)
{
   switch (Operand1Of(I)) 
   {
      case TRACEX:
      case DUMPMEM:
      case OSINPUT:
      case OSINPUTC:
      case OSOUTPUT:
      case OSOUTPUTC:
      case OSOUTPUTL:
      case OSEOF:
		     return(true);
      default  :
                     return(false);
   }
}


void TraceExecution(Instruction I)
{
 
   DumpMemory(TraceFile);
   fprintf(TraceFile,"%s %1d : ","Executing Instruction at line ",I);
   WriteString(TraceFile,OpCodeOf(I));
   fprintf(TraceFile, " ");

   if (OpCodeOf(I) ==  NOP   || OpCodeOf(I) == LITOP   ||
       OpCodeOf(I) == LLVOP  || OpCodeOf(I) == LGVOP   ||
       OpCodeOf(I) == SLVOP  || OpCodeOf(I) == LLIVOP  || 
       OpCodeOf(I) == LGIVOP || OpCodeOf(I) == SLIVOP  ||
       OpCodeOf(I) == SGIVOP || OpCodeOf(I) == LIMITOP ||
       OpCodeOf(I) == SGVOP  || OpCodeOf(I) == LLAOP   ||
       OpCodeOf(I) == LGAOP  || OpCodeOf(I) == LUVOP   ||
       OpCodeOf(I) == SUVOP  || OpCodeOf(I) == POPOP   ||
       OpCodeOf(I) == CALLOP || OpCodeOf(I) == RTNOP   ||
       OpCodeOf(I) == GOTOOP || OpCodeOf(I) == CONDOP  ||
       OpCodeOf(I) ==  CODEOP ) 
      fprintf(TraceFile, " %d ",Operand1Of(I));
 
   if (OpCodeOf(I) == SOSOP || OpCodeOf(I) == UOPOP ||
                               OpCodeOf(I) == BOPOP) 
   {
      WriteString(TraceFile,Operand1Of(I));
      fprintf(TraceFile, " ");
   }
 
   if (OpCodeOf(I) == CONDOP || OpCodeOf(I) == LUVOP  ||
                               OpCodeOf(I) == SUVOP)
      fprintf(TraceFile," %d ", Operand2Of(I));

   fprintf(TraceFile, "\n");
}

void Execute(void)
{
   Instruction I;
   int temp, temp1, temp2,temp3, Addr;
   char tempc;


    /* Start  here */
   I = StartInstruction;
   while (OpCodeOf(I) != HALTOP) 
   {
      if (TraceSpecified)
         TraceExecution(I);

      if (ValidOpCode(I)) 
      {
         switch (OpCodeOf(I)) 
         {
            case NOP     : break;

	    case LITOP   : PushLf(Operand1Of(I));
                           break;

	    case LLVOP   : PushLf(Lf(Operand1Of(I)));
                           break;

	    case LGVOP   : PushLf(Gf(Operand1Of(I)));
                           break;

            case SLVOP   : UpdateLf(Operand1Of(I),PopLf());
                           break;
 
            case SGVOP   : UpdateGf(Operand1Of(I),PopLf());
                           break;
 
            case LLIVOP  : PushLf(Gf(Lf(Operand1Of(I))));
                           break;
 
            case LGIVOP  : PushLf(Gf(Gf(Operand1Of(I))));
		    	   break;
 
            case SLIVOP  : UpdateGf(Lf(Operand1Of(I)),PopLf());
			   break;
 
            case SGIVOP  : UpdateGf(Gf(Operand1Of(I)),PopLf());
			   break;
 
            case LLAOP   : PushLf(LocalAddress(Operand1Of(I)));
			   break;
 
            case LGAOP   : PushLf(GlobalAddress(Operand1Of(I)));
			   break;

            case LUVOP   : Addr = LocalAddress(0);
                           for (temp = 1; temp <= Operand1Of(I); temp++) 
                           { 
                              if (Addr == 0) 
                              {
                                 fprintf(output,
                                         "TOO MANY FRAMES SPECIFIED IN LUV\n");
                                 FatalError();
	                      }
                              Addr = Gf(Addr);
                           }
                           PushLf(Gf(Addr + Operand2Of(I)));
		           break;

            case SUVOP   : Addr = LocalAddress(0);
                           for (temp = 1; temp <= Operand1Of(I); temp++) 
                           { 
                              if (Addr == 0)
                              {
                                 fprintf(output,
                                         "TOO MANY FRAMES SPECIFIED IN SUV\n");
                                 FatalError();
                              }
                              Addr = Gf(Addr);
                            }
                            UpdateGf (Addr+Operand2Of(I),PopLf());
                            break;

            case UOPOP   : temp = PopLf();
                           switch (Operand1Of(I)) 
                           {
                              case UNOT  : PushLf(1 - temp); 
                                           break;

                              case UNEG  : PushLf(- temp);
                                           break;

                              case USUCC : PushLf(temp + 1);
                                           break;

                              case UPRED : PushLf(temp - 1);
                                           break;
			    }
			    break;

	     case BOPOP   : temp2 = PopLf(); 
                            temp1 = PopLf();
                            if (ValidBinOp(I)) 
                            {
                               switch (Operand1Of(I)) 
                               {
                                  case BAND   : PushLf(temp1 * temp2);
                                                break;

                                  case BOR    : if ((temp1+temp2) > 0)
                                                   PushLf (1);
                                                else 
                                                   PushLf(0);
                                                break;

                                  case BPLUS  : PushLf(temp1 + temp2);
                                                break;

                                  case BMINUS : PushLf(temp1 - temp2);
                                                break;

                                  case BMULT  : PushLf(temp1 * temp2);
                                                break;

                                  case BDIV   : if (temp2 == 0) 
                                                {
                                                   fprintf(output,
                                                    "<<< MACHINE ERROR >>>: ");
                                                   fprintf(output,
                                                    "DIVISION BY ZERO.\n");
                                                   DumpMemory(output);
                                                   FatalError();
					        } 
                                                else 
                                                   PushLf(temp1 / temp2);
                                              
                                                break;

                                  case BEXP   : if (temp2 < 0) 
                                                {
                                                   fprintf(output,
                                                    "<<< MACHINE ERROR >>>: ");
                                                   fprintf(output,
                                                    "NEGATIVE EXPONENT. \n");
                                                   DumpMemory(output);
                                                   FatalError();
                                                } 
                                                else 
                                                {
                                                   temp = 1;
                                                   for (temp3=1; temp3<=temp2; temp3++)
                                                      temp = temp * temp1;
                                                   PushLf(temp);
					        }
					        break;

                                  case BMOD   : PushLf(temp1 % temp2);
                                                break;

                                  case BEQ    : if (temp1 ==  temp2)
                                                   PushLf(1);
                                                else
                                                   PushLf(0);
                                                break;

                                  case BNE    : if (temp1 != temp2) 
                                                   PushLf(1);
                                                else
                                                   PushLf(0);
                                                break;

                                  case BLE    : if (temp1 <= temp2)
                                                   PushLf(1);
                                                else
                                                   PushLf (0);
                                                break;

                                  case BGE    : if (temp1 >= temp2)
                                                   PushLf (1);
                                                else
                                                   PushLf (0);
                                                break;

                                  case BLT    : if (temp1 <  temp2)
                                                   PushLf(1);
                                                else
                                                   PushLf(0);
                                                break;

                                  case BGT    : if (temp1 >  temp2)
                                                   PushLf(1);
                                                else
                                                   PushLf(0);
                                                break;

			       } /* switch(Operand1Of(I)) */

			    } 
                            else 
                            {
                               fprintf(output,"<<< MACHINE ERROR >>>: ");
                               fprintf(output,"UNKNOWN OPERAND NAME: ");
    		               fprintf(TraceFile," %d ",Operand1Of(I));
                               fprintf(output,"\n");
                               DumpMemory(output);
                               FatalError();
		            }
		            break;

             case POPOP   : PopOffLf(Operand1Of(I));
                            break;
 
             case DUPOP   : PushLf(TopLf());
                            break;
 
             case SWAPOP  : temp1 = PopLf();
                            temp2 = PopLf();
                            PushLf(temp1);
                            PushLf(temp2);
		            break;

             case CALLOP  : PushReturnStack(I);
                            OpenFrame(Operand1Of(I));
                            I = PopLf() - 1;
		            break;
 
             case RTNOP   : temp = DepthLf() - Operand1Of(I);
                            if (temp > 0) 
                            {
                             for (temp1 = 0; temp1 <= (Operand1Of(I) - 1); temp1++)
                                UpdateLf(temp1, Lf(temp + temp1));

                             PopOffLf(temp);
		            }
                            I = PopReturnStack();
                            CloseFrame (Operand1Of(I));
			    break;
 
             case GOTOOP  : I = Operand1Of(I) - 1;
		  	    break;

             case CONDOP  : temp = PopLf();
                            if (temp == 0)
                               I = Operand2Of(I) - 1;
                            else
                               I = Operand1Of(I) - 1;
                            break;
 
             case CODEOP  : PushLf(Operand1Of(I));
                            break;
 
             case LIMITOP : temp2 = PopLf();  /* U */
                            temp1 = PopLf();  /* L */
                            temp  = PopLf();  /* X */
                            if ((temp >= temp1) && (temp <= temp2))
                               PushLf(temp);
                            else 
                            {
                               fprintf(output,"<<< MACHINE ERROR >>>: ");
                               fprintf(output,"VALUE OUT OF RANGE\n");
                               DumpMemory(output);
                               FatalError();
			    }
			    break;

             case SOSOP   : if (ValidOsOp(I)) 
                            {
                                switch (Operand1Of(I)) 
                                {
                                   case TRACEX  : if (TraceSpecified)
                                                     TraceSpecified = false;
                                                  else
                                                     TraceSpecified = true;
					          break;

                                   case DUMPMEM : DumpMemory(output);
                                                  break;

                                   case OSINPUT : fscanf(input," ");
					          if (feof(input)) { 
                                                     fprintf(output,
                                                      "<<< MACHINE ERROR >>>: ");
                                                     fprintf(output,
                                                      "TRIED TO READ PAST <EOF>\n");
                                                     DumpMemory(output);
                                                     FatalError();
                                                  } 
                                                  else 
                                                  {
                                                     fscanf(input,"%d",&temp);
                                                     PushLf(temp);
					          }
					          break;
 
                                  case OSINPUTC : fscanf(input," ");
					          if (feof(input)) 
                                                  {
                                                     fprintf(output,
                                                      "<<< MACHINE ERROR >>>: ");
                                                     fprintf(output,
                                                      "TRIED TO READ PAST <EOF>\n");
                                                     DumpMemory(output);
                                                     FatalError();
                                                  } 
                                                  else 
                                                  {
                                                     fscanf(input,"%c",&tempc);
                                                     PushLf(tempc);
					          }
					          break;
 
                                  case OSOUTPUT : temp = PopLf();
                                                  fprintf(output,"%d ",temp);
					          break;
 
                                  case OSOUTPUTC: tempc = PopLf();
                                                  fprintf(output,"%c",tempc);
					          break;
 
                                  case OSOUTPUTL: fprintf(output,"\n");
						  break;
 
                                  case OSEOF    : fscanf(input," ");
					          if (feof(input))
                                                     PushLf(1);
                                                  else
                                                     PushLf(0);
					          break;
                                }
			     } 
                             else 
                             {
                                fprintf(output,"%s","<<< MACHINE ERROR >>>: ");
                                fprintf(output,"%s%1d `",
                                        "UNKNOWN OPERAND NAME: ",Operand1Of(I));
    		                fprintf(TraceFile," %d ",Operand1Of(I));
                                fprintf(output, "` \n");
                                DumpMemory(output);
                                FatalError();
                             }
                             break;
	 } /* switch (OpCodeOf(I)) */
              
      } 
      else 
      {
         fprintf(output,"%s","<<< MACHINE ERROR >>>: ");
         fprintf(output,"%s","UNKNOWN OP CODE NAME: ");
    	 fprintf(output," %d ",OpCodeOf(I));
         fprintf(output,"\n");
         FatalError();
      }
 
      I++;
 
   }
}  


int StringToInteger(String S)
{
   int n,i;

   n = 0;
   for (i = 1; i <= StringLength(S); i++)
      n = n * 10 + (int) (Character(S,i)) - 48; 

   return(n);
}


short ResolveReferences(void)
{
   Stack Ref;
   Instruction I,j;
   int Labelref;

   Ref = AllocateStack (200);

   for (I = 1; I <= SizeOf (Labels); I++) 
   {
      if (LabelOf(I) != UndefinedString)
         if (Element(Ref,LabelOf(I)) == UndefinedString)
            Assign(Ref,LabelOf(I),I);
         else 
         {
            fprintf(output,"<<< MACHINE ERROR >>>: ");
            fprintf(output,"DUPLICATE INSTRUCTION WITH LABEL ");
    	    fprintf(output," %d **",LabelOf(I));
    	    WriteString(output,LabelOf(I));
            fprintf(output,"**: LINE %1d \n",I);
            return(false);
         }
   }

   for (I = 1; I <= SizeOf(Labels); I++) 
   {
      if (OpCodeOf(I) == GOTOOP || OpCodeOf(I) == CONDOP ||
                                   OpCodeOf(I) == CODEOP) 
      {
         Labelref = Element(Ref,Operand1Of(I));
         if (Labelref == 0) 
         {
            fprintf(output,"<<< MACHINE ERROR >>>: ");
            fprintf(output,"NO INSTRUCTION WITH LABEL ");
    	    fprintf(TraceFile," %d ",Operand1Of(I));
            fprintf(output,"': LINE %1d \n",I);
            return(false);
         }
         
         Assign ( Ref, Operand1Of(I), 1000000+Labelref );
         Assign ( Operand1, I, Labelref % 1000000);
      }

      if (OpCodeOf(I) == CONDOP) 
      {
         Labelref = Element(Ref,Operand2Of(I));
         if (Labelref == 0) 
         {
            fprintf(output,"<<< MACHINE ERROR >>>: ");
            fprintf(output,"NO INSTRUCTION WITH LABEL ");
    	    fprintf(output," %d ",Operand2Of(I));
            fprintf(output,"': LINE %1d \n",I);
            return(false);
         }
         Assign (Ref, Operand2Of(I), 1000000+Labelref );
         Assign (Operand2, I, Labelref % 1000000);
      }

      if (OpCodeOf(I) == LITOP || OpCodeOf(I) ==  LLVOP
            || OpCodeOf(I) ==  LGVOP  || OpCodeOf(I) == SLVOP
            || OpCodeOf(I) ==  SGVOP  || OpCodeOf(I) == LLIVOP
            || OpCodeOf(I) ==  LGIVOP || OpCodeOf(I) == SLIVOP
            || OpCodeOf(I) ==  SGIVOP || OpCodeOf(I) == LLAOP
            || OpCodeOf(I) ==  LGAOP  || OpCodeOf(I) == LUVOP
            || OpCodeOf(I) ==  SUVOP  || OpCodeOf(I) == POPOP
            || OpCodeOf(I) ==  CALLOP || OpCodeOf(I) == RTNOP)
          Assign (Operand1,I,StringToInteger(Operand1Of(I)));

       if (OpCodeOf(I) == LUVOP || OpCodeOf(I) == SUVOP )
          Assign(Operand2,I,StringToInteger(Operand2Of(I)));
   }

   for (I =1; I <= TextSize(); I++ ) 
   {
      if (Element(Ref,I) != 0)
         if (Element(Ref,I) < 1000000) 
         {
            fprintf(output,"<<< MACHINE ERROR >>>: ");
            fprintf(output,"NO REFERENCE TO INSTRUCTION WITH LABEL ");
	    fprintf(output,"%d ", I);
            fprintf(output,": LINE %1d \n",I);
            fprintf(output,"Element(Ref)= %d\n",Element(Ref,I));
            PrintAllStrings(stdout);
            return(false);
	 }
   }

   return(true);
}


void Interpret(int argc, char *argv[])
{
   printf("   Loading and Resolving References ...\n");
   InitializeInterpreter(argc, argv);

   CodeFile = fopen(CodeFileName,"r");

   if (CodeFile == NULL)
     printf("%s NOT FOUND. \n",CodeFileName);
   else 
   {
      ReadCode(CodeFile);

      if (ResolveReferences())       /*Mini Loader Here*/ 
      {  
         printf("   Begin Execution:\n");
         Execute();
         printf("   End Execution.\n");
      } 
      else
         printf("Execution Inhibited.\n");
   }
}

