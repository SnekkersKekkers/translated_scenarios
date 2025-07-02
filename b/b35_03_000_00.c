BGDateAfterOpen();
MsgClose();
ChOpen(3,255,0,0,0,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("B350300000_03_000");
MsgDisp("Honda","｛主人公｝.");
MsgDisp("主人公","Oh ｛本多＊＊｝. Everyone's gone home, you
know?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B350300000_03_010");
MsgDisp("Honda","Yeah, I know. That's why I came here.");
MsgDisp("主人公","Huh?");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("B350300000_03_020");
MsgDisp("Honda","Hey, are you free after this? Do you wanna
go somewhere together?");
MsgSel("Yeah, of course!","I've already got plans...");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,5,1);
    VoicePlay("B350300000_03_030");
    MsgDisp("Honda","Ah I'm so glad. If I had gone home like 
that, I'd be regretting it by now.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("B350300000_03_040");
    MsgDisp("Honda","I'm glad I gathered the courage. So, shall
we head out right away?");
    MsgDisp("主人公","Hehe, sure!");
    break ;
    case 1:
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,5,1);
    VoicePlay("B350300000_03_050");
    MsgDisp("Honda","Oh, I see. Well, it can't be helped then.");
    MsgDisp("主人公","Sorry...");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("B350300000_03_060");
    MsgDisp("Honda","Don't apologize! The idea was pretty
sudden after all.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("B350300000_03_070");
    MsgDisp("Honda","But next time! Let's definitely go
somewhere together.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(3);
    MsgDisp("主人公","(｛本多＊＊｝, seemed to be putting on a
brave face... Maybe I did something
wrong...)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
