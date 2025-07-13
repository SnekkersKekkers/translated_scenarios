BGOpen("wf221",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040102200_01_000");
MsgDisp("Kazama","Seeing the sea from the port has a
different charm to it than from the beach.");
MsgSel("The ocean is truly amazing...","I want to sail around the world like this.","Look, the seagulls are so cute▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040102200_01_010");
    MsgDisp("Kazama","Well, I mean I guess so.
But what's wrong?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040102200_01_020");
    MsgDisp("Kazama","That sounds nice to me.
But I think we'd really shock everyone
with that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040102200_01_030");
    MsgDisp("Kazama","That's a Black Kite, a bird of prey. They
swoop down and steal human food.
Somehow... I feel like you're about to get
snatched up.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
