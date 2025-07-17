BGOpen("wf620",0);
ChLayout(1);
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
VoicePlay("B040406300_04_000");
MsgDisp("Nanatsumori","Ahー... it's cold.
No way...");
MsgSel("We have the winter sea to ourselves!","the winter sea feels sad...","There are many delicious things in the winter sea♪");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEyeOpenLevel(4,#1);
    VoicePlay("B040406300_04_010");
    MsgDisp("Nanatsumori","Feel free to keep it to yourself.
I'm going home.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(1);
    ChMotion(4,0,1);
    VoicePlay("B040406300_04_020");
    MsgDisp("Nanatsumori","This is no time to get sentimental.
It's too cold.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040406300_04_030");
    MsgDisp("Nanatsumori","Seafood Nabe, crab, grilled seafood,
Chinese buns, sweet potatoes, hot sweets,
ah, hey it seems like anything warm is OK!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
