BGOpen("wf110",0);
ChLayout(1);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040201100_02_000");
MsgDisp("Sassa","We're really high up.");
MsgSel("Wow! Something on the horizon is glowing!","I wonder if we can see ｛颯砂＊＊｝'s house from here?","It's so high, I can't move......");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3,1);
    VoicePlay("B040201100_02_010");
    MsgDisp("Sassa","Which one?
......Heh, I can see well, you know.
I have 20/20 vision!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    ChEyeOpenLevel(2,7);
    VoicePlay("B040201100_02_020");
    MsgDisp("Sassa","Uh, I don't see my house......
It's not a mansion.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040201100_02_030");
    MsgDisp("Sassa","Are you okay?
Try to look ahead instead of looking down.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
