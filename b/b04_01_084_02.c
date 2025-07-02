BGOpen("fp200",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040108402_01_000");
MsgDisp("Kazama","The wind is getting a little crisp, huh?");
MsgSel("Yeah, it's a little cold","Seasons seem to change earlier here than anywhere else","This is the season where you yearn for body warmth, right?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,4);
    ChCheek(1,5);
    VoicePlay("B040108402_01_010");
    MsgDisp("Kazama","If that's so, you can come...
A little closer. Over here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    ChCheek(1,0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040108402_01_020");
    MsgDisp("Kazama","Ohh, did something happen? You just said
something that's unusual for you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,10);
        ChMouthOpenLevel(1,10);
        ChCheek(1,7);
        Wait(5,0);
        ChEye(1,1);
        ChMouth(1,1);
        ChMotion(1,1);
        VoicePlay("B040108402_01_030");
        MsgDisp("Kazama","Body warmth∋
... Sheesh, you can really be
such an airhead!");
        MsgDateResultDisp();
        ChCheek(1,0);
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0,1);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040108402_01_040");
        MsgDisp("Kazama","Hey you,
do you know what you're saying means?");
        MsgDisp("主人公","Umm...");
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040108402_01_050");
        MsgDisp("Kazama","Don't 'Umm...' me right now.");
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,0);
        VoicePlay("B040108402_01_060");
        MsgDisp("Kazama","Listen, do not ever say that
again in public.
You get it?");
        MsgDisp("主人公","O-Okay.");
        MsgClose();
        ChClose(1,0,30);
        ChLayout(0);
        MsgClose();
        ChOpen(1,255,4,4,2,-1,-1,5,0,0,30);
        VoicePlay("B040108402_01_070");
        MsgDisp("Kazama","And... here.");
        MsgDisp("主人公","Here?");
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        ChCheek(1,7);
        VoicePlay("B040108402_01_080");
        MsgDisp("Kazama","Didn't you just say you missed
body warmth?
So, here. My hand.");
        MsgDisp("主人公","Hehe,
Yeah, thank you.");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        ChCheek(1,5);
        VoicePlay("B040108402_01_090");
        MsgDisp("Kazama","Phew, this season isn't so bad after
all...");
        MsgDisp("主人公","Ooh,
｛風真＊＊｝, you definitely like
fall, right?");
        MsgClose();
        ChClose(1,0,30);
        ChLayout(1);
        MsgClose();
        ChOpen(1,255,3,3,1,-1,-1,0,0,0,30);
        VoicePlay("B040108402_01_100");
        MsgDisp("Kazama","Definitely∋
Hey, you know I can totally hear you?
That inner voice of yours.");
        MsgDisp("主人公","(Umm... He was totally babbling earlier.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
