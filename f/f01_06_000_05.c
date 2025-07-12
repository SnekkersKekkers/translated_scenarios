switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("F010600005_06_000");
    MsgDisp("Himuro","I don't mind.");
    MsgDisp("主人公","Let's go!");
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0,1);
    VoicePlay("F010600005_06_010");
    MsgDisp("Himuro","Because you want to talk to me?");
    MsgDisp("主人公","I like talking to ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("F010600005_06_020");
    MsgDisp("Himuro","Hah... well, we can go.");
    MsgDisp("主人公","Yay!
In that case, let's go.");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChCheek(6,5);
    VoicePlay("F010600005_06_030");
    MsgDisp("Himuro","...Why?");
    MsgDisp("主人公","Oh, if you have plans—");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("F010600005_06_040");
    MsgDisp("Himuro","I don't have plans.
...Let's go.");
    MsgDisp("主人公","Okay, yay!
Let's go!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0,0);
SEWait();
ChEyeOpenLevel(6,#1);
ChCheek(6,0);
