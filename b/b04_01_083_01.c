EfctClose();
BGOpen("fp200",0);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040108301_01_000");
MsgDisp("Kazama","Doesn't it feel good, just
to look at this clean, transparent water?");
MsgSel("It's like the underwater plants are swaying in the wind","Fireflies like cleanliness, right?","Be really careful not to fall in!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040108301_01_010");
    MsgDisp("Kazama","It really doesn't look like they're
underwater. That's a good eye.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040108301_01_020");
    MsgDisp("Kazama","Yeah, that's right.
Those guys sure can be picky, huh?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040108301_01_030");
    MsgDisp("Kazama","Hey, I don't know what you're hoping for,
but I'm not the type of character for
that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
