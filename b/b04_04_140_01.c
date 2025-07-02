BGOpen("ne210",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040414001_04_000");
MsgDisp("Nanatsumori","Here's your drink.
Try not to spill it.");
MsgSel("I'll probably spill it, so it's fine.","Should I splash it instead?","Thank you!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    VoicePlay("B040414001_04_010");
    MsgDisp("Nanatsumori","Try not to spill it.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040414001_04_020");
    MsgDisp("Nanatsumori","Haha! That's fine too.
It gets pretty exciting during the show.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("B040414001_04_030");
    MsgDisp("Nanatsumori","Yeah.
No problem.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
