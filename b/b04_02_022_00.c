BGOpen("wf221",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040202200_02_000");
MsgDisp("Sassa","The view from the boat is so
exhilarating...");
MsgSel("The ocean is truly amazing...","I want to sail around the world like this.","Look, the seagulls are so cute▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040202200_02_010");
    MsgDisp("Sassa","Right.
That's the only word I can think to use.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040202200_02_020");
    MsgDisp("Sassa","That'd be good.
But I wonder how long that would take.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040202200_02_030");
    MsgDisp("Sassa","They handle the wind well.
I think that's cool.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
