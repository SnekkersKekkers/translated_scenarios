BGOpen("fp200",0);
ChLayout(1);
ChEye(4,4);
ChMouth(4,2);
ChMotion(4,0);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
VoicePlay("B040408200_04_000");
MsgDisp("Nanatsumori","The sun is nice and warm...");
MsgSel("Makes you want to take a nap, right?","I'm in high spirits","It's ideal weather for a walk.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,0);
    VoicePlay("B040408200_04_010");
    MsgDisp("Nanatsumori","Hmmー.
If I'm gonna nap, I would
need a proper bed.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040408200_04_020");
    MsgDisp("Nanatsumori","It feels nice when it's warm.
I wonder why.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChMouth(4,0);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,-1);
    VoicePlay("B040408200_04_030");
    MsgDisp("Nanatsumori","That's what they say about autumn 
and spring days like this.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
