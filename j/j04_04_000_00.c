MsgClose();
ChLayout(1);
BGMPlay("BGM_C04_NANA_A");
ChNanaType(0);
ChOpen(4,254,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    VoicePlay("J040400000_04_000");
    MsgDisp("Nanatsumori","Found you.");
    MsgDisp("主人公","｛七ツ森＊｝, what's wrong ?");
    ChMotion(4,1,1);
    VoicePlay("J040400000_04_010");
    MsgDisp("Nanatsumori","This Sunday.
Are you free?");
    MsgSel("Yeah, I'm free.", "I have to run an errand……");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("J040400000_04_020");
        MsgDisp("Nanatsumori","Errands......
Then I guess I don't have a choice.");
        MsgDisp("主人公","Sorry.");
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("J040400000_04_030");
        MsgDisp("Nanatsumori","Oh, no, no worries.
I'll ask you out again without fail.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        MsgClose();
        ChClose(4,0,30);
        Wait(30);
        MsgDisp("主人公","(This Sunday......
What did he need?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    default :
    DbgAssert(1);
    break ;
    }
