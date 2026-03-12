ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
MsgSel("Yeah, I'm coming!","Uhm, sorry...");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        break ;
        case 4:
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("J060100000_01_000");
        MsgDisp("Kazama","Okay, that's settled.
What about the meeting place?");
        MsgDisp("主人公","At the ｛待ち合わせ場所｝, sounds good?");
        ChEye(1,3);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("J060100000_01_010");
        MsgDisp("Kazama","Roger that.
I'm looking forward to it.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(1);
        MsgDisp("主人公","(An invitation from ｛Kazama＊＊｝...
Is this a date?)");
        break ;
        case 5:
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("J060100000_01_020");
        MsgDisp("Kazama","Copy that.
Where do you want to meet up?");
        MsgDisp("主人公","How about we meet at the ｛待ち合わせ場所｝?");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("J060100000_01_030");
        MsgDisp("Kazama","OK.
Well, knowing us, we'd find each other no
matter where we are, right?");
        MsgDisp("主人公","Hehe.
You have to be at the meeting point.
You know that, right?");
        ChEye(1,3);
        ChMouth(1,3);
        ChMotion(1,3,1);
        VoicePlay("J060100000_01_040");
        MsgDisp("Kazama","Yeah, it's better to see each other right
away.
It's a date, after all.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("J060100000_01_050");
        MsgDisp("Kazama","Then I'll look forward to it.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(1);
        MsgDisp("主人公","(A date with ｛Kazama＊＊｝...
I'm a little nervous.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        break ;
        case 4:
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        VoicePlay("J060100000_01_060");
        MsgDisp("Kazama","U...
Oh, yeah.
No good?");
        MsgDisp("主人公","Yeah, sorry.
It's a little bit...");
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        VoicePlay("J060100000_01_070");
        MsgDisp("Kazama","I don't know what you mean by \"a little bit\".");
        MsgDisp("主人公","You don't talk like that anymore...");
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("J060100000_01_080");
        MsgDisp("Kazama","Yeah, yeah.
I'll just sit here figuring out what \"a
little bit\" means.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(1);
        MsgDisp("主人公","(He went out of his way to invite me...
I feel bad about that...)");
        break ;
        case 5:
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("J060100000_01_090");
        MsgDisp("Kazama","Okay.");
        MsgDisp("主人公","Um...sorry?
I'm just...");
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("J060100000_01_100");
        MsgDisp("Kazama","It's fine.
Even though it's not good.");
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("J060100000_01_110");
        MsgDisp("Kazama","I'll make sure I have a plan next time.");
        MsgDisp("主人公","Uh-huh.
See you later?");
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,2);
        ChEyeOpenLevel(1,7);
        VoicePlay("J060100000_01_120");
        MsgDisp("Kazama","If we're together, who cares where we
are...");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(1);
        MsgDisp("主人公","(Hmm...
He went out of his way to invite me...
I feel bad about that...)");
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
