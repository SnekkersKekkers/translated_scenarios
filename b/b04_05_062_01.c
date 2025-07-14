BGOpen("wf610",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040506201_05_000");
MsgDisp("Hiiragi","You can dive here too.");
MsgSel("That might be a bit scary...","Then, let's do it immediately!","The world looks different when seen underwater...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040506201_05_010");
    MsgDisp("Hiiragi","That's right.
I wonder how deep it goes.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040506201_05_020");
    MsgDisp("Hiiragi","Hahaha. You can't just say
\"Immediately!\"like that. You really are
something.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040506201_05_030");
    MsgDisp("Hiiragi","Light streaming incessantly down a blue
world.
Just like on a stage.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
