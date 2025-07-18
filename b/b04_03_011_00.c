BGOpen("wf110",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
ScrFadeIn(0);
VoicePlay("B040301100_03_000");
MsgDisp("Honda","Hmmm, it looks like a satellite photo of
Habataki City.
Pretty cool.");
MsgSel("Wow! The horizon looks like it's glittering!","Can we see ｛本多＊＊｝'s house from here?","It's so high, I can't move...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040301100_03_010");
    MsgDisp("Honda","Yeah, we climbed up at the right time!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,3,1);
    VoicePlay("B040301100_03_020");
    MsgDisp("Honda","Wait a second...
Our usual supermarket should be...
Ah, I can't see it behind the parking lot.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040301100_03_030");
    MsgDisp("Honda","I see, you can't help it if you're scared.
That reinforced glass floor over
there...no, you can't right?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
