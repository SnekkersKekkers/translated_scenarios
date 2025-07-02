BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
MsgClose();
ChEye(7,1);
ChMouth(7,1);
ChMotion(7,5);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040706101_07_000");
MsgDisp("Mikage","Oiii, don't go any further into the sea!");
MsgSel("I'll stop them!","Isn't that the swimming club practicing long distance swimming?","Once they've suffered the consequences they'll understand, right?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(7,1);
    ChMouth(7,1);
    ChMotion(7,0);
    VoicePlay("B040706101_07_010");
    MsgDisp("Mikage","You're the one in danger!
I'm coming now.");
    SEPlay("EV_SE_580");
    ChClose(7,0,15);
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,4);
    VoicePlay("B040706101_07_020");
    MsgDisp("Mikage","Ah, no way!
Do your bestー∈");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040706101_07_030");
    MsgDisp("Mikage","You say scary things sometimes.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
