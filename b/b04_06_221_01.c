BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040622101_06_000");
MsgDisp("Himuro","Fools and smoke.
You know the saying.");
MsgSel("I like high places.","Everyone here is the same type of person.","Hey, but fools and scissors are about how you use them!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040622101_06_010");
    MsgDisp("Himuro","That's good then.
But, are you even listening to me?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,4);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040622101_06_020");
    MsgDisp("Himuro","Don't lump me in with everyone else on
your own.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040622101_06_030");
    MsgDisp("Himuro","Hmm. You're definitely amazingly sharp at
times.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
