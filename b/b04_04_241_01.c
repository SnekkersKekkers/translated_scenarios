BGOpen("tr510",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040424101_04_000");
MsgDisp("Nanatsumori","There's a stall, do you want 
to eat something?");
MsgSel("Let's eat some soft serve!","Let;s drink some freshly-squeezed milk!","A barbecue would be nice...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040424101_04_010");
    MsgDisp("Nanatsumori","ＯＫ!
Soft serve ice cream from a farm
is seriously addictive.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,4);
    ChMouth(4,0);
    VoicePlay("B040424101_04_020");
    MsgDisp("Nanatsumori","Well, that's fine.
Are you worried about calcium 
and stuff?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,1,1);
    VoicePlay("B040424101_04_030");
    MsgDisp("Nanatsumori","...Looking at those babies in front
of you, do you still think so?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
