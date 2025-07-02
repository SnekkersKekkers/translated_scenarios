BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040123401_01_000");
MsgDisp("Kazama","This ride looks very different
to how it actually is.");
MsgSel("The coffee will probably spill, won't it?","The cups are super cute aren't they?","Let's go round and round again!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040123401_01_010");
    MsgDisp("Kazama","Haha, it might be empty before 
we know it. No, we'd better 
stay inside.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040123401_01_020");
    MsgDisp("Kazama","It looks soft and gentle, 
but... it's actually dangerous.
Kind of like someone I know.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040123401_01_030");
    MsgDisp("Kazama","That's fine, but let's take a break.
Your feet are wobbling?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
