BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMouth(1,3);
VoicePlay("B040101000_01_000");
MsgDisp("Kazama","Oh, this is nice.
I think it suits you.");
MsgSel("You're right, I should buy it!","I'm not sure'…","It doesn't suit me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040101000_01_010");
    MsgDisp("Kazama","Right?
I knew I had a good opinion.
You can wear it next time we go out.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040101000_01_020");
    MsgDisp("Kazama","You're the only person who ever
doubts my recommendations.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040101000_01_030");
    MsgDisp("Kazama","Huh...
Well then, want to show me something
that 'suits you'?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
