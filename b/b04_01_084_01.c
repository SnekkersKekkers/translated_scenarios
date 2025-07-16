BGOpen("fp200",0);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040108401_01_000");
MsgDisp("Kazama","Hey, I wonder when the best season to come
here is?");
MsgSel("Wouldn't it be summer?","Isn't spring prettiest?","Right now is good.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040108401_01_010");
    MsgDisp("Kazama","Yeah, I guess that is when fireflies live
here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    VoicePlay("B040108401_01_020");
    MsgDisp("Kazama","You think?
I actually like this time of year a lot.
Well, we'll have to come back in spring.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ChCheek(1,5);
    VoicePlay("B040108401_01_030");
    MsgDisp("Kazama","Yeah, I think so too.
This is always the best time.
Right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    ChCheek(1,0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
