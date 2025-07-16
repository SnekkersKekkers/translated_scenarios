BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,30,0,2,2,#1,#1,0,0);
    ScrFadeIn(0);
    ChMouth(1,1);
    ChMotion(1,1);
    VoicePlay("O030100001_01_000");
    MsgDisp("Kazama","I thought that if it was us, we definitely
could've gotten first place......");
    MsgDisp("主人公","(Ah, we were so close.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,30,0,0,2,0,#1,0,0);
    ScrFadeIn(0);
    ChMouth(1,1);
    ChMotion(1,1);
    VoicePlay("O030100001_01_010");
    MsgDisp("Kazama","There's no way that we weren't in sync.");
    MsgDisp("主人公","I did my best......
I'm sorry.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O030100001_01_020");
    MsgDisp("Kazama","This is a problem.
Do you want to spend the rest of the day
tied together?");
    MsgDisp("主人公","Huh?");
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,3);
    VoicePlay("O030100001_01_030");
    MsgDisp("Kazama","What, I don't really mind.");
    MsgDisp("主人公","(If only we were a bit more in sync......)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,30,0,2,2,8,#1,0,0);
    ScrFadeIn(0);
    ChMotion(1,3);
    VoicePlay("O030100001_01_040");
    MsgDisp("Kazama","Sorry, was I going too fast.");
    MsgDisp("主人公","No, I'm sorry, too.");
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O030100001_01_050");
    MsgDisp("Kazama","Hey, didn't we fall at the same time?");
    MsgDisp("主人公","Hehe, I guess so.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O030100001_01_060");
    MsgDisp("Kazama","Being too in sync is a problem, too.
Well, you didn't get hurt, so it's okay.");
    MsgDisp("主人公","But I wanted to win first place, you know?");
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("O030100001_01_070");
    MsgDisp("Kazama","Then should we blend in during the next
race?");
    MsgDisp("主人公","(We didn't win, but it was fun
participating with ｛風真＊＊｝.
)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
