ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
c      written by the UFO converter
ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc

      SUBROUTINE COUP1()

      IMPLICIT NONE
      INCLUDE 'model_functions.inc'

      DOUBLE PRECISION PI, ZERO
      PARAMETER  (PI=3.141592653589793D0)
      PARAMETER  (ZERO=0D0)
      INCLUDE 'input.inc'
      INCLUDE 'coupl.inc'
      GC_71 = MDL_COMPLEXI*MDL_LAM2*MDL_COS__TH-MDL_COMPLEXI*MDL_LAM1
     $ *MDL_SIN__TH
      GC_72 = MDL_COMPLEXI*MDL_LAM1*MDL_COS__TH+MDL_COMPLEXI*MDL_LAM2
     $ *MDL_SIN__TH
      END
