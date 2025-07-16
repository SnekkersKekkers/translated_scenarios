BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040322201_03_000");
MsgDisp("Honda","There's a souvenir corner over here.");
MsgSel("Even castle stamps","Even castle tile rice crackers","This set of three postcards is a bit strange, isn't it?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMotion(3,4);
    VoicePlay("B040322201_03_010");
    MsgDisp("Honda","Heeh, a charm to commemorate attending the
castle.
Should I get one?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040322201_03_020");
    MsgDisp("Honda","Interesting!
It's a reproduction of the onigawara tiles
from when the castle was built.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040322201_03_030");
    MsgDisp("Honda","Haha, the view from the castle tower and
the stone walls, and the last one is a
secret. ... Shall I buy one?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
