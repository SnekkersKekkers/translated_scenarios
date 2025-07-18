BGMPlay("BGM_SPORTS_DAY",0.01);
BGOpen("sc760",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020100000_01_000");
    MsgDisp("Kazama","You did it.
You looked really into it.");
    MsgDisp("主人公","(Hehe, I'm glad I won!)");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,30,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
I won!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("O020100000_01_010");
    MsgDisp("Kazama","I know, I was watching.
You had a lot of fun, huh?");
    MsgDisp("主人公","What?
I was trying my hardest.");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("O020100000_01_020");
    MsgDisp("Kazama","I see, my bad.
But you know, it was nice seeing you cling
to the rope like a kitten.");
    MsgDisp("主人公","(Geez.
I just won, but it doesn't feel like he's
praising me at all...)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
I won!");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("O020100000_01_030");
    MsgDisp("Kazama","Congrats, I was watching.
You know, it kinda made me feel powerful,
too.");
    MsgDisp("主人公","Hehe, my hands hurt a little, too.");
    MsgClose();
    SEPlay("EV_SE_628");
    ChClose(1,0,30);
    ChLayout(0);
    MsgClose();
    ChOpen(1,30,0,2,2,#1,#1,0,0,0,30);
    SEWait();
    VoicePlay("O020100000_01_040");
    MsgDisp("Kazama","Huh?
Here, let me see.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("O020100000_01_050");
    MsgDisp("Kazama","They're a little red.
You must have gotten some rope burn.");
    MsgDisp("主人公","Um, I think it'll be fine.");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("O020100000_01_060");
    MsgDisp("Kazama","Hm, next is the folk dance...Maybe you
should rest? You might get germs from
holding hands with other guys.");
    MsgDisp("主人公","(I'm glad I won the tug of war!
But I think I made ｛風真＊＊｝
worry.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChLayout(1);
