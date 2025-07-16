BGOpen("ar500",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,255,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
Welcome!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I550100000_01_000");
    MsgDisp("Kazama","Well don't you look just like the daughter
of a dango-shop owner?");
    MsgDisp("主人公","Hehe, the uniform is cute, isn't it?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I550100000_01_010");
    MsgDisp("Kazama","It's nice.
You just need the wig, and then it'd be
perfect.");
    MsgDisp("主人公","Well, I guess being a lord would suit you
then, ｛風真＊＊｝.");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I550100000_01_020");
    MsgDisp("Kazama","Miss, give me one dango.");
    MsgDisp("主人公","Comin' right up!");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I550100000_01_030");
    MsgDisp("Kazama","Isn't that what they say at sushi
restaurants?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I550100000_01_040");
    MsgDisp("Kazama","If you're the face of the shop, I can get
why it'd thrive.");
    MsgDisp("主人公","Really?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I550100000_01_050");
    MsgDisp("Kazama","Just don't throw your charm around too
much.
Well, see ya.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","Thank you very much!");
    MsgDisp("主人公","(Hehe, ｛風真＊＊｝ came to
check on me.)");
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,255,0,0,0,#1,#1,0,0);
    VoicePlay("I550100000_01_060");
    MsgDisp("Kazama","Yo, you're working hard.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝, welcome.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("I550100000_01_070");
    MsgDisp("Kazama","3 mitarashi and 3 daifuku.");
    MsgDisp("主人公","Okay.
Will you be taking it home?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I550100000_01_080");
    MsgDisp("Kazama","Yeah, I'll be eating it on the porch with
my grandpa.");
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,4);
    VoicePlay("I550100000_01_090");
    MsgDisp("Kazama","You know, I'll have your share ready, too?");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    MsgDisp("主人公","Thanks.
But, I'm working right now......");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I550100000_01_100");
    MsgDisp("Kazama","So you can't come. I think grandpa would
be happy to see you dressed like this, so
I'll bring him next time.");
    MsgDisp("主人公","Hehe, okay.
Please come with him next time, then.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I550100000_01_110");
    MsgDisp("Kazama","Okay.
See you.");
    MsgDisp("主人公","(｛風真＊＊｝ came to check on me.
Hehe, I'm happy.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,255,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("I550100000_01_120");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
Welcome.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I550100000_01_130");
    MsgDisp("Kazama","Today......
I'll have some of the recommended sweets,
please.");
    MsgDisp("主人公","Yes, understood.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    SEWait();
    Wait(40);
    VoicePlay("I550100000_46_000");
    MsgDisp("Clerk","Ah, that person is...... the young master,
right?
Is he your friend?");
    MsgDisp("主人公","Um...... ah, yes.
He's my classmate.");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    MsgClose();
    ChOpen(1,255,0,4,3,#1,#1,0,0);
    VoicePlay("I550100000_01_140");
    MsgDisp("Kazama","......Nice to meet you, I'm her classmate
Ryota.");
    MsgClose();
    ScrFadeOut(0);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ScrFadeIn(0);
    MsgDisp("主人公","Sorry about earlier.
They're one of your fans,
｛風真＊＊｝.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("I550100000_01_150");
    MsgDisp("Kazama","I see.
That's fine, but what about you?");
    MsgDisp("主人公","Huh?
Um......
I don't think I'm your fan.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I550100000_01_160");
    MsgDisp("Kazama","I know that much.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I550100000_01_170");
    MsgDisp("Kazama","I had fun today, so it's fine.
See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(｛風真＊＊｝ really is popular......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
