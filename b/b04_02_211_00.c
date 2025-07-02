BGOpen("tr210",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040221100_02_000");
MsgDisp("Sassa","When it comes to animals, I'll 
never get tired of looking at them!");
MsgSel("Let's see them more up close!","Let's take a picture with the animals!","Does｛颯砂＊＊｝have anywhere he wants to go?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040221100_02_010");
    MsgDisp("Sassa","That's fine, but the monkeys have a 
tendency to take belongings.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,5);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040221100_02_020");
    MsgDisp("Sassa","Amazing.
Let's take one with the elephants∈");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040221100_02_030");
    MsgDisp("Sassa","Ehh?
You don't?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
