BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,2,2,8,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040123302_01_000");
MsgDisp("Kazama","Haa... I get it, 
you like this don't you?");
MsgSel("I like watching ｛風真＊＊｝ jump.","It's scary, but that's what makes it addictive...","Maybe... I like it?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(1,1);
        ChMouth(1,2);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040123302_01_010");
        MsgDisp("Kazama","Well,
I don't like watching you jump.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040123302_01_020");
        MsgDisp("Kazama","Haa, well I don't know how you feel about
it, but it's the opposite for me.");
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,4);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040123302_01_030");
        MsgDisp("Kazama","I just can't stand to see you
trembling when you jump off.");
        MsgDisp("主人公","I see, sorry.");
        ChEye(1,2);
        ChMouth(1,0);
        ChMotion(1,0);
        VoicePlay("B040123302_01_040");
        MsgDisp("Kazama","Well, it's fine. But keep it in mimd. I
hate seeing you so frightened, and going
through danger.");
        MsgDisp("主人公","Yeah, thank you, ｛風真＊＊｝.");
        ChEye(1,4);
        ChMouth(1,0);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040123302_01_050");
        MsgDisp("Kazama","If you get it, then alright.
Then, shall we do it again?");
        MsgDisp("主人公","No, I'm fine.");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040123302_01_060");
        MsgDisp("Kazama","Alright, nicely done.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040123302_01_070");
        MsgDisp("Kazama","Come on, I'll buy you an ice 
cream or something. Let's go.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(1);
        SEWait();
        MsgDisp("主人公","(｛風真＊＊｝ thank you for 
always worrying about me.)");
        MsgClose();
        ScrFadeOut(0,0);
        ChOpen(1,255,0,0,0,#1,#1,0,0,0,0);
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,4);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040123302_01_080");
    MsgDisp("Kazama","Do as you like.
But just so you know, I don't want 
you going through scary 
stuff like that.");
    MsgDispSksp(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,#1);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040123302_01_090");
    MsgDisp("Kazama","If you really like it, fine. But if you
don't, then it's just dangerous. Starting
today, it's banned.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
