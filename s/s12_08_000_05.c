switch (ChPrmGet(8,6)){
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
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,0);
    ScrFadeIn(0);
    VoicePlay("S120800005_08_000");
    MsgDisp("Shirahane","It's over.");
    MsgDisp("主人公","Thanks for coming with me!");
    ChEye(8,0);
    ChMouth(8,3);
    VoicePlay("S120800005_08_010");
    MsgDisp("Shirahane","No need.
This is my way of thanking you too.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("S120800005_08_020");
    MsgDisp("Shirahane","We only have a few days left in our high
school lives.
So let's live without any regrets!");
    MsgDisp("主人公","Agreed!");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("S120800005_08_030");
    MsgDisp("Shirahane","Let's go～!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(8,0,30);
    MsgDisp("主人公","(As ｛大地＊＊｝ says, I need
to live without any regrets......!)");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChLayout(1);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0);
    ScrFadeIn(0);
    VoicePlay("S120800005_08_040");
    MsgDisp("Shirahane","It's time to go.");
    MsgDisp("主人公","Yeah.
Thanks for coming with me,
｛大地＊＊｝.");
    ChMotion(8,3,1);
    VoicePlay("S120800005_08_050");
    MsgDisp("Shirahane","No problem.
You're my heroine, after all.");
    MsgDisp("主人公","......Eh?");
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,0,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("S120800005_08_060");
    MsgDisp("Shirahane","Haha!
Let's do our best on exams!");
    MsgDisp("主人公","Yup!");
    ChEye(8,4);
    ChMouth(8,0);
    ChMotion(8,4,1);
    VoicePlay("S120800005_08_070");
    MsgDisp("Shirahane","For real this time, see you later.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(8,0,30);
    MsgDisp("主人公","(Exams, huh......
There are two months left, let's try our
best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
