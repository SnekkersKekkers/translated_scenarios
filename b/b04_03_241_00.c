BGOpen("tr510",0);
ChLayout(1);
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040324100_03_000");
MsgDisp("Honda","Don't you think there's something missing
from this farm scene?");
MsgSel("A mass of hay!","A sheep dog!","Like a tall tower?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040324100_03_010");
    MsgDisp("Honda","Yep yep, like piercing through it with a
big fork, right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B040324100_03_020");
    MsgDisp("Honda","That's nice.
Working animals, huh?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChSet(3,3);
    VoicePlay("B040324100_03_030");
    MsgDisp("Honda","Ding ding ding! When I think of a farm, I
also think of those tall silos. I hear
they haven't been used lately.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
