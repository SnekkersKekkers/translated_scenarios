BGOpen("fp720",0);
ChLayout(1);
SEPlay("EV_SE_652");
ScrFadeIn(0);
MsgDisp("主人公","I will be working here starting today.
My name is ｛主人公苗字｝.
It's my pleasure.");
VoicePlay("I130100001_45_000");
MsgDisp("Manager","Your shifts are Tuesdays and Thursdays.
Nice to meet you.");
MsgDisp("主人公","Yes, I understand.");
MsgDisp("主人公","(Alright, let's do our best!)");
MsgClose();
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C01_RYOUTA_A");
    ChOpen(1,35,0,3,2,#1,#1,0,0);
    ChMotion(1,3);
    VoicePlay("I130100001_01_000");
    MsgDisp("Kazama","...Hm?
What are you doing here?");
    MsgDisp("主人公","Ah, ｛風真＊＊｝. I'll be
working part-time here starting today.
Let's work hard together.");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I130100001_01_010");
    MsgDisp("Kazama","So the new part-timer was you.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I130100001_01_020");
    MsgDisp("Kazama","Good choice.
Working here is rewarding.
Let's work hard together.");
    MsgDisp("主人公","Yeah!");
    MsgDisp("主人公","(Alright, let's do our best!)");
    MsgClose();
    break ;
    case 3:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C01_RYOUTA_A");
    ChOpen(1,35,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("I130100001_01_030");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
I'm working part-time here now.
Let's work hard together.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("I130100001_01_040");
    MsgDisp("Kazama","I know.
I'll train you perfectly, okay?");
    MsgDisp("主人公","Um...go easy on me?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("I130100001_01_050");
    MsgDisp("Kazama","No.
Work is work.");
    MsgDisp("主人公","(Ugh...
｛風真＊＊｝ looks strict.
But, let's do our best!)");
    MsgClose();
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C01_RYOUTA_A");
    ChOpen(1,35,0,0,2,#1,#1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("I130100001_01_060");
    MsgDisp("Kazama","｛主人公｝, you, that apron...");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
Does it suit me?");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I130100001_01_070");
    MsgDisp("Kazama","So the newcomer was you, huh.");
    MsgDisp("主人公","Please teach me a lot.
Senpai?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I130100001_01_080");
    MsgDisp("Kazama","Well, this is new.
Try saying it one more time.");
    MsgDisp("主人公","Huh, Ryota-senpai?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("I130100001_01_090");
    MsgDisp("Kazama","Not bad.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I130100001_01_100");
    MsgDisp("Kazama","Well, keep calling me that while we're in
the store.");
    MsgDisp("主人公","Um...
Okay.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoiceEVSPlay(1);
    VoicePlay("I130100001_01_110");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","What is it, ｛風真＊＊｝...
senpai?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I130100001_01_120");
    MsgDisp("Kazama","That was close.");
    MsgDisp("主人公","Hehe, geez.");
    MsgDisp("主人公","(Working part-time with
｛風真＊＊｝ is going to be
fun...I guess?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
