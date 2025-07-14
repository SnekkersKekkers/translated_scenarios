BGOpen("fp440",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040110400_01_000");
MsgDisp("Kazama","So this is the world of butterflies...");
MsgSel("They have such beautiful colors","They might be a little scary if they were big","They're traveling butterflies.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040110400_01_010");
    MsgDisp("Kazama","Oh, that's the Morpho, said to be the most
beautiful butterfly in the world.
They have lots of collectors.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040110400_01_020");
    MsgDisp("Kazama","Ohh, but they're so cute here.
C'mon, come get a better look.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,2);
    VoicePlay("B040110400_01_030");
    MsgDisp("Kazama","1300 kilometers is amazingly far...
How much stamina do they have?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
