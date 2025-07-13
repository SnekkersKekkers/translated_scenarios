BGOpen("ar200",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","My name is ｛主人公苗字｝.
It's my pleasure to work here
starting today.");
VoicePlay("I430600000_49_000");
MsgDisp("Manager","Your shifts are every week
on Wednesday and Friday.
Please do your best.");
MsgDisp("主人公","Yes, understood.");
MsgDisp("主人公","(Alright, let's do this!)");
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C06_INORI_A");
    ChOpen(6,35,0,0,0,#1,#1,0,0);
    VoicePlay("I430600000_06_000");
    MsgDisp("Himuro","......Huh.");
    MsgDisp("主人公","Hm, ｛氷室＊＊｝∋
Why are you here?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I430600000_06_010");
    MsgDisp("Himuro","Can't you tell just by looking?");
    MsgDisp("主人公","You work here too, ｛氷室＊＊｝?
I didn't know.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("I430600000_06_020");
    MsgDisp("Himuro","Ah, I see.
Bye.");
    MsgDisp("主人公","Huh, where are you going?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I430600000_06_030");
    MsgDisp("Himuro","To do my job.
Go do yours, too.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I430600000_06_040");
    MsgDisp("Himuro","Don't think you can rely on me
or be spoiled just 'cause I know you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(6);
    MsgDisp("主人公","Ah......");
    MsgDisp("主人公","(｛氷室＊＊｝ does have a point.
Alright, I'll do my best!)");
    break ;
    case 3:
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C06_INORI_A");
    ChOpen(6,35,0,0,0,#1,#1,0,0);
    VoicePlay("I430600000_06_050");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","｛氷室＊＊｝∋
You work here?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    ChEyeOpenLevel(6,8);
    VoicePlay("I430600000_06_060");
    MsgDisp("Himuro","That bad?");
    MsgDisp("主人公","No.
But, it's a little unexpected......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I430600000_06_070");
    MsgDisp("Himuro","It doesn't matter where I work.");
    MsgDisp("主人公","That's true, but......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I430600000_06_080");
    MsgDisp("Himuro","Well, just don't hold me back.
I don't want to clean up your messes.");
    MsgDisp("主人公","Got it.");
    MsgDisp("主人公","(Alright, I'll do my best!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C06_INORI_A");
    ChOpen(6,35,0,0,0,#1,#1,0,0);
    VoicePlay("I430600000_06_090");
    MsgDisp("Himuro","Ah......");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I430600000_06_100");
    MsgDisp("Himuro","Starting today?");
    MsgDisp("主人公","Yeah.
Let's work hard together.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    ChEyeOpenLevel(6,0);
    VoicePlay("I430600000_06_110");
    MsgDisp("Himuro","Looking forward to it,
as long as you don't hold me back.");
    MsgDisp("主人公","I'll do my best!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChCheek(6,5);
    VoicePlay("I430600000_06_120");
    MsgDisp("Himuro","............");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I430600000_06_130");
    MsgDisp("Himuro","Hey, why did you choose this place?");
    MsgDisp("主人公","Hm?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I430600000_06_140");
    MsgDisp("Himuro","There are lots of places
you can work, right?");
    MsgDisp("主人公","Um, that's-");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("I430600000_06_150");
    MsgDisp("Himuro","Never mind.
Come on, work.
I need you to do something for me.");
    MsgDisp("主人公","Ah, okay!");
    MsgDisp("主人公","(Alright, I'll do my best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChCheek(6,0);
