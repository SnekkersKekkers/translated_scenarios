switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChLayout(1);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ScrFadeIn(0);
    VoicePlay("S120100001_01_000");
    MsgDisp("Kazama","I guess it's safe to say that we've
arrived.");
    MsgDisp("主人公","It's still bright outside, so don't worry
about it, okay?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("S120100001_01_010");
    MsgDisp("Kazama","It's not a matter of how bright it is.
Especially for you, it's that.");
    MsgDisp("主人公","Huh?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    VoicePlay("S120100001_01_020");
    MsgDisp("Kazama","That's it. That power that draws you in is
stronger than usual. Be careful today. Cya
later.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","(Another year with ｛風真＊＊｝ will be
fun.
But maybe he will keep scolding me?)");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChLayout(1);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ScrFadeIn(0);
    MsgDisp("主人公","Thanks for coming with me.
｛風真＊＊｝, what will you do after this?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("S120100001_01_030");
    MsgDisp("Kazama","Huh?
What kind of question is that?");
    MsgDisp("主人公","Eh? I just wanted to know your plans......
Oh, are you going in?");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("S120100001_01_040");
    MsgDisp("Kazama","......Ha.
No, it's fine.");
    MsgDisp("主人公","Do you have something you need
to do?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("S120100001_01_050");
    MsgDisp("Kazama","Yeah.");
    ChEye(1,2);
    ChMouth(1,4);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("S120100001_01_060");
    MsgDisp("Kazama","Sigh, I'm sorry, but I'm really busy.
I've been helping Grandpa clean up over
the holidays.");
    MsgDisp("主人公","Oh, that's rough.");
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S120100001_01_070");
    MsgDisp("Kazama","Grandpa is really busy. I'm just happy I
got to spend New Years with you. I
couldn't ask for more.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S120100001_01_080");
    MsgDisp("Kazama","See you later.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","(Another year with ｛風真＊＊｝.
I hope we can hang out a lot.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
