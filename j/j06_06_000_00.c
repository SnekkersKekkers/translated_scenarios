ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    MsgSel("Yeah, I'm coming!","Uh, sorry about that ...");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("J060600000_06_000");
        MsgDisp("Himuro","...Ah, so.
Where should we meet?");
        MsgDisp("主人公","How about at the
｛待ち合わせ場所｝?");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("J060600000_06_010");
        MsgDisp("Himuro","Okay, good.
There then.");
        MsgDisp("主人公","I look forward to it.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,3);
        VoicePlay("J060600000_06_020");
        MsgDisp("Himuro","Yeah ...me too.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,1);
        VoicePlay("J060600000_06_030");
        MsgDisp("Himuro","Then don't be late on the day.");
        MsgClose();
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(6);
        Wait(30);
        MsgDisp("主人公","(｛氷室＊＊｝ asked me out on a date.
I'm looking forward to Sunday!)");
        break ;
        case 1:
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("J060600000_06_040");
        MsgDisp("Himuro","What, is it bad?");
        MsgDisp("主人公","Yeah ...sorry.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("J060600000_06_050");
        MsgDisp("Himuro","Well, okay.");
        MsgDisp("主人公","Ask me out again, okay?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("J060600000_06_060");
        MsgDisp("Himuro","...if you feel like it.");
        MsgClose();
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(6);
        Wait(30);
        MsgDisp("主人公","(He went to the trouble of inviting me,
I'm sorry I did that ...)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    SEStop("EV_SE_GAYA_018",1);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
