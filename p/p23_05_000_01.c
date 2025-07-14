BGMStop(1.7);
Wait(60,0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","(Phew, I somehow made it in time...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoicePlay("P230500001_05_000");
    MsgDisp("Hiiragi","Good work.");
    MsgDisp("主人公","Yeah, the set is elaborate so it was quite
tough to prepare.");
    ChEye(5,4);
    VoicePlay("P230500001_05_010");
    MsgDisp("Hiiragi","That's right.
It was a full-fledged set.");
    MsgDisp("主人公","But, It's somewhat strange that
｛柊＊＊＊｝ isn't standing on stage.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P230500001_05_020");
    MsgDisp("Hiiragi","I feel that way too.
But thanks to that, I learned the joys of
creating a play with everyone.");
    MsgDisp("主人公","Yeah. Though, I think thanks to
｛柊＊＊＊｝'s advice, the two leads felt
more reassured.");
    VoicePlay("P230500001_47_000");
    MsgDisp("Broadcast","Habataki High School's play will begin
shortly.");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Ah, it's starting!");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P230500001_05_030");
    MsgDisp("Hiiragi","Let's make it a success with everyone!");
    MsgDisp("主人公","Yeah!");
    MsgClose();
    ScrFadeOut(0,0);
    ChCheek(5,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
