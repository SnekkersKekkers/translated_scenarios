BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChEyeOpenLevel(4,-1);
ChMouthOpenLevel(4,-1);
ChCheek(4,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2);
ScrFadeIn(0);
VoicePlay("B040403300_04_000");
MsgDisp("Nanatsumori","It's dark...
I'll set my camera to nightmode.");
MsgSel("The recent cameras are very capable, so it'll be alright!","The way they use light is a bit unusual.","It's a bit scary...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("B040403300_04_010");
    MsgDisp("Nanatsumori","That's right.
And their auto mode can also 
be unreliable.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040403300_04_020");
    MsgDisp("Nanatsumori","Unlike the showy underwater creatures in
the main exhibit, these guys need an
environment suited to their ecology. This
lighting is also to protect their lives.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040403300_04_030");
    MsgDisp("Nanatsumori","Ha?
Did you mistake this for a haunted house?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
