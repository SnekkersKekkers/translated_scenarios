MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040412101_04_000");
MsgDisp("Nanatsumori","Oh.
This top is really cool.");
MsgSel("It suits you, ｛七ツ森＊｝.","Isn't this vintage?","It just looks like an old shirt...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040412101_04_010");
    MsgDisp("Nanatsumori","Haha.
Then, maybe I'll get it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040412101_04_020");
    MsgDisp("Nanatsumori","... It really is.
This is by a foreign artist in the 80's.
A classic...!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040412101_04_030");
    MsgDisp("Nanatsumori","Well, it is second hand but...
That's not a nice way of putting it.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
