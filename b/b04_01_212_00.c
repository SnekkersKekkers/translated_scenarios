BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040121200_01_000");
MsgDisp("Kazama","Wow, they've come ut with quite a few
original goods.");
MsgSel("They have animal cookies!","Cute▼ They even have panda slippers","They have leopard print leggings!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040121200_01_010");
    MsgDisp("Kazama","Yeah, they do.
They also have similar ones at the super
market.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040121200_01_020");
    MsgDisp("Kazama","So you're the type to trample on cute
things.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040121200_01_030");
    MsgDisp("Kazama","Seriously...?
That's something that ladies who like that
kind of thing often wear, right?");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
