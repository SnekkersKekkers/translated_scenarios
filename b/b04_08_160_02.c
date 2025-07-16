BGOpen("ne330",0);
ChLayout(1);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B040816002_08_000");
MsgDisp("Shirahane","Ah, this game!
The one that's made in collaboration with
that quiz show!");
MsgSel("Can ｛大地＊＊｝ do it?","｛大地＊＊｝ is also a quiz king!","Let's try it together!");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,4,1);
        VoicePlay("B040816002_08_010");
        MsgDisp("Shirahane","Do I look like such a good-for-nothing
guy?
I feel kinda dejected...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(8,2);
        ChMouth(8,0);
        ChMotion(8,0,1);
        VoicePlay("B040816002_08_020");
        MsgDisp("Shirahane","Huh?
Do I really look like such a
good-for-nothing guy?");
        MsgDisp("主人公","It's not like that...");
        ChEye(8,1);
        ChMouth(8,3);
        ChMotion(8,1,1);
        VoicePlay("B040816002_08_030");
        MsgDisp("Shirahane","I'll show you my cool side!
Just you wait!");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        MsgClose();
        ChClose(8,0,30);
        SEWait();
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
        SEWait();
        ChOpen(8,255,0,2,4,#1,#1,0,0);
        ChMotion(8,4,1);
        VoicePlay("B040816002_08_040");
        MsgDisp("Shirahane","Again...
Another trick question screwed me over.");
        MsgDisp("主人公","It was just one more question.
That was close, wasn't it?");
        ChEye(8,2);
        ChMouth(8,2);
        ChEyeOpenLevel(8,0);
        VoicePlay("B040816002_08_050");
        MsgDisp("Shirahane","Haa..
This is so uncool.");
        MsgDisp("主人公","No.
｛大地＊＊｝ was amazing!
Everyone watching was cheering him on!");
        ChEye(8,2);
        ChMouth(8,0);
        VoicePlay("B040816002_08_060");
        MsgDisp("Shirahane","Haha....");
        ChEye(8,5);
        ChMouth(8,2);
        ChMotion(8,1,1);
        MsgDisp("主人公","Hey. This is unlike you,
｛大地＊＊｝. Let's cheer up!");
        ChEye(8,0);
        ChMouth(8,1);
        ChEyeOpenLevel(8,10);
        VoicePlay("B040816002_08_070");
        MsgDisp("Shirahane","Yes!");
        ChEye(8,0);
        ChMouth(8,3);
        ChMotion(8,0,1);
        VoicePlay("B040816002_08_080");
        MsgDisp("Shirahane","Ah...
Hearin' your voice switched me on.
I'll try once again!");
        MsgClose();
        SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
        ChClose(8,0,30);
        MsgDisp("主人公","(Hehe! ｛大地＊＊｝ enjoys
the challenge more than hating to lose,
doesn't he?)");
        SEWait();
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(4);
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040816002_08_090");
    MsgDisp("Shirahane","Alright.
Then, let's give it a try!
Watch!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("B040816002_08_100");
    MsgDisp("Shirahane","Sounds good!
Let's take on the quiz together!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
