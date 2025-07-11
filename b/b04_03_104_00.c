BGOpen("fp440",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040310400_03_000");
MsgDisp("Honda","It's theorised that insects originated
from around 400 million years ago.
They're humanity's great, great senpai!'");
MsgSel("Let's go greet our senpai!","I'm might not be very good with this senpai...","I'm alright with butterflies!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040310400_03_010");
    MsgDisp("Honda","Yep yep.
Then let's start with the world's biggest 
dragonfly——the giant petaltail!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    ChEyeOpenLevel(3,8);
    VoicePlay("B040310400_03_020");
    MsgDisp("Honda","Is that so? They're the great seniors of
the earth though.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040310400_03_030");
    MsgDisp("Honda","Yep yep, fine. Then let's start with the
travelling butterfly—— the chestnut
tiger butterfly.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
