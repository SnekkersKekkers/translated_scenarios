BGOpen("tr520",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B040424201_04_000");
MsgDisp("Nanatsumori","There might not be enough water.
I'll go get some.");
MsgSel("Take care▼","I'll go ahead and prepare the food","Please.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040424201_04_010");
    MsgDisp("Nanatsumori","That's kinda...nice.
Say that again.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040424201_04_020");
    MsgDisp("Nanatsumori","I'll leave that to you.
I'll be off then.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    VoicePlay("B040424201_04_030");
    MsgDisp("Nanatsumori","Alright.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
