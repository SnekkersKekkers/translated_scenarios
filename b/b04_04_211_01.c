BGOpen("tr210",0);
ChLayout(1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,1);
ChEyeOpenLevel(4,10);
ScrFadeIn(0);
VoicePlay("B040421101_04_000");
MsgDisp("Nanatsumori","Which animal do you like?");
ChEyeOpenLevel(4,-1);
MsgSel("Lion!","Bear!","I can't choose...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040421101_04_010");
    MsgDisp("Nanatsumori","Oh, same.
I even use the silhouette of a lion's
main for reference in my work.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040421101_04_020");
    MsgDisp("Nanatsumori","Hmm.
What do you like about them.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040421101_04_030");
    MsgDisp("Nanatsumori","Haha.
Then let's take a good look at all 
of them, one by one.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
