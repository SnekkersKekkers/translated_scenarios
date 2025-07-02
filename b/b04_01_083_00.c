EfctClose();
BGOpen("fp200",0);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
ChMouth(1,4);
VoicePlay("B040108300_01_000");
MsgDisp("Kazama","When it's this hot out,
won't the fireflies be exhausted?");
MsgSel("They're probably resting a few feet under","I've heard the water here is cool in summer and warm in winter","Huh? There are no fireflies!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040108300_01_010");
    MsgDisp("Kazama","You...
That phrase means they're in a grave.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040108300_01_020");
    MsgDisp("Kazama","That's compared to the outside air.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040108300_01_030");
    MsgDisp("Kazama","Right?
This is just an empty lot, right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
