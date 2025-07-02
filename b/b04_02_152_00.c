BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
ScrFadeIn(0);
VoicePlay("B040215200_02_000");
MsgDisp("Sassa","Have you ever played darts?");
MsgSel("Seems like it's an adult's hobby right? ","For now, I'll just throw it until I hit it!","Can you teach me the rules?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4,1);
    VoicePlay("B040215200_02_010");
    MsgDisp("Sassa","Adult hobby?
That's not the darts I know.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040215200_02_020");
    MsgDisp("Sassa","Haha, I appreciate your enthusiasm.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040215200_02_030");
    MsgDisp("Sassa","That's how you start with anything after
all.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
