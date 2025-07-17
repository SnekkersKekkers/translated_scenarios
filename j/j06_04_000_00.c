ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
MsgSel("Yeah, I'm coming!","Uh, sorry about that ...");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        break ;
        case 4:
        case 5:
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("J060400000_04_000");
        MsgDisp("Nanatsumori","All right.
So what do you want to do on the day?");
        MsgDisp("主人公","Okay then, at the
｛待ち合わせ場所｝ What do
you think?");
        ChMotion(4,0,1);
        VoicePlay("J060400000_04_010");
        MsgDisp("Nanatsumori","OK.
On Sunday, don't oversleep.");
        MsgDisp("主人公","Hmmm, ｛七ツ森＊｝ is the
best!");
        ChEye(4,1);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("J060400000_04_020");
        MsgDisp("Nanatsumori","I'll tell you.
Don't worry.
See you.");
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        MsgClose();
        ChClose(4,0,30);
        Wait(30);
        MsgDisp("主人公","(｛七ツ森＊｝.
He asked me out on a date.
I'm looking forward to Sunday!)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        break ;
        case 4:
        case 5:
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,1,1);
        VoicePlay("J060400000_04_030");
        MsgDisp("Nanatsumori","Ahh ... no good then?");
        MsgDisp("主人公","Yeah...");
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("J060400000_04_040");
        MsgDisp("Nanatsumori","Okay.
I'll get back to some other time.
Bye.");
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        MsgClose();
        ChClose(4,0,30);
        Wait(30);
        MsgDisp("主人公","(He went to the trouble of inviting me,
I'm sorry I did that ...)");
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
