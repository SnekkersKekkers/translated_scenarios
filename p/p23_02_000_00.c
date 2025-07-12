BGMStop(1.7);
Wait(60,0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    break ;
    case 4:
    case 5:
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,38,3,3,3,0,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P230200000_02_000");
    MsgDisp("Sassa","｛主人公｝,
That outfit is nice.");
    ChEye(2,0);
    ChEyeOpenLevel(2,10);
    MsgDisp("主人公","｛颯砂＊＊｝ also looks like the King of
the Underworld.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P230200000_02_010");
    MsgDisp("Sassa","Is that right? But I definitely understand
Hades' feelings.");
    MsgDisp("主人公","Really?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P230200000_02_020");
    MsgDisp("Sassa","Yeah, he's just like me.
I felt strange when practicing.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P230200000_02_030");
    MsgDisp("Sassa","They say he's simple minded, can only
charge straight ahead like an idiot, you
know, just like me.");
    MsgDisp("主人公","｛颯砂＊＊｝ isn't like that though?
Although, you do both like doggies.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("P230200000_02_040");
    MsgDisp("Sassa","Hahaha, you mean Cerebus?
That's great, he's super cool.");
    ChEye(2,0);
    ChEyeOpenLevel(2,10);
    MsgDisp("主人公","Hehe, yeah.
Today, a real doggie will appear.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("P230200000_02_050");
    MsgDisp("Sassa","Seriously, I can't wait.");
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,0);
    VoicePlay("P230200000_47_000");
    MsgDisp("Broadcast","Habataki High School's play will begin
shortly.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P230200000_02_060");
    MsgDisp("Sassa","Then, I'll be waiting for you in the
underworld!");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(Hehe! I'll do my best in order for this
play to be a success!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEye(2,0);
ChMouth(2,0);
ChEyeOpenLevel(2,#1);
ChCheek(2,0);
