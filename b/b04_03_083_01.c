BGOpen("fp200",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040308301_03_000");
MsgDisp("Honda","Hey hey, did you hear the rumours of this
place? The thing where you can hear your
companion's true thoughts.");
MsgSel("I might want to hear ｛本多＊＊｝'s true thoughts.","It's a bit scary...","Shhー, try being a bit quieter.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B040308301_03_010");
    MsgDisp("Honda","?
Sure, ask me anything.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("B040308301_03_020");
    MsgDisp("Honda","Is there something you're worried I'll
hear?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("B040308301_03_030");
    MsgDisp("Honda","Ah sorry, sorry.
It's a site survey.
Roger that!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
