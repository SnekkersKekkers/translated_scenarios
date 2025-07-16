ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
MsgSel("Yeah, I'm coming!","Uh, sorry about that ......");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        break ;
        case 4:
        case 5:
        ChMotion(5,3);
        Wait(20,0);
        ChEye(5,3);
        ChMouth(5,3);
        VoicePlay("J060500000_05_000");
        MsgDisp("Hiiragi","Thank you.
Can you suggest a meeting place?");
        MsgDisp("主人公","At ｛待ち合わせ場所｝
sounds good?");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("J060500000_05_010");
        MsgDisp("Hiiragi","Yes, ma'am.
To be able to accept the invitation, it is
such a pleasure.");
        ChMouth(5,3);
        VoicePlay("J060500000_05_020");
        MsgDisp("Hiiragi","Well then, I look forward to the day.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(5);
        MsgDisp("主人公","(｛柊＊＊＊｝ invited me to go out with him
......
Is this a date?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        break ;
        case 4:
        case 5:
        ChEye(5,0);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("J060500000_05_030");
        MsgDisp("Hiiragi","I see.
I understand.");
        MsgDisp("主人公","I'm sorry about that .......
I'm just ......");
        ChEye(5,4);
        ChMotion(5,4);
        VoicePlay("J060500000_05_040");
        MsgDisp("Hiiragi","No, no, we have no choice.");
        ChEye(5,3);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("J060500000_05_050");
        MsgDisp("Hiiragi","Next time, you should be OK with it
without a second thought, I will invite
you well.");
        MsgDisp("主人公","Hmmm, yeah.
See you later.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(5);
        MsgDisp("主人公","(Hmmm ......
He went to all the trouble of inviting me
over, I'm sorry I did that......)");
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
MsgClose();
ScrFadeOut(0,0);
