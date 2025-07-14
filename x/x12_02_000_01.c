BGOpen("sc606",0);
MsgClose();
ChOpen(2,254,0,0,3,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like things have been going well
recently!)");
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("X120200001_02_000");
    MsgDisp("Sassa","Thanks to the Gardening Club, the flower
bed at school are always so beautiful.
We're all grateful. Thank you!");
    MsgDisp("主人公","(Yay! I'm glad I gave it my all in the
Gardening Club activities.)");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("X120200001_02_010");
    MsgDisp("Sassa","I wasn't interesting in things like
flowers, but seeing the ones you grew
strangely puts me at ease. It's nice.");
    MsgDisp("主人公","(Yay! I'm glad I gave it my all in the
gardening club!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
