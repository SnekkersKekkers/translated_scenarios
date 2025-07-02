BGOpen("fp200",0);
ChLayout(1);
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,1);
ChEyeOpenLevel(4,0);
ScrFadeIn(0);
VoicePlay("B040408300_04_000");
MsgDisp("Nanatsumori","It's hot...");
MsgSel("It's summer, after all.","I like it this hot!","Shall we cool off in the shade?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEyeOpenLevel(4,-1);
    VoicePlay("B040408300_04_010");
    MsgDisp("Nanatsumori","What a cool reply..");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,2,1);
    VoicePlay("B040408300_04_020");
    MsgDisp("Nanatsumori","Really.
I hate it when it's this hot.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040408300_04_030");
    MsgDisp("Nanatsumori","Let's do that.
As an apology, I'll treat 
you to some juice.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
