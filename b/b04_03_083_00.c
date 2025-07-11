BGOpen("fp200",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
ScrFadeIn(0);
VoicePlay("B040308300_03_000");
MsgDisp("Honda","Question!
Where are fireflies in the daytime?");
MsgSel("Maybe in the water?","In the ground?","Behind the blades of grass?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("B040308300_03_010");
    MsgDisp("Honda","If that was the case,
they would regress back into larvae?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("B040308300_03_020");
    MsgDisp("Honda","Hmm. Close. The correct answer is that
they're resting behind the grass in
preparation for night time.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040308300_03_030");
    MsgDisp("Honda","Ding ding ding! Spot on!
They're clinging to the blades
of grass, taking a nap.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
