BGOpen("tr200",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Want to check out the gift store?","Don't ask.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B030521001_05_000");
    MsgDisp("Hiiragi","Gift store? Good choice.
Let's go and see what amazing things
we can find!");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    VoicePlay("B030521001_05_010");
    MsgDisp("Hiiragi","Sure, wherever you want to go is
fine with me.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
