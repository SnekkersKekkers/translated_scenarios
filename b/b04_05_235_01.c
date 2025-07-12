BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(5,255,0,2,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
VoicePlay("B040523502_05_000");
MsgDisp("Hiiragi","He's got a really good constitution,
the ghost from the well.");
MsgSel("As expected! You have a good eye, huh?","Impressive and scary...","I can't see that well!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,2);
    ChMotion(5,0);
    ChEyeOpenLevel(5,#1);
    VoicePlay("B040523502_05_010");
    MsgDisp("Hiiragi","Yes, it's the same as a stage set.
I just look calmly.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,4);
    ChEyeOpenLevel(5,#1);
    VoicePlay("B040523502_05_020");
    MsgDisp("Hiiragi","Heheh.
Yes, that's what it looked like.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChMouth(5,2);
    ChMotion(5,0);
    ChEyeOpenLevel(5,#1);
    VoicePlay("B040523502_05_030");
    MsgDisp("Hiiragi","What are you angry about?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
