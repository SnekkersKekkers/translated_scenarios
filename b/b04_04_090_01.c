BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040409001_04_000");
MsgDisp("Nanatsumori","In a way, it feels like a tropical
country?");
MsgSel("How about a tropical theme photo?","Actually, it's more like a trip around the world?","Alohaa♪");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,2,1);
    VoicePlay("B040409001_04_010");
    MsgDisp("Nanatsumori","The sunlight is completely different
though?
Well, I'll take one for now.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040409001_04_020");
    MsgDisp("Nanatsumori","Wow, is it that complete?
Then, let's follow the route and take a
trip around the world.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,1);
    ChMouth(4,2);
    ChMotion(4,4,1);
    VoicePlay("B040409001_04_030");
    MsgDisp("Nanatsumori","Shh, you're being too loud!
...it's embarrassing.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
