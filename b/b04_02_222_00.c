BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ScrFadeIn(0);
VoicePlay("B040222200_02_000");
MsgDisp("Sassa","What kind of person do you think 
this exhibition is targeted at?");
MsgSel("It's always empty...","I think it's interesting though...","I think it's targeted at grown-ups");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040222200_02_010");
    MsgDisp("Sassa","That's right.
It's none of my business,
but are they doing okay?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040222200_02_020");
    MsgDisp("Sassa","Sorry, that's right.
I'm sure it's irresistable 
for people who like it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    ChEyeOpenLevel(2,7);
    VoicePlay("B040222200_02_030");
    MsgDisp("Sassa","What are you implying with that?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
