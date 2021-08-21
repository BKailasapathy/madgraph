C     This File is Automatically generated by ALOHA 
C     The process calculated in this file is: 
C     P(3,1)*Metric(1,2) - P(3,2)*Metric(1,2) - P(2,1)*Metric(1,3) +
C      P(2,3)*Metric(1,3) + P(1,2)*Metric(2,3) - P(1,3)*Metric(2,3)
C     
      SUBROUTINE VVV1P0_1(V2, V3, COUP, M1, W1,V1)
      IMPLICIT NONE
      COMPLEX*16 CI
      PARAMETER (CI=(0D0,1D0))
      COMPLEX*16 V2(*)
      COMPLEX*16 DENOM
      COMPLEX*16 V3(*)
      REAL*8 P1(0:3)
      REAL*8 M1
      REAL*8 P2(0:3)
      COMPLEX*16 TMP7
      REAL*8 P3(0:3)
      REAL*8 W1
      COMPLEX*16 TMP6
      COMPLEX*16 TMP5
      COMPLEX*16 TMP4
      COMPLEX*16 COUP
      COMPLEX*16 V1(6)
      COMPLEX*16 TMP3
      P2(0) = DBLE(V2(1))
      P2(1) = DBLE(V2(2))
      P2(2) = DIMAG(V2(2))
      P2(3) = DIMAG(V2(1))
      P3(0) = DBLE(V3(1))
      P3(1) = DBLE(V3(2))
      P3(2) = DIMAG(V3(2))
      P3(3) = DIMAG(V3(1))
      V1(1) = +V2(1)+V3(1)
      V1(2) = +V2(2)+V3(2)
      P1(0) = -DBLE(V1(1))
      P1(1) = -DBLE(V1(2))
      P1(2) = -DIMAG(V1(2))
      P1(3) = -DIMAG(V1(1))
      TMP5 = (P1(0)*V2(3)-P1(1)*V2(4)-P1(2)*V2(5)-P1(3)*V2(6))
      TMP4 = (V3(3)*P2(0)-V3(4)*P2(1)-V3(5)*P2(2)-V3(6)*P2(3))
      TMP7 = (V3(3)*V2(3)-V3(4)*V2(4)-V3(5)*V2(5)-V3(6)*V2(6))
      TMP6 = (V2(3)*P3(0)-V2(4)*P3(1)-V2(5)*P3(2)-V2(6)*P3(3))
      TMP3 = (P1(0)*V3(3)-P1(1)*V3(4)-P1(2)*V3(5)-P1(3)*V3(6))
      DENOM = COUP/(P1(0)**2-P1(1)**2-P1(2)**2-P1(3)**2 - M1 * (M1 -CI
     $ * W1))
      V1(3)= DENOM*(TMP7*(-CI*(P2(0))+CI*(P3(0)))+(V2(3)*(-CI*(TMP3)
     $ +CI*(TMP4))+V3(3)*(-CI*(TMP6)+CI*(TMP5))))
      V1(4)= DENOM*(TMP7*(-CI*(P2(1))+CI*(P3(1)))+(V2(4)*(-CI*(TMP3)
     $ +CI*(TMP4))+V3(4)*(-CI*(TMP6)+CI*(TMP5))))
      V1(5)= DENOM*(TMP7*(-CI*(P2(2))+CI*(P3(2)))+(V2(5)*(-CI*(TMP3)
     $ +CI*(TMP4))+V3(5)*(-CI*(TMP6)+CI*(TMP5))))
      V1(6)= DENOM*(TMP7*(-CI*(P2(3))+CI*(P3(3)))+(V2(6)*(-CI*(TMP3)
     $ +CI*(TMP4))+V3(6)*(-CI*(TMP6)+CI*(TMP5))))
      END


