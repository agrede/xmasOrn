*MODEL FILE NAME: NC7WZ14TP6
**********************************************************************
* FAIRCHILD I/O ENCRYPTED  SPICE DECK FOR NC7WZ14
**********************************************************************
*
* MODEL NAME: NC7WZ14T.SPI
* DATE CREATED/UPDATED: CREATED 02/01/2001
* REVISION NUMBER: 1.0
* CREATED BY: TIMOTHY COYLE
*
* MODEL TYPE: I/O SUBCIRCUIT,  PACKAGE MODELS INCLUDED  SOT23  SC70-6
* PROCESS TYPE: NOMINAL
* TEMP RANGE:-40C TO 85C
*
* VERIFIED ON AVANTI STAR-HSPICE VERSION 98.4
*
********************************************************************************
* DISCLAIMER:
********************************************************************************
*
* FAIRCHILD SEMICONDUCTOR CORPORATION HEREBY GRANTS THE USER OF THIS
* SPICE MODEL A NON-EXCLUSIVE, NONTRANSFERABLE LICENSE TO USE THIS
* SPICE MODEL UNDER THE FOLLOWING TERMS.  BEFORE USING THIS
* SPICE MODEL, THE USER SHOULD READ THIS LICENSE.
*
* THE USER IS GRANTED THIS LICENSE ONLY TO USE THE SPICE MODEL AND IS
* NOT GRANTED RIGHTS TO SELL, LOAN, RENT, LEASE OR LICENSE THE SPICE
* MODEL IN WHOLE OR IN PART, OR IN MODIFIED FORM TO ANYONE OTHER THAN
* USER. USER MAY MODIFY THE SPICE MODEL TO SUIT ITS SPECIFIC
* APPLICATIONS BUT RIGHTS TO DERIVATIVE WORKS AND SUCH MODIFICATIONS
* SHALL BELONG TO FAIRCHILD.
*
* THIS SPICE MODEL IS PROVIDED ON AN 'AS IS' BASIS AND FAIRCHILD SEMICONDUCTOR
* MAKES ABSOLUTELY NO WARRANTY WITH RESPECT TO THE INFORMATION CONTAINED
* HEREIN.  FAIRCHILD DISCLAIMS AND CUSTOMER WAIVES ALL WARRANTIES,
* EXPRESS OR IMPLIED, INCLUDING WARRANTIES OF MERCHANTABILITY OR FITNESS
* FOR A PARTICULAR PURPOSE. THE ENTIRE RISK AS TO QUALITY AND PERFORMANCE
* IS WITH THE CUSTOMER.  ACCORDINGLY, IN NO EVENT SHALL THE COMPANY BE
* LIABLE FOR ANY DAMAGES, WHETHER IN CONTRACT OR TORT, INCLUDING ANY
* LOST PROFITS OR OTHER INCIDENTAL, CONSEQUENTIAL, EXEMPLARY, OR
* PUNITIVE DAMAGES ARISING OUT OF THE USE OR APPLICATION OF THE SPICE
* MODEL PROVIDED IN THIS PACKAGE.  FURTHER, FAIRCHILD RESERVES THE RIGHT
* TO MAKE CHANGES WITHOUT NOTICE TO ANY PRODUCT HEREIN TO IMPROVE,
* RELIABILITY, FUNCTION, OR DESIGN.  FAIRCHILD DOES NOT CONVEY ANY LICENSE
* UNDER PATENT RIGHTS OR ANY OTHER INTELLECTUAL PROPERTY RIGHTS,
* INCLUDING THOSE OF THIRD PARTIES.
*
* FAIRCHILD IS NOT OBLIGATED TO PROVIDE MAINTENANCE OR SUPPORT FOR
* THE LICENSED SPICE MODEL.
*
********************************************************************************
* SPECIAL NOTES:
********************************************************************************
*
*
* BETA HSPICE MODEL DISCLAIMER
*
* THIS HSPICE MODEL IS CLASSIFIED AS A 'BETA MODEL ONLY'.  'BETA MODELS' HAVE
*BEEN VERIFIED FOR OPERATION AND FUNCTIONALITY ONLY.  THESE MODELS HAVE NOT BEEN
*CORRELATED TO CURRENT PROCESSES OR DESIGN CHARACTERISTICS.  IT IS BELIEVED THAT
* THESE 'BETA MODELS' WERE REPRESENTATIVE OF THE DESIGN AND PROCESS AT THE TIME
* OF THEIR INTRODUCTION THOUGH NO LEVEL OF ACCURACY IS IMPLIED.
*
* ALL 'BETA MODELS' ARE CLEARLY MARKED 'BETA MODEL ONLY'.  'BETA MODELS' ARE
*USED AT YOUR OWN RISK AND SHOULD BE TREATED AS AN APPROXIMATE REPRESENTATION OF
* THE SILICON DEVICE.  THERE IS NO SUPPORT AVAILABLE FOR 'BETA MODELS'.  IF YOU
*HAVE QUESTIONS OR CONCERN REGARDING THIS POLICY PLEASE CONTACT YOUR LOCAL SALES
* REPRESENTATIVE, THE FAIRCHILD SEMICONDUCTOR TECHNICAL RESPONSE CENTER
* (1-877-564-4263) OR VISIT THE FAIRCHILD SEMICONDUCTOR WEBSITE AT
* HTTP://WWW.FAIRCHILDSEMI.COM
*
*
*                       ALL MATERIAL CONTAINED HEREIN IS
*                  COPYRIGHT 2001 - FAIRCHILD SEMICONDUCTOR CORPORATION
*
********************************************************************************
*
* THIS MODEL MAY CONTAIN MODIFIED FUNCTIONALITY. IT MAY NOT REPRESENT TIMING
* CHARACTERISTICS OF THE NC7WZ14 OR ANY OTHER FAIRCHILD SEMICONDUCTOR DEVICE.
*ITIS REPRESENTATIVE OF THE BASIC INPUT, OUTPUT CHARACTERISTICS OF THE NC7WZ14
* DEVICE
*
* THE TERMINALS OF THIS NETLIST ARE DESCRIBED AS FOLLOWS:
*      A         =     DATA INPUT
*      Y         =     DATA OUTPUT
*      VCCEXT    =     EXTERNAL VCC
*      GNDEXT    =     EXTERNAL GROUND
*
*
*
***********************************************************************
***********************************************************************
* SPICE SUBCIRCUITS FOR PACKAGE PINS
***********************************************************************
* THESE FILES ARE SUBCIRCUIT SPICE MODELS FOR THE FAIRCHILD SEMICONDUCTOR
* LOGIC DEVICES. THEY ARE INTENDED FOR USE AS PACKAGE
* MODELS WHICH WILL ACCURATELY REPRESENT THE CHARACTERISTICS OF THE
* INDICATED PACKAGE PINS.
*
* THESE MODEL FILES CAN BE USED INDEPENDENTLY FROM TEMPERATURE.
*
* THE TERMINALS OF THESE SUBCIRCUITS ARE LABELLED AS FOLLOWS:
*       EXT         NODE    1
*       I           NODE    3
*       GNDI        NODE    GND
*
* SPECIAL NOTES:
*   1. THE EXT NODE IS THE NODE WHICH IS USED TO CONNECT EXTERNAL LOADS
*      TO THE PACKAGE.  THE INT NODE IS THE NODE WHICH IS USED TO CONNECT
*      INPUT OR OUTPUT SUBCIRCUITS TO THE PACKAGE ELEMENTS.  IN OTHER
*      WORDS, THIS IS THE BOND PAD NODE.
*   2. THE GNDI NODE IS A GROUND NODE WHICH IS INTERNAL TO A PACKAGE.  ALL
*      SUBCIRCUITS WHICH REPRESENT INTERNAL CIRCUITS IN A PACKAGE SHOULD
*      HAVE THEIR GNDI NODES CONNECTED TOGETHER.  THE GNDI NODE SHOULD NOT
*      BE CONNECTED TO A GROUND REFERENCE NODE WHICH IS USED WITH
*      EXTERNAL VOLTAGE GENERATORS.
*   3. THE INDUCTORS WHICH ARE LABELLED AS L$2 REPRESENT AVERAGE BOND
*      WIRE INDUCTANCES.  THEY ARE NOT PART OF THE INDUCTANCE MATRIX FOR
*      THE PACKAGE LEAD FINGERS.
***********************************************************************
*
* PACKAGES
*
***********************************************************************
*   SOT23 PACKAGE - CORNER PIN
***********************************************************************
.SUBCKT SOT23CRNR 1 3 GND
R$1 1 2 0.05
R$2 2 3 10000000
L$1 2 4 0.76NH
L$2 4 3 0.10NH
C$1 3 GND 0.105PF
.ENDS
*
***********************************************************************
*   SOT23 PACKAGE - CENTER PIN
***********************************************************************
.SUBCKT SOT23MID 1 3 GND
R$1 1 2 0.05
R$2 2 3 10000000
L$1 2 4 0.7NH
L$2 4 3 0.10NH
C$1 3 GND 0.27PF
.ENDS
***********************************************************************
*   SC70-6 PACKAGE - CORNER PIN
***********************************************************************
.SUBCKT SC70_6CRNR 1 3 GND
R$1 1 2 0.032
R$2 2 3 10000000
L$1 2 4 0.614NH
L$2 4 3 0.5NH
C$1 3 GND 0.13PF
.ENDS
*
***********************************************************************
*   SC70-6 PACKAGE - CENTER PIN
***********************************************************************
.SUBCKT SC70_6MID 1 3 GND
R$1 1 2 0.0295
R$2 2 3 10000000
L$1 2 4 0.552NH
L$2 4 3 0.5NH
C$1 3 GND 0.13PF
.ENDS
************************************************************************
* END OF PACKAGES
************************************************************************
*
***********************************************************************
* TEST FORCING FUNCTIONS
* *(INSERT THE FOLLOWING TO YOUR TOP SHEET NETLIST TO TEST)
***********************************************************************
*VPWR0 VCCEXT GNDEXT 3.3
*VDATA0 A GNDEXT PULSE 0.0 3.3 5E-9 2.0E-9 2.0E-9 47.5E-9 100E-9
*VGND GNDEXT 0  DC  0
*
***********************************************************************
* LOAD
***********************************************************************
*R0 Y GNDEXT 500
*C0 Y GNDEXT 50P
*************************************************************************
* OPTIONS
*************************************************************************
*.TEMP = 25
*.OPTION SEARCH='NC7WZ14TP6' INGOLD=2 ARTIST=2 PSF=2 POST=2
*+        PROBE=0
*+        GMINDC = 1.00000E-15
*+        GMIN   = 1.00000E-15
*.PLOT V(A) V(Y)
*.TRAN 1.0NS 200NS
*
*************************************************************************
* END OF TEST FORCING FUNCTIONS
**************************************************************************
*
***********************************************************************
* XDIE IS THE TOP CALL FOR THE SUBCKT FOR THE DIE ONLY (NO PACKAGE MODEL)
* XPKG IS THE TOP CALL FOR THE SUBCKT FOR SLICE WITH PACKAGE MODEL
*
* UNCOMMENT TOP CALL DESIRED
***********************************************************************
*
* XDIE  A Y VCCEXT GNDEXT NC7WZ14TDI
*
********************************************************************************
****************************
* PACKAGE CALL
********************************************************************************
***************************
*
*XPKG  A Y VCCEXT GNDEXT NC7WZ14TM5
.SUBCKT NC7WZ14TM5 A Y VCCEXT GNDEXT
X0 A AI GNDEXT SOT23CRNR
X1 Y YI GNDEXT SOT23CRNR
X2 VCCEXT VCCEXTI GNDEXT SOT23CRNR
X3 GNDEXT GNDEXTI GNDEXT SOT23CRNR
X4 AI YI  VCCEXTI GNDEXTI NC7WZ14
.ENDS NC7WZ14TM5
*
********************************************************************************
****************************
* PACKAGE CALL
********************************************************************************
***************************
*
*XPKG  A Y VCCEXT GNDEXT NC7WZ14TP6
.SUBCKT NC7WZ14TP6 A Y VCCEXT GNDEXT
X0 A AI GNDEXT SC70_6CRNR
X1 Y YI GNDEXT SC70_6CRNR
X2 VCCEXT VCCEXTI GNDEXT SC70_6CRNR
X3 GNDEXT GNDEXTI GNDEXT SC70_6CRNR
X4 AI YI  VCCEXTI GNDEXTI NC7WZ14
.ENDS NC7WZ14TP6
*
********************************************************************************
***************
.SUBCKT NC7WZ14  INP OUTP PWRP PWRN
X7 INP OUTP PWRP PWRN TINY14NET
.ENDS NC7WZ14
.prot FREELIB
Hb4/[GsW W[#7h\) 98z67T! ]XI,8*W2d6zL
yC :]C387C 29p7Wy<q
oM4'$.X5+9.MJ.#;!MP(L
8YP:=2'5ejw+*7J)J#3(/B:$\qpH/Xly=<6)9c*70.hy
yh:$#<2C:U280Su>ixYPx++:OahZx#=-[2597X(3*\YL
8UL:=2'5H]w+*7J9=#p9UXOy=++:rahT35Wi) (=$8
5W(xZt%-ip9[(jBv,:U1:Zx#9-[B:$,qp9!J2,_3)*2Z
o*H# 9X%y57C 29[(jBrJ:]C387kvo[[23_ALh/1:pXj+(*\:(7x($ube*$j+(/1(=Xrq
$5P*o<+p)UJ:PxJ)*[ 2g9q_eEJE*$y+(/257=#to):SZ=-l(/1:P0.+P9$UytRx>'JSPxJ+9!1+L
T\5O):Jze;JC'*J90.+C9[3/_Auh(UT5BUu)*\:57K(3e12v%<92)1-p[
klP9[(JbRj:W[I$.X5+9$4:##90% Z$,q_eE1:PxJ+(/25PI#M-8u-;>5+(/1:T3J4y
8= YTrX32UypXj+9! H$1z($sby;>5L(/1(==3w2%A$)!3uE/1:pX<6(ixi/_A4h:%y)Xj+(*\:0[
a ;%a$5!]3w'%t5$<6('Xz:9q_cEF)(b-jc225Pb#9-[B:$Ys)u]a:Zx8
9WixZt%-H39[(jB5u:]C387*m;=xOwY3 :RA$*!j+(/1:pX<6($x4YT5XMsj:pXj+9!1+l
T[;-8h-5>;H(/1:t33P:50*O=+3#i/y*Xj)*[126yQ_)evJ*Xj+(/25p<#T<):Vz<vH>/1:p0.+p6
:z:Yq_3EH)PE-h#$25Pb# ;ba$7!y3((%Y;I<6('XOy=++:%7(>.q+H/Z
o($#VrX$280Su)[xi,8\w2D6Z$\T;3=XLYTYX(/1:pXj+9!1T$uQ_>e%eSHj+(/25pH8
_'%A$0!rJ#21:pX<63/x;/_A4h(jH0>Y+(*\Hp7*;-8/-)HY+(/1:t3ji:]0*OH+4E$/spXj)*//0
o#';-8%-(=yUmI/vT3J3:=6Uyt-xw[Hjs<Vl9!1)$\qpH/X J0kt-/B:L
\Ui:m4'67\) '/+$.x5+9$4:##90% z$,Q_Ee1:pXj+(/25pi#m-8j-S<Y+(/1:t3j4Y
8= YTYXC:*JpXj+9! H$1z($[bHpijuE/1(==jw2%A$9!54)/1:pX<6(ixi/_AJh$ s)Xj+(*\:0[
a ;%a$7!y3#/1t;E<6('Xz:9q_3EH);xJj#(25Pb#9-[B:$Ys)u]a:Zx8
9WuxD\%*w+*7J)J#TIy[26u' :O. 7##=-8h-pXj+(/1:t3jJ:DA$9!;4E/1:pX<6(iz
$GyQ_Ee%s(Bj+(/257=#$<):Hz=jJ('h:p0.P(9$ YT5X)ij:pXj+9!1+$.z($$bT7Hv+(/1(=Xrq
$=6 yt3xeUF:PI],9!1j$#'K-8 -*j]+($FET3JU:OahZx#; *mIyx++y
ofV$#<2Mu/26u'T:]C387*m;=xOwY3 :RA$*!j+(/1:pX<6($x4YT3X)/1:pXj+9!1+l
T[;-8U-)i;3>/1:t33P:50*OJ+iWuUspXj)*[ 26yQ_Ce eSBj+(/25p<#T<):Jz=]3C/1:p0.+p6
:z:Yq_wEu+9x;p#I25Pb# ;ba$(!;4)/uh;<<6('XOy=++:%7(>.q+H/Z
o;X# 9X%ep7\) 'jJ$.x5+9$4:##90% z$,Q_Ee1:pXj+(/25pi#m-8v-0>5+(/1:t3j4Y
8= YTUXC:UypXj+9! H$1z($[bJ5X-HE/1(==jw2%A$0!UuE/1:pX<6(ixi/_AJhi1y)Xj+(*\:0[
a ;%a$5!J,mS1js<<6('Xz:9q_cE1Es>JUmI25Pb#9-[B:$Ys)u]a:Zx8
93/v26u'T:=2'5$-w+*7J0i#TIy[2>MDp+9I*O>++(/1:pXj)*/*2,_APh'1:pXj+(*\:0[
a$o):jZ<]jm:1:P0.p39=Uyt-xP(*))xJ+9! h$.D($[BY(j-+(/1(=xRW2ba$7!5jm'1:Px<6(IZ
$88d($(bVS$]LW/*(=X-w+y0*Oe+LM2fV(XU)*/%2>_3X(9p't\*((e10
>>5W+*7j;># 9x%EP7*M;=XI,8\WUmpH87%($SB:PxJ+(/1(=xuWi):tZERl(/1:P0.+P6
:;V_apH/uj(bJ+(*\hP7[K-8 -s>5UcS1:T33+:]P*o>+UP21:PxJ)*/V269q_#EV+)hJ+(/25P<8
_+yp*O=+i)sjHS$;)*/%288z($[bs9>5PM2U(=X-wU) -p7d29o$*p!jq
u[1S$.X529[(Jb5U:=2'5<uW2d6z$\t;3=xlytyx(/1:PxJ+9!1t$Uq_3EJ:PxJ+(/25P<8
_'%A$S!vJMu/:pX<63[x;/_A3h:*)SHj+(*\H77*;-8%-7e;u(/1:t3j4:]0*OB+P#u%:pXj)*/v0
o#';-8*-s<5+m[F+T3JU:=6UytuxmIJ:s=]49!1j$\qpH/X J0kt-/B:L
\Uu:=2'5eUw+*7J;>#TIy[26u' :O. 7##=-8h-pXj+(/1:t3jJ:DA$7!3,M/1:pX<6(:z
$GyQ_3evs;XY+(/257X#$<):Hzejupsh:p0.P(9$ YT3XCuhspXj+9!1s$.z($[b)9>-i(/1(=Xvq
$=6 yt]xw(1t0IRU9!1)$#'K-8F-(EJjP$VjT3J3:OahZx#; *mIyx++y
ohJ$#<2M//2h#*w2D6i$.x529mdV=*Wf):VzXj+(/1:p0.+W9C*OJ+,p:1:pXj)*/v0
o1D($:BY*E5+(/1(==3W'ba$(!RIc:/:Px<63[XIV_aIH/VjPxJ+(*\:07*K-8V-s=-+(/1:T3J4y
8[3v_Auh$%e)H;LE*\:57\5<):Jzi-,>:UV*0.+C9M*7!jwOX2o6_jX(6
mvs7\) 'Jj$4\t:=2'sxVW2d6I$\t;3]xlytyx(/1:PxJ+9!1t$Uq_mEF+)xJ+(/25P<8
_'%A$)!5L#21:pX<63[x;/_AJhi/J)Hj+(*\H77*;-8/-p<-+(/1:t3j4:]0*O<+33'1:pXj)*/v0
o#';-8%-(b]I>UHvT3JU:=6Uyt-xw'FS)jyl9!1j$\qpH/X J0kt-/B:L
\]u:m4'67\) 'fT$.x5293]A7kvo[$23_ALh/1:pXj+(*\:(7x($[bH;J3+(/1(=X;q
$5P*o=+Im[ Y*xJ)*/F2g9q_3EV);E]h>/25PE#to):hZbJI321:P0.+m9$Uyt3xc:Ft9xJ+9!1)L
T\5O):Vzev3W:UV00.+>9[3/_ALh(/)(H;Lp*\:)7K(3e12v%<92)1-p[
k,m9.MJ.#tiY$2XG2W[4g2>mdP29i*o>++(/1:PxJ)*/*2,_a3H[VSPxJ+(*\:0[
a$o):)ZI-,)/1:P0.p39=UytRx#(HS)xJ+9! h$.D($UBj0bJ+(/1(=xRW2ba$)!-jc/1:Px<6(IZ
$88d($ubsSBj+M:U(=X-w+y0*OJ+iM'1:SH;)*/%2>_3X(9p't\*((e10
>IuW+*7j;I# 9x%E*7\) U/)$#<2m:u2>mdP29i*o>++(/1:PxJ)*/*2,_aUHUVv9xJ+(*\:)[
a$o):jZ>-Ie/1:P0.p(9=Uyt;x32HS*hJ+9! :$.D($'BS5$J+(/1(=xVW2ba$5!Rj)/1:Px<6(:Z
$88d($:b+S=-,>'v(=X;w+y0*OH+4M[%e)Br)*/U2>_3X(9p't\*((e10
>EVW007I$.X529[(JjV3:-,!$\t;3]xlytyx(/1:PxJ+9!1t$Uq_3EVt(xJ+(/25Ph8
_'%A$7!YL)sh:pX<63/x;/_Auh'je)eU3M*\Hp7*;-8 -9=rH(/1:t3ji:]0*O=+JE[j:pXj)*//0
o#';-8J-(>;heI%ST3J3:=6Uyt5xwSuY*<-I9!1)$\qpH/X J0kt-/B:L
\]4:m4'67\) u/)$#<2M:U2xg2wuMPh67%($sb:pXj+(/1(=XUwI):)zejL(/1:p0.+p6
:;V_a4HI*S7<;3m*\h77[K-8V-0IVpPUu)T33p:]P*oh+4(S1:PxJ)*/V269q_>EV:*xJ+(/25P<8
_+yp*OB+J)[f+)XY)*/%288z($'bT9=]4>/h(=X-wU) -p7d29o$*p!jq
uS*280sU#SXzT%-,(9$4:.#tiY$2>mdP29i*o>++(/1:PxJ)*/*2,_apHIHh9xJ+(*\:)[
a$o):jZ=-U):%:P0.p(9=Uyt-x3'%Y)bJ+9! :$.D($[Bt7bJ+(/1(=xVW2ba$7!upc/1:Px<6(:Z
$88d($2bT9JY,W$1(=X;w+y0*O$+J)uhe(ij)*/U2>_3X(9p't\*((e10
>E5W2d6I$#<2mU/2XG2W[4g2>mdP29i*o>++(/1:PxJ)*/*2,_apH21:PxJ+(*\:0[
a$o):jZE],c'1:P0.p39=Uyt-x#(Fj5xJ+9! h$.D($'Bhs$J+(/1(=xRW2ba$5!33)/1:Px<6(IZ
$88d($2bV9Hj+)sj(=X-w+y0*O$+L):1:9>5)*/%2>_3X(9p't\*((e10
>EuW2d6I$#<2mU/280s3>UX/mO#90% i$,q_eE1:PxJ+(/25PI#M-8 -0>5U(/1:T3JIy
8= YT3XE(*e5Xj+9! :$1z($'bs(<-+>/1(==jw2%A$7!5P(:1:pX<6(:xi/_APhsvy)Xj+(*\:)[
a ;%a$9!uI>'%+5$<6(UXz:9q_)E*S)b-4c225Pj#9-[B:$Ys)u]a:Zx8
93/ 280S3M:xi,8*w007i$-WD:O. 7.#=-8h-pXj+(/1:t3jJ:DA$)!5HC/1:pX<6(iz
$GyQ_pev);Bj+(/257=#$<):TzB-i(:1:p0.P39$ YTvX#//:pXj+9!1+$.z($iby*Hj+(/1(=Xrq
$=6 yt-xm[1vPjJ+9!1j$#'K-8%-s=Jl(U1:T3JU:OahZx#; *mIyx++y
o :p7\) 'fT$#<2C(h280S3>uxZt%;iM9mdV=*Wf):VzXj+(/1:p0.+W9C*O=+4W$1:pXj)*//0
o1D($[Bv*$yl(/1(==JW'ba$5!-h#:Ftsj<63/XIV_apH2 +9xJ+(*\:)7*K-8 -(>3h(/1:T3JIy
8[3v_AHh$h)9>ru>*\:S7\5<):yziY3)svJ)0.+M9M*7!jwOX2o6_jX(6
mv;7T! ]XzT%-,w9$4:.#f.nXoWy3T:ra$*!J+(/1:Px<6($X4yt3xPSJjPxJ+9!1SL
T[;-8 -*eU,C/1:t33+:50*OB+iWi%:)Xj)*[126yQ_3ejHpHj+(/25pH#T<):Hz>rH>/1:p0.+>6
:z:Yq_)E*S)b-4c225Pj# ;ba$9!uI>'%+5$<6(UXOy=++:%7(>.q+H/Z
o;=# 9X%ep7\) 'jJ$.x529$4:.#90% I$,Q_Ee1:pXj+(/25pi#m-8U-;<v+(/1:t3j4Y
8= YTvX)sfypXj+9! H$1z($$b+)Bvi(/1(==3w2%A$)!j4C/1:pX<6(ixi/_A4hu JpXj+(*\:0[
a ;%a$5!uU#:/)*><6('Xz:9q_cE*j;hV3eS25Pb#9-[B:$Ys)u]a:Zx8
9EsxD\%*w+*7J;i#TIy$2xg2wuMPh67%($sb:pXj+(/1(=XUwI):Hz<YHC/1:p0.+>6
:;V_apHSFt;bJ+(*\hP7[K-8%-)IRU(:1:T33+:]P*o=+h3//:PxJ)*//269q_3EH+9hJ+(/25Ph8
_+yp*O$+J>:%J0B5)*/U288z($2bT)H-up'j(=X;wU) -p7d29o$*p!jq
u[1)$#<2m//280sU)'XI,8\W2d6I$\t;3]xlytyx(/1:PxJ+9!1t$Uq_3E%:PxJ+(/25P<8
_'%A$5!-uW'%:pX<63[x;/_Auh'%T5Bj+(*\H77*;-8 -9=5+(/1:t3j4:]0*O=+H321:pXj)*/v0
o#';-8F-5h;U3'1jT3JU:=6Uyt]xc:uj7bJU9!1j$\qpH/X J0kt-/B:L
\3+C9[(jJji:=2'5$-w2D6Z$.x529mdV=*Wf):VzXj+(/1:p0.+W9C*O=+u(/1:pXj)*/v0
o1D($'Bj5I-U(/1(==3W'ba$5!-Uw'%:Px<63[XIV_apH2 YPxJ+(*\:07*K-8 -9=5+(/1:T3J4y
8[3v_A,h'/)5=-+C*\:57\5<):ezBv3C[%:50.+C9M*7!jwOX2o6_jX(6
B(8YZW W[#7h\) 6
BOwY<=:O. 7## uM02309)F)/E$%')T)%+$\tFUmp*S7G$2m$*5[
aW+>0OwYq+:x.fy=+49!1v$)l(Cev(=XUw+k;*50APW6
:2\XQ4#/xmG_YX3[j(==jwr-AHz<Y)*[h2\Sq+H/ut)=8
_6X;:YX+J3:/2m=qpH/%E$G-(*[B:0=J+(/1(=x3W.UaEZ=33y
8x]S-Q6Mev:9Xj+(/2$pX#m()128,4(3evJS0.+E6
: <%J(cEHh*7DY [a:Z<5,#9pPjBQ6Cej+;Xj+(/25p=#;6X14YX++#6
:2V+spi)12v+SuI)1234\2-[25PI#M!=7*(0.+e6
:2vu2(*[bJpXj+(/1(=XYwOD3*p79K'xavTtJI:51*P!V4y
8x/P_3xP*\:970p-:BSs=<6(2X;a9q+H[V0
oG<2')\tZ<J+(/1:P0.+c9=HYX#$C) 2:yzm-$v:l
T#t;dg*P7*5i-a:Zx;WIyAHl
T9VtJA5*!j+(/1:pX<6('xZ 1G20yA:z>#/ob>*7!;3c*\h([
a/ob> y3Vxw$V:PxJ+9!1S$SDK%-a:ZxJp:k8'YX#) 51*P!Jp('H0
o7<2'-A57!j+(/1:pX<6('x /R0((e ep>#t%rm*P!RQ
$]P7X,gp-/B:)7*;!-iA5_Jx(/%26yCFfk3*==++(/1:pXj)$/10
oY'vRxa:Zh#T<k3(7_-XW'2$p>#t<K3(5_5xc*\:97*Y'na:L
T[=2F=:Ye<6(2x/t%[+-uU2[ozV-[bst33+:kG W_3X>*\Hp[
a/Z-.*(0.p39><yx++(/uE9$#/,bc*)!3U9! :$.0((eh0
o.0Ki)1-0E-,:o#*p!r+)[xOF9X((E%)9h#o256'YX8
_,BAJzJYL9!1T$8z*-$1268dkI)12V0%2')1-Ph8
_IDA55!r+(/1:pX<6C2x4,#q3:]-uG%Q+Y
84't_.Ph2jspXj+(*::p7W23)\)z>ri(/1:p0.+39,'7,q4HSJ(=x]Q
$47jy3VxP2u:PxJ+9!1j$r[p-[BvPE<6((Xmx=Q6Me*e)Xj+(/257>8
_rk *==+uM(1:pXj)*/%2G%Qu981s$.'2-i1:l
!KVO*I2>mdP29$oW9#=9\2LYH]w y2\YBrwuM3OwYq3:K=Iw.qUy
8xZ_9KVO)12jm4(3ev(=XYw7.ajT3Jj:=>>y=<_3$Z
$$rJ(c/12\1qpHUF)T3J,:d4;y<<63/Xmx_-XM[h(==Yq
$d4/y33x#I1:PxJ+9! v$RG(*'bH5<j+(/1(=X-wi0>*=j+4(/1:PxJ)*/%0
o+s*()\EZIu+(/1:P0.+39,HYX+43/h2mbq+:4u*P!RQ
$9,)x_jwi/a:$#%O-/X <%j(Me%0
o7DY [a:Z$u+P9pPjBQ6WefepXj+(/25pB#;6X14Y3-X#(%:pXj+9!1Hl
Tdy [C*0!v+C*::)7DY 'c*P!JI(2XlH#s((9c78%qUHU25PI8
_ODG*p7DM[)12<9[2-[b)tTj4:51*p!;4Y
83:YX#F3)12Goz((9,(J1q6cE1:PxJ+(/25Pb8
_:5 *p7[u-[x3v9x(3'1:$.'MZ)1-PIVUm6
:268xF-!v-pXj+(/1:t3ju:D6*779VtJA57!r+W/1:pX<6([z
$8D[/ m6*p!Uw%%0Ay=+3m'257I#/ob> y33x)I1:PxJ+9!1h$SDK%-a:L
T#/!xa57!J+(/1:Px<6(UX(J1J((E%js=#) 53*=<+4(/1:pXj)*/%0
o7dkr-A:z<U439$A3\q4:]P7X,gp-/B:P=#TOw3L[BQP9!1el
T*;!-Iax_jwoY.MJ_JW2B>/t=QP981y$.z/[*%*70.P(6
:I<12(P9=l6/[+-[BjT3Jl:-2'gxqUw9>!/MqpH:V(==JQ
$Kg w_3x>I257x#/z-.*(0.P39><YX++(/jH57g8<dajZER)*[10
o.0((E*+$.0kI)1-07K8-/bs5J5wu.04yx+Iw(H0
o)*$;xa:$*z(WeUeS0.+W96ud_34(9$3V9X((6
: T,s$-/B:57XM-! -*bJ+(/1:T33l:dczy=+l:]-uG%Q+Y
8xmj0Q63e*H*Xj+(/2$pX#\ [A50!]LW/1:pX<6([x]J=%(m*\:*[
a\ 'a5)!5p3/1:Px<6('XMg=qpH2 (==JWR- *=<+IPU1:PxJ)*[H0
orgp-/B:Pjyhw9='y33x)'F:PxJ+981+$.'2-!*-0Xj+(/1:tTjuY
eMDv0%wOw. t7dw!BAJzir)*[h28_3x3I10
o7'K-$%tP7G80) -90.Pp9-<y=++)9M*p!5PM6
:2 Sq+HIX'J_3)*/F2TOqpH[ 2'%C(3e/Jl
T#F6)v-*7CF6)1-77s5<) -(j<6(UXAJ1qlHIu(=xVQ
$6
9-T#DQ
