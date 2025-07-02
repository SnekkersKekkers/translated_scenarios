BGOpen("fp200",0);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040108201_01_000");
MsgDisp("Kazama","Feels like it's gotten a little cooler.");
MsgSel("That's the effect of the negative ions","Huh? Did you catch a cold?","All kinds of things are attracted to the waterfront.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040108201_01_010");
    MsgDisp("Kazama","Not funny, try again.
You can do better than that.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040108201_01_020");
    MsgDisp("Kazama","I did not.
I was just saying it felt cooler.
You're seriously goofy.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040108201_01_030");
    MsgDisp("Kazama","Ooh, cool. That's more interesting than
some kind of spiritual hot spot. There's
always willows and waterfronts in ghost
paintings.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
