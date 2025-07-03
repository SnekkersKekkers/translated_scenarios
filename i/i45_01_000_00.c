BGOpen("ar200",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("I450100000_01_000");
    MsgDisp("Kazama?","Excuse me, clerk.");
    MsgDisp("主人公","Ah, yes!
Welcome!");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,255,0,0,3,-1,-1,0,0);
    VoicePlay("I450100000_01_010");
    MsgDisp("Kazama","You look like a bee, flying around
all those flowers, you know?");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
A bee......
What's up?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I450100000_01_020");
    MsgDisp("Kazama","I was lured in by the flowers, too.");
    MsgDisp("主人公","Then you're a bee too,
right, ｛風真＊＊｝?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I450100000_01_030");
    MsgDisp("Kazama","I guess so.
Now that I've seen such a beautiful
flower, I'll return to my hive. See you.");
    MsgDisp("主人公","Hehe, bye.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Hm, did ｛風真＊＊｝
just come to check on me?)");
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,255,0,0,3,8,-1,0,0);
    VoicePlay("I450100000_01_040");
    MsgDisp("Kazama","There you are, worker bee.");
    MsgDisp("主人公","｛風真＊＊｝.
Geez, I'd rather be called a butterfly
than a bee, you know?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I450100000_01_050");
    MsgDisp("Kazama","Butterfly?
You seem more like a bee.
Hardworking and friendly.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I450100000_01_060");
    MsgDisp("Kazama","And a sweet tooth.");
    MsgClose();
    ChClose(1,0,30);
    ChLayout(0);
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(1,255,1,4,3,-1,-1,0,0,0,30);
    SEPlay("EV_SE_659",0,0.5);
    SEWait();
    VoicePlay("I450100000_01_070");
    MsgDisp("Kazama","Here's a candy.
I'll put it in your apron pocket,
so eat it secretly later.");
    MsgDisp("主人公","Hehe, okay.
Thanks, ｛風真＊＊｝.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0.01);
    ChClose(1,0,30);
    ChLayout(1);
    MsgClose();
    ChOpen(1,255,0,0,3,-1,-1,0,0,0,30);
    VoicePlay("I450100000_01_080");
    MsgDisp("Kazama","Sure you're not working too hard,
little bee?
See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Let's replenish our sugar with
｛風真＊＊｝'s candy and get back to
work!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,255,0,0,0,-1,-1,0,0);
    VoicePlay("I450100000_01_090");
    MsgDisp("Kazama","Yo, you're here.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
Welcome!");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("I450100000_01_100");
    MsgDisp("Kazama","I came to order
a flower arrangement today.");
    MsgDisp("主人公","Um, then I'll call the manager......");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("I450100000_01_110");
    MsgDisp("Kazama","I'm asking you.");
    MsgDisp("主人公","Are you okay with me doing it?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,4);
    ChEyeOpenLevel(1,8);
    ChCheek(1,7);
    VoicePlay("I450100000_01_120");
    MsgDisp("Kazama","I wanted you.
From a long time ago.");
    MsgDisp("主人公","Hm?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChCheek(1,5);
    VoicePlay("I450100000_01_130");
    MsgDisp("Kazama","Something I feel like I can give
as a celebratory gift, please.");
    MsgDisp("主人公","Okay, got it.
I'll try.");
    MsgClose();
    ChClose(1);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ChOpen(1,255,0,0,0,-1,-1,0,0);
    MsgDisp("主人公","Thank you for waiting.
......How is it?");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I450100000_01_140");
    MsgDisp("Kazama","Ooh, nice.
As expected, you've got good sense.");
    MsgDisp("主人公","I'm glad.
I hope the person you're giving it to
will be happy with it.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I450100000_01_150");
    MsgDisp("Kazama","That's guaranteed.
Since I decided to take it for myself.");
    MsgDisp("主人公","Huh, really?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I450100000_01_160");
    MsgDisp("Kazama","Yeah, I'm not giving
your masterpiece to anyone else.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("I450100000_01_170");
    MsgDisp("Kazama","So, how long does it last?
This.");
    MsgDisp("主人公","Hm, maybe two weeks at most.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I450100000_01_180");
    MsgDisp("Kazama","I'll be back around then.
See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Yay, ｛風真＊＊｝ praised me!
Let's practice more and get better!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
