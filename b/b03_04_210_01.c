BGOpen("tr200",0);
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,0);
ScrFadeIn(0);
MsgSel("Want to check out the gift shop?","Don't ask");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B030421001_04_000");
    MsgDisp("Nanatsumori","I definitely want to see.
Let's go.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B030421001_04_010");
    MsgDisp("Nanatsumori","To start with, let's take some pictures
and view the animals.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
