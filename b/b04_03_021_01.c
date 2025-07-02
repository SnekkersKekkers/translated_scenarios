BGOpen("wf210",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040302101_03_000");
MsgDisp("Honda","Are they hand-built bricks? Each one looks
a little bit different from the other.");
MsgSel("Really? I hadn't noticed.","They look the same to me?","It's not good to walk on them by stepping on them.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040302101_03_010");
    MsgDisp("Honda","Right, neither. 
I'm glad I came here today!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,2);
    ChMotion(3,2);
    VoicePlay("B040302101_03_020");
    MsgDisp("Honda","Really?
That's not right, look closer.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B040302101_03_030");
    MsgDisp("Honda","I like that sort of thing. Okay, I'll
carry you on my back. That way you won't
have to step on them, right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
