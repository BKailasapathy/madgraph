# This file was automatically created by FeynRules 2.3.13
# Mathematica version: 10.0 for Mac OS X x86 (64-bit) (December 4, 2014)
# Date: Sat 21 Nov 2015 09:59:24



from object_library import all_parameters, Parameter


from function_library import complexconjugate, re, im, csc, sec, acsc, asec, cot

# This is a default parameter object representing 0.
ZERO = Parameter(name = 'ZERO',
                 nature = 'internal',
                 type = 'real',
                 value = '0.0',
                 texname = '0')

# User-defined parameters.
aEWM1 = Parameter(name = 'aEWM1',
                  nature = 'external',
                  type = 'real',
                  value = 127.9,
                  texname = '\\text{aEWM1}',
                  lhablock = 'SMINPUTS',
                  lhacode = [ 1 ])

Gf = Parameter(name = 'Gf',
               nature = 'external',
               type = 'real',
               value = 0.0000116637,
               texname = 'G_f',
               lhablock = 'SMINPUTS',
               lhacode = [ 2 ])

aS = Parameter(name = 'aS',
               nature = 'external',
               type = 'real',
               value = 0.1184,
               texname = '\\alpha _s',
               lhablock = 'SMINPUTS',
               lhacode = [ 3 ])

ymb = Parameter(name = 'ymb',
                nature = 'external',
                type = 'real',
                value = 4.7,
                texname = '\\text{ymb}',
                lhablock = 'YUKAWA',
                lhacode = [ 5 ])

ymt = Parameter(name = 'ymt',
                nature = 'external',
                type = 'real',
                value = 172,
                texname = '\\text{ymt}',
                lhablock = 'YUKAWA',
                lhacode = [ 6 ])

ymtau = Parameter(name = 'ymtau',
                  nature = 'external',
                  type = 'real',
                  value = 1.777,
                  texname = '\\text{ymtau}',
                  lhablock = 'YUKAWA',
                  lhacode = [ 15 ])

MM1 = Parameter(name = 'MM1',
                nature = 'external',
                type = 'real',
                value = 1,
                texname = '\\text{MM1}',
                lhablock = 'FRBlock',
                lhacode = [ 1 ])

MM2 = Parameter(name = 'MM2',
                nature = 'external',
                type = 'real',
                value = 100,
                texname = '\\text{MM2}',
                lhablock = 'FRBlock',
                lhacode = [ 2 ])

MM12 = Parameter(name = 'MM12',
                 nature = 'external',
                 type = 'real',
                 value = 0.5,
                 texname = '\\text{MM12}',
                 lhablock = 'FRBlock',
                 lhacode = [ 3 ])

lam11 = Parameter(name = 'lam11',
                  nature = 'external',
                  type = 'real',
                  value = 0.1,
                  texname = '\\text{lam11}',
                  lhablock = 'FRBlock6',
                  lhacode = [ 1 ])

lam12 = Parameter(name = 'lam12',
                  nature = 'external',
                  type = 'real',
                  value = 0.1,
                  texname = '\\text{lam12}',
                  lhablock = 'FRBlock6',
                  lhacode = [ 2 ])

lam13 = Parameter(name = 'lam13',
                  nature = 'external',
                  type = 'real',
                  value = 0.1,
                  texname = '\\text{lam13}',
                  lhablock = 'FRBlock6',
                  lhacode = [ 3 ])

lam21 = Parameter(name = 'lam21',
                  nature = 'external',
                  type = 'real',
                  value = 0.1,
                  texname = '\\text{lam21}',
                  lhablock = 'FRBlock7',
                  lhacode = [ 1 ])

lam22 = Parameter(name = 'lam22',
                  nature = 'external',
                  type = 'real',
                  value = 0.1,
                  texname = '\\text{lam22}',
                  lhablock = 'FRBlock7',
                  lhacode = [ 2 ])

lam23 = Parameter(name = 'lam23',
                  nature = 'external',
                  type = 'real',
                  value = 0.1,
                  texname = '\\text{lam23}',
                  lhablock = 'FRBlock7',
                  lhacode = [ 3 ])

lam1p1 = Parameter(name = 'lam1p1',
                   nature = 'external',
                   type = 'real',
                   value = 0.1,
                   texname = '\\text{lam1p1}',
                   lhablock = 'FRBlock8',
                   lhacode = [ 1 ])

lam1p2 = Parameter(name = 'lam1p2',
                   nature = 'external',
                   type = 'real',
                   value = 0.1,
                   texname = '\\text{lam1p2}',
                   lhablock = 'FRBlock8',
                   lhacode = [ 2 ])

lam1p3 = Parameter(name = 'lam1p3',
                   nature = 'external',
                   type = 'real',
                   value = 0.1,
                   texname = '\\text{lam1p3}',
                   lhablock = 'FRBlock8',
                   lhacode = [ 3 ])

lam2p1 = Parameter(name = 'lam2p1',
                   nature = 'external',
                   type = 'real',
                   value = 0.1,
                   texname = '\\text{lam2p1}',
                   lhablock = 'FRBlock9',
                   lhacode = [ 1 ])

lam2p2 = Parameter(name = 'lam2p2',
                   nature = 'external',
                   type = 'real',
                   value = 0.1,
                   texname = '\\text{lam2p2}',
                   lhablock = 'FRBlock9',
                   lhacode = [ 2 ])

lam2p3 = Parameter(name = 'lam2p3',
                   nature = 'external',
                   type = 'real',
                   value = 0.1,
                   texname = '\\text{lam2p3}',
                   lhablock = 'FRBlock9',
                   lhacode = [ 3 ])

MZ = Parameter(name = 'MZ',
               nature = 'external',
               type = 'real',
               value = 91.1876,
               texname = '\\text{MZ}',
               lhablock = 'MASS',
               lhacode = [ 23 ])

MTA = Parameter(name = 'MTA',
                nature = 'external',
                type = 'real',
                value = 1.777,
                texname = '\\text{MTA}',
                lhablock = 'MASS',
                lhacode = [ 15 ])

MT = Parameter(name = 'MT',
               nature = 'external',
               type = 'real',
               value = 172,
               texname = '\\text{MT}',
               lhablock = 'MASS',
               lhacode = [ 6 ])

MB = Parameter(name = 'MB',
               nature = 'external',
               type = 'real',
               value = 4.7,
               texname = '\\text{MB}',
               lhablock = 'MASS',
               lhacode = [ 5 ])

MH = Parameter(name = 'MH',
               nature = 'external',
               type = 'real',
               value = 125,
               texname = '\\text{MH}',
               lhablock = 'MASS',
               lhacode = [ 25 ])

Muv = Parameter(name = 'Muv',
                nature = 'external',
                type = 'real',
                value = 400,
                texname = '\\text{Muv}',
                lhablock = 'MASS',
                lhacode = [ 9000007 ])

Mev = Parameter(name = 'Mev',
                nature = 'external',
                type = 'real',
                value = 50,
                texname = '\\text{Mev}',
                lhablock = 'MASS',
                lhacode = [ 9000008 ])

WZ = Parameter(name = 'WZ',
               nature = 'external',
               type = 'real',
               value = 2.4952,
               texname = '\\text{WZ}',
               lhablock = 'DECAY',
               lhacode = [ 23 ])

WW = Parameter(name = 'WW',
               nature = 'external',
               type = 'real',
               value = 2.085,
               texname = '\\text{WW}',
               lhablock = 'DECAY',
               lhacode = [ 24 ])

WT = Parameter(name = 'WT',
               nature = 'external',
               type = 'real',
               value = 1.50833649,
               texname = '\\text{WT}',
               lhablock = 'DECAY',
               lhacode = [ 6 ])

WH = Parameter(name = 'WH',
               nature = 'external',
               type = 'real',
               value = 0.00407,
               texname = '\\text{WH}',
               lhablock = 'DECAY',
               lhacode = [ 25 ])

Wpe1 = Parameter(name = 'Wpe1',
                 nature = 'external',
                 type = 'real',
                 value = 1,
                 texname = '\\text{Wpe1}',
                 lhablock = 'DECAY',
                 lhacode = [ 9000005 ])

Wpe2 = Parameter(name = 'Wpe2',
                 nature = 'external',
                 type = 'real',
                 value = 1,
                 texname = '\\text{Wpe2}',
                 lhablock = 'DECAY',
                 lhacode = [ 9000006 ])

Wuv = Parameter(name = 'Wuv',
                nature = 'external',
                type = 'real',
                value = 1,
                texname = '\\text{Wuv}',
                lhablock = 'DECAY',
                lhacode = [ 9000007 ])

Wev = Parameter(name = 'Wev',
                nature = 'external',
                type = 'real',
                value = 1,
                texname = '\\text{Wev}',
                lhablock = 'DECAY',
                lhacode = [ 9000008 ])

MPe1 = Parameter(name = 'MPe1',
                 nature = 'internal',
                 type = 'real',
                 value = 'cmath.sqrt(MM1**2 + MM2**2 - cmath.sqrt(MM1**4 + 4*MM12**4 - 2*MM1**2*MM2**2 + MM2**4))/cmath.sqrt(2)',
                 texname = '\\text{MPe1}')

MPe2 = Parameter(name = 'MPe2',
                 nature = 'internal',
                 type = 'real',
                 value = 'cmath.sqrt(MM1**2 + MM2**2 + cmath.sqrt(MM1**4 + 4*MM12**4 - 2*MM1**2*MM2**2 + MM2**4))/cmath.sqrt(2)',
                 texname = '\\text{MPe2}')

th = Parameter(name = 'th',
               nature = 'internal',
               type = 'real',
               value = 'cmath.pi/2. + cmath.atan((2*MM12**2)/(MM1**2 - MM2**2))/2.',
               texname = '\\text{th}')

aEW = Parameter(name = 'aEW',
                nature = 'internal',
                type = 'real',
                value = '1/aEWM1',
                texname = '\\alpha _{\\text{EW}}')

G = Parameter(name = 'G',
              nature = 'internal',
              type = 'real',
              value = '2*cmath.sqrt(aS)*cmath.sqrt(cmath.pi)',
              texname = 'G')

MW = Parameter(name = 'MW',
               nature = 'internal',
               type = 'real',
               value = 'cmath.sqrt(MZ**2/2. + cmath.sqrt(MZ**4/4. - (aEW*cmath.pi*MZ**2)/(Gf*cmath.sqrt(2))))',
               texname = 'M_W')

ee = Parameter(name = 'ee',
               nature = 'internal',
               type = 'real',
               value = '2*cmath.sqrt(aEW)*cmath.sqrt(cmath.pi)',
               texname = 'e')

sw2 = Parameter(name = 'sw2',
                nature = 'internal',
                type = 'real',
                value = '1 - MW**2/MZ**2',
                texname = '\\text{sw2}')

cw = Parameter(name = 'cw',
               nature = 'internal',
               type = 'real',
               value = 'cmath.sqrt(1 - sw2)',
               texname = 'c_w')

sw = Parameter(name = 'sw',
               nature = 'internal',
               type = 'real',
               value = 'cmath.sqrt(sw2)',
               texname = 's_w')

g1 = Parameter(name = 'g1',
               nature = 'internal',
               type = 'real',
               value = 'ee/cw',
               texname = 'g_1')

gw = Parameter(name = 'gw',
               nature = 'internal',
               type = 'real',
               value = 'ee/sw',
               texname = 'g_w')

vev = Parameter(name = 'vev',
                nature = 'internal',
                type = 'real',
                value = '(2*MW*sw)/ee',
                texname = '\\text{vev}')

lam = Parameter(name = 'lam',
                nature = 'internal',
                type = 'real',
                value = 'MH**2/(2.*vev**2)',
                texname = '\\text{lam}')

yb = Parameter(name = 'yb',
               nature = 'internal',
               type = 'real',
               value = '(ymb*cmath.sqrt(2))/vev',
               texname = '\\text{yb}')

yt = Parameter(name = 'yt',
               nature = 'internal',
               type = 'real',
               value = '(ymt*cmath.sqrt(2))/vev',
               texname = '\\text{yt}')

ytau = Parameter(name = 'ytau',
                 nature = 'internal',
                 type = 'real',
                 value = '(ymtau*cmath.sqrt(2))/vev',
                 texname = '\\text{ytau}')

muH = Parameter(name = 'muH',
                nature = 'internal',
                type = 'real',
                value = 'cmath.sqrt(lam*vev**2)',
                texname = '\\mu')

I1b33 = Parameter(name = 'I1b33',
                  nature = 'internal',
                  type = 'complex',
                  value = 'yb',
                  texname = '\\text{I1b33}')

I2b33 = Parameter(name = 'I2b33',
                  nature = 'internal',
                  type = 'complex',
                  value = 'yt',
                  texname = '\\text{I2b33}')

I3b33 = Parameter(name = 'I3b33',
                  nature = 'internal',
                  type = 'complex',
                  value = 'yt',
                  texname = '\\text{I3b33}')

I4b33 = Parameter(name = 'I4b33',
                  nature = 'internal',
                  type = 'complex',
                  value = 'yb',
                  texname = '\\text{I4b33}')

