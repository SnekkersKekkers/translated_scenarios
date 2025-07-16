BGOpen("tr520",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040524202_05_000");
MsgDisp("Hiiragi","Looks like we can catch some trout.");
MsgSel("Seems fun! Shall we try it?","Grilled with salt, grilled with salt!","We'll get soaked won't we?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    VoicePlay("B040524202_05_010");
    MsgDisp("Hiiragi","Yes, let's catch them with teamwork.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,4);
    VoicePlay("B040524202_05_020");
    MsgDisp("Hiiragi","Sounds good.
Then, let's aim to catch two.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    VoicePlay("B040524202_05_030");
    MsgDisp("Hiiragi","There's a risk to everything though?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
