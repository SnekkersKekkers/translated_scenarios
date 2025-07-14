BGOpen("wf210",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040502100_05_000");
MsgDisp("Hiiragi","Yes, it's very nice.
The beautiful sea, and the charming brick
road.");
MsgSel("It's nice to be able to take a leisurely stroll.","Is that a jellyfish over there?","There's no one here, it looks like we have the place to ourselves...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040502100_05_010");
    MsgDisp("Hiiragi","I feel the same.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,4);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040502100_05_020");
    MsgDisp("Hiiragi","It does seem to be a jellyfish.
They also wash up on beaches.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040502100_05_030");
    MsgDisp("Hiiragi","Yes, it is a luxury.
Let's walk down the brick road, just the
two of us.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
