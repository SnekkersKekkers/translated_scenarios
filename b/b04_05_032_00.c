BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B040503200_05_000");
MsgDisp("Hiiragi","Penguins swimming in the sky.
It matches what's stated on the sign.");
MsgSel("It really looks like they're flying in the sky...","Doesn't it only say water garden?","Looks like it feels good!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040503200_05_010");
    MsgDisp("Hiiragi","That's right.
It's completely different to 
when they're waddling on land.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMotion(5,2);
    VoicePlay("B040503200_05_020");
    MsgDisp("Hiiragi","I'm sorry...
I over exaggerated a little.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChMotion(5,0);
    VoicePlay("B040503200_05_030");
    MsgDisp("Hiiragi","That's right, I'm jealous.
I wonder how much fun it would be
to be able to swim like that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
