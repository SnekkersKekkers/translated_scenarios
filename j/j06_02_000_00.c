ChEyeOpenLevel(2,-1);
ChMouthOpenLevel(2,-1);
ChCheek(2,0);
MsgSel("Yeah, I'll be there!","Uh, I'm sorry about that ......");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("J060200000_02_000");
        MsgDisp("Sassa","That's good, that's a deal.");
        MsgDisp("主人公","Then on ｛日付｝,
At ｛待ち合わせ場所｝?");
        ChEye(2,3);
        ChMouth(2,3);
        ChMotion(2,4);
        ChEyeOpenLevel(2,0);
        VoicePlay("J060200000_02_010");
        MsgDisp("Sassa","All right. I'll be looking forward to
seeing you on the day.");
        MsgClose();
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(2);
        Wait(30);
        MsgDisp("主人公","(I'm going out with ｛颯砂＊＊｝.
...... This is a date, right?)");
        break ;
        case 4:
        case 5:
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("J060200000_02_020");
        MsgDisp("Sassa","Really? Yes, absolutely! Okay, let's
decide where we're going to meet.");
        MsgDisp("主人公","Yeah. Okay, then,
How about at ｛待ち合わせ場所｝?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("J060200000_02_030");
        MsgDisp("Sassa","Yeah, it's fine. Well, you're loud, so
you'll stand out wherever you are, right?");
        MsgDisp("主人公","Hmmm...easy to spot, huh?");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,4);
        VoicePlay("J060200000_02_040");
        MsgDisp("Sassa","Oh, you laughed.
I'll be the one to mark the spot.
See you.");
        MsgClose();
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(2);
        Wait(30);
        MsgDisp("主人公","(｛颯砂＊＊｝.
He asked me out on a date.
I'm looking forward to it!!)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("J060200000_02_050");
        MsgDisp("Sassa","Oh, did you have something to do?");
        MsgDisp("主人公","Yeah, that day was a bit ......");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("J060200000_02_060");
        MsgDisp("Sassa","I see. Well, it can't be helped then.
I'll ask you out again.");
        MsgDisp("主人公","Sorry, okay?");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,4);
        VoicePlay("J060200000_02_070");
        MsgDisp("Sassa","Don't apologize so much.
Bye.");
        MsgClose();
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(2);
        Wait(30);
        MsgDisp("主人公","(He took the time to invite me.
I'm sorry......)");
        break ;
        case 4:
        case 5:
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("J060200000_02_080");
        MsgDisp("Sassa","Ah, I see ......");
        MsgDisp("主人公","Sorry.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("J060200000_02_090");
        MsgDisp("Sassa","No problem.
I guess it was bad timing.
Maybe some other time.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("J060200000_02_100");
        MsgDisp("Sassa","I'm not good at reading moods.
I'm sorry if I missed it next time.");
        MsgDisp("主人公","No, I'm sorry.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("J060200000_02_110");
        MsgDisp("Sassa","See you later.");
        MsgClose();
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(2);
        Wait(30);
        MsgDisp("主人公","(You took the time to invite me.
I'm sorry ......)");
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
