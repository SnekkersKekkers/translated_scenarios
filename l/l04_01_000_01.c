switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("L040100001_01_000");
    MsgDisp("Kazama","Did you buy this at Simon's?");
    MsgDisp("主人公","Hm?
No, I didn't.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("L040100001_01_010");
    MsgDisp("Kazama","Well, I guess you can buy these anywhere.
I'll accept your feelings gratefully.");
    MsgDisp("主人公","(Hm, maybe I should've given him a better
one?)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    break ;
    case 3:
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("L040100001_01_020");
    MsgDisp("Kazama","...What is this chocolate?");
    MsgDisp("主人公","Um, Valentine's Day chocolate.");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("L040100001_01_030");
    MsgDisp("Kazama","I know that much.
Just, everyone is giving me these.");
    MsgDisp("主人公","Hm?
Really?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    VoicePlay("L040100001_01_040");
    MsgDisp("Kazama","Yeah.
Simon's customers, and grandmothers out
for shopping at the mall.");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("L040100001_01_050");
    MsgDisp("Kazama","And, you too.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Hm...
Should I have given him a better
chocolate?)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("L040100001_01_060");
    MsgDisp("Kazama","Uh...you're okay with these expressing
your feelings, right?");
    MsgDisp("主人公","Um...
Yes.");
    ChMotion(1,3);
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    ChEye(1,2);
    ChMouth(1,3);
    VoicePlay("L040100001_01_070");
    MsgDisp("Kazama","I see.
Then, I'll cherish these.");
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("L040100001_01_080");
    MsgDisp("Kazama","It's not about how the chocolate looks.
Your feelings are what matters.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Maybe I should've given him a better
chocolate...)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
