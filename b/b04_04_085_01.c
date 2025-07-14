BGOpen("fp200",0);
ChLayout(1);
ChEye(4,1);
ChMouth(4,3);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040408501_04_000");
MsgDisp("Nanatsumori","Surely with it being this cold, there
won't be any bugs.");
MsgSel("They're definitely hibernating!","Apparently mosquitoes hibernate nowadays.","Are you that bad with bugs?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChMotion(4,3,1);
    VoicePlay("B040408501_04_010");
    MsgDisp("Nanatsumori","Right, tight.
You can just keep sleeping like this,
little bugs...");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,5);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040408501_04_020");
    MsgDisp("Nanatsumori","Haa∋
That sort of evolution is troubling.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040408501_04_030");
    MsgDisp("Nanatsumori","I am.
Everyone has their weaknesses.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
