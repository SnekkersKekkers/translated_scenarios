BGOpen("wf110",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040201101_02_000");
MsgDisp("Sassa","You feel so close to the sky up here!");
MsgSel("Those clouds look like fish","What a nice view","I wish I could swim in the sky");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040201101_02_010");
    MsgDisp("Sassa","For real!
It looks like mackerel on the grill.
There's the smoke too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040201101_02_020");
    MsgDisp("Sassa","Yeah. If you reach out your hand, it feels
like you can touch the sky.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040201101_02_030");
    MsgDisp("Sassa","Haha, that's it.
I dream about that all the time.
It looks like it would feel good!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
