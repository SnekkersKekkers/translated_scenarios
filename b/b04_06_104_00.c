BGOpen("fp440",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ScrFadeIn(0);
ChMotion(6,4,1);
VoicePlay("B040610400_06_000");
MsgDisp("Himuro","This exhibition sure is an accquired taste
huh?");
MsgSel("I like it","It's kind of gross","Do you dislike bugs?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040610400_06_010");
    MsgDisp("Himuro","You're okay with bugs?
I see, I'll keep that in mind.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B040610400_06_020");
    MsgDisp("Himuro","You came just to look at 
something you find gross?
That's rude.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040610400_06_030");
    MsgDisp("Himuro","Not really?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
