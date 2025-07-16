switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","My team is......
Ah, it's ｛氷室＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(6,30,0,0,0,#1,#1,0,0);
    VoicePlay("O040601000_06_000");
    MsgDisp("Himuro","What.
I'm with you?");
    MsgDisp("主人公","Yeah, let's do our best!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("O040601000_06_010");
    MsgDisp("Himuro","Well, all in moderation.
Looking forward to it.");
    break ;
    case 3:
    MsgDisp("主人公","My team is......
Ah, it's ｛氷室＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(6,30,0,0,0,#1,#1,0,0);
    VoicePlay("O040601000_06_020");
    MsgDisp("Himuro","You're on this team too, huh.");
    MsgDisp("主人公","Let's do our best!");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,1);
    VoicePlay("O040601000_06_030");
    MsgDisp("Himuro","I had planned to.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Um, my team is......");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(6,30,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(6);
    VoicePlay("O040601000_06_040");
    MsgDisp("Himuro","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!
Could it be that we're on the same team?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    ChEyeOpenLevel(6,0);
    VoicePlay("O040601000_06_050");
    MsgDisp("Himuro","It could, and is.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("O040601000_06_060");
    MsgDisp("Himuro","We have to win this.
Are you ready?");
    MsgDisp("主人公","Of course!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
