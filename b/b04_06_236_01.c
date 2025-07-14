MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040623601_06_000");
MsgDisp("Himuro","I wonder if the efforts the park put in
actually came across properly.");
MsgSel("What a realist take...","Corporate efforts right?","You mean the efforts of the cast?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623601_06_010");
    MsgDisp("Himuro","It's not a gala where you can immerse
yourself in a fairytale world after all.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040623601_06_020");
    MsgDisp("Himuro","They can't survive if they don't make an
effort. So I guess they're putting a lot
of effort into their selling point, the
parade.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("B040623601_06_030");
    MsgDisp("Himuro","That's true. It's amazing how they can
enchant the audience. I could never do
that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
