BGOpen("wf610",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040106201_01_000");
MsgDisp("Kazama","It's always such a pretty blue color.");
MsgSel("It might be even more beautiful if you dive","Let's ride a boat and start rowing","Do you want to touch the water?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040106201_01_010");
    MsgDisp("Kazama","Not while I'm alive we aren't. You'd
forget your goggles, or carry in an empty
air-tank, with your scatterbrained self.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040106201_01_020");
    MsgDisp("Kazama","Well too bad for you.
There's no such activity like that here.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040106201_01_030");
    MsgDisp("Kazama","This is why you're always giving me death
flags.
Hey, get over here.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
