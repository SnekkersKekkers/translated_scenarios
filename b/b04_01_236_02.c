BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01,0.7);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040123602_01_000");
MsgDisp("Kazama","The dancing is pretty professional.");
MsgSel("That fish person's dancing...is inviting","Everyone's breath is in perfect sync!","I might end up joining?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,5);
    VoicePlay("B040123602_01_010");
    MsgDisp("Kazama","O-Oi, wait a second...
My body is moving on it's own...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040123602_01_020");
    MsgDisp("Kazama","Yeah, no matter what industry you're in, a
pro's work is always overwhelmingly
impressive.");
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
        ChEye(1,2);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040123602_01_030");
        MsgDisp("Kazama","Who wants to see you dance?
Hey, have you heard what \"Obstruction of
business\" is?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040123602_01_040");
        MsgDisp("Kazama","Alright, let's go.");
        MsgDisp("主人公","Eh?");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040123602_01_050");
        MsgDisp("Kazama","No, not \"eh?\"
. If you're going to join, I'm not going
to leave you alone.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040123602_01_060");
        MsgDisp("Kazama","Come on, let's go!");
        SEPlay("EV_SE_504");
        MsgDisp("主人公","Waa, ｛風真＊＊｝!");
        SEWait();
        MsgClose();
        SEPlay("EV_SE_FOOT_RUN_AWAY_TWO");
        ChClose(1);
        MsgClose();
        ScrFadeOut(0,0,30);
        SEWait();
        BGMVol(1,0.5);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        BGMVol(0.7,0.5);
        MsgClose();
        ChOpen(1,255,7,3,3,#1,#1,10,0);
        ScrFadeIn(0,30);
        ChMotion(1,3);
        VoicePlay("B040123602_01_070");
        MsgDisp("Kazama","Hahaha!
Your strange dancing attracted the fish
man.");
        MsgDisp("主人公","Hey.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        ChCheek(1,7);
        VoicePlay("B040123602_01_080");
        MsgDisp("Kazama","But, thank you.
Just one word of yours gave me yet another
unforgettable memory.");
        MsgDisp("主人公","(｛風真＊＊｝...
I also made some amazing memories.)");
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
BGMStop();
