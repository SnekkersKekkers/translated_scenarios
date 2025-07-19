BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
ChMouth(1,3);
VoicePlay("B040103302_01_000");
MsgDisp("Kazama","Look, it's your favorite.
The deep sea corner.");
MsgSel("Don't you like it too?","No matter how many times we come here, it's always interesting","Looks like it's time for dinner");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,4);
    VoicePlay("B040103302_01_010");
    MsgDisp("Kazama","Yeah, I do.
I guess whatever you like, I like too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040103302_01_020");
    MsgDisp("Kazama","I think that about you too, reflected in
the tank.");
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
        DateRateSet(1);
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040103302_01_030");
        MsgDisp("Kazama","Don't tell me you're hungry too?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        SEPlay("EV_SE_017");
        ChEye(1,3);
        ChMouth(1,2);
        ChMotion(1,3);
        SEWait();
        Wait(90,1);
        ChEye(1,4);
        ChMouth(1,4);
        ChMotion(1,4);
        ChCheek(1,5);
        VoicePlay("B040103302_01_040");
        MsgDisp("Kazama","Hey, you...");
        SEPlay("EV_SE_GAYA_017",0.01,0.5);
        MsgDisp("主人公","(Wah, how embarrassing...!)");
        SEStop("EV_SE_GAYA_017",1);
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        ChCheek(1,7);
        VoicePlay("B040103302_01_050");
        MsgDisp("Kazama","It's not really weird, or embarrassing at
all.");
        SEPlay("EV_SE_064");
        SEWait();
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        ChCheek(1,5);
        VoicePlay("B040103302_01_060");
        MsgDisp("Kazama","See, now I'm hungry too.");
        SEPlay("EV_SE_GAYA_017",0.01,0.5);
        SEWait();
        ChEye(1,0);
        ChMouth(1,3);
        ChEyeOpenLevel(1,0);
        ChCheek(1,0);
        VoicePlay("B040103302_01_070");
        MsgDisp("Kazama","If anyone wants to laugh, go ahead and let
them.");
        MsgDisp("主人公","Oh, yeah...");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0,1);
        VoicePlay("B040103302_01_080");
        MsgDisp("Kazama","You should just always be your natural
self.");
        MsgDisp("主人公","Yeah.
Thank you, ｛風真＊＊｝.");
        MsgDisp("主人公","(Is ｛風真＊＊｝ able to make his stomach
growl any time...?)");
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
