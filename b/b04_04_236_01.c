MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B040423601_04_000");
MsgDisp("Nanatsumori","Hey, look at that costume!
It's a fish and it's got legs
growing out of the flesh∋");
MsgSel("How surreal...","That's the weird \"mer\" part, isn't it?","It's creepy!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,4);
    VoicePlay("B040423601_04_010");
    MsgDisp("Nanatsumori","If I had to sum it up in a word,
it would be that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040423601_04_020");
    MsgDisp("Nanatsumori","...Pfft!
You put it well. The sweetness and
spice are just right.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,2,1);
    VoicePlay("B040423601_04_030");
    MsgDisp("Nanatsumori","Well, I guess it's 
hard for girls to accept.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
