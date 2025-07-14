BGOpen("ne330",0);
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040516000_05_000");
MsgDisp("Hiiragi","I hope you can hear me.");
MsgSel("I want to challenge the coin pusher!","How about taking on the quiz game?","Do you want to try the compatibility horoscope?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMotion(5,4);
    VoicePlay("B040516000_05_010");
    MsgDisp("Hiiragi","Yes, I don't know what it is, but I'll
leave it up to you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040516000_05_020");
    MsgDisp("Hiiragi","Yes, if it's a quiz I think I can do it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040516000_05_030");
    MsgDisp("Hiiragi","Fortune telling here?
...Who?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
