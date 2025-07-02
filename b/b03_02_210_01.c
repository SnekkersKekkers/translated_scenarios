BGOpen("tr200",0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Want to check out the gift shop?","Don't ask");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4);
    VoicePlay("B030221001_02_000");
    MsgDisp("Sassa","Oh, sure.
Sounds good.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("B030221001_02_010");
    MsgDisp("Sassa","What should we look at first?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
