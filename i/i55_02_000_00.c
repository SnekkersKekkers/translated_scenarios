BGOpen("ar500",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Welcome!
Ah, ｛颯砂＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,255,0,0,0,#1,#1,0,0);
    VoicePlay("I550200000_02_000");
    MsgDisp("Sassa","Ah, so you're working part-time here.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I550200000_02_010");
    MsgDisp("Sassa","Huh, nice.
This kinda stuff suits you.");
    MsgDisp("主人公","Thanks.
Did you need something today?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("I550200000_02_020");
    MsgDisp("Sassa","Right, my place is going to have some
guests over soon, so I was asked to get
some snacks.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("I550200000_02_030");
    MsgDisp("Sassa","Hm...
Seasonal snacks for three, please.
I'll leave it to you.");
    MsgDisp("主人公","Yes.
Please wait a little.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,2);
    VoicePlay("I550200000_02_040");
    MsgDisp("Sassa","Wow, so you can eat inside the store, too.");
    MsgDisp("主人公","Yes, please feel free next time.
Ah, were you okay with sweets?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I550200000_02_050");
    MsgDisp("Sassa","Me?
I'll eat anything as long as it's good.");
    MsgDisp("主人公","Hehe, it's all delicious.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I550200000_02_060");
    MsgDisp("Sassa","Alright, then make it 4 portions.
I'll try some.");
    MsgDisp("主人公","Understood!");
    MsgDisp("主人公","(I hope it suits ｛颯砂＊＊｝'s tastes...!)");
    break ;
    case 3:
    VoicePlay("I550200000_02_070");
    MsgDisp("Sassa?","Excuse me.");
    MsgDisp("主人公","Welcome.");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,255,3,0,4,#1,#1,0,0);
    VoicePlay("I550200000_02_080");
    MsgDisp("Sassa","Ooh, you're working hard.");
    MsgDisp("主人公","Hehe, are you looking for something in
particular?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("I550200000_02_090");
    MsgDisp("Sassa","Yeah, a matcha and dango set.
It's okay to eat in here, right?");
    MsgDisp("主人公","So you'll be eating here.
Please follow me.");
    MsgClose();
    ScrFadeOut(0);
    ChClose(2,0,0);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    Wait(40);
    MsgClose();
    ScrFadeIn(0);
    MsgClose();
    ChOpen(2,255,4,0,4,#1,#1,0,0);
    VoicePlay("I550200000_02_100");
    MsgDisp("Sassa","Thanks for the food.
It was good.
I liked the matcha.");
    MsgDisp("主人公","How were the dango?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("I550200000_02_110");
    MsgDisp("Sassa","They were a little small for me.
But, I guess that's what Japanese sweets
are about.");
    MsgDisp("主人公","Y-Yeah...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I550200000_02_120");
    MsgDisp("Sassa","I'll grab something to eat on my way home.
See you.
Thanks for the food!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","Thank you very much!");
    MsgDisp("主人公","(｛颯砂＊＊｝...did the small amount of
food just serve as an appetizer?)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Welcome.");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,255,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("I550200000_02_130");
    MsgDisp("Sassa","｛主人公｝, you're working hard again
today, huh.");
    MsgDisp("主人公","Yes, what are you looking for today?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("I550200000_02_140");
    MsgDisp("Sassa","Nothing, actually.
But you work on these days, right.
So I just ended up coming.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    ChEyeOpenLevel(2,7);
    VoicePlay("I550200000_02_150");
    MsgDisp("Sassa","...Hm?
I realized this as I was saying it, but
aren't my actions kinda bad?");
    MsgDisp("主人公","Huh, I don't think so.
You came to check on me, right?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("I550200000_02_160");
    MsgDisp("Sassa","If you say that, then it's fine, but A big
guy like me coming to a store like this
for no reason...isn't it weird?");
    MsgDisp("主人公","Not at all, the manager would be happy
that you came in for no reason. We have a
lot of single male customers, too.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("I550200000_02_170");
    MsgDisp("Sassa","Hm, so there's that, too...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("I550200000_02_180");
    MsgDisp("Sassa","Got it. Then I'll have something to eat.
Please give me something with volume and
matcha.");
    MsgDisp("主人公","(｛颯砂＊＊｝ really cares about my
part-time job.
That makes me happy.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
