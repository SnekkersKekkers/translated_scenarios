switch (ChPrmGet(5,6)){
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
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","Thanks for walking me.");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("S120500002_05_080");
    MsgDisp("Hiiragi","No problem.
Our last high school shrine visit, it was
fun.");
    MsgDisp("主人公","My last year of high school, huh.
I guess I'll be graduating soon......");
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("S120500002_05_090");
    MsgDisp("Hiiragi","Yes, I prayed earnestly. I was a bit
greedy this year, so if my wish comes
true, the two of us will visit again next
year.");
    MsgDisp("主人公","Eh?");
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("S120500002_05_100");
    MsgDisp("Hiiragi","I prayed that you would be able to come
with me again next year.");
    MsgDisp("主人公","Hehe, thank you.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("S120500002_05_110");
    MsgDisp("Hiiragi","If only the Gods will forgive me for my
greed.
See you later, then.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(Maybe ｛柊＊＊＊｝ was wishing
for something more......?)");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for taking me.");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("S120500002_05_170");
    MsgDisp("Hiiragi","Not a problem.
My apologies for being so busy.
After this, I have a meet and greet.");
    MsgDisp("主人公","Right, that's an important job for the
chairman.");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("S120500002_05_180");
    MsgDisp("Hiiragi","What will the New Year version of you look
like?");
    MsgDisp("主人公","Eh?");
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("S120500002_05_190");
    MsgDisp("Hiiragi","You know, the thing you prayed for
earlier.
What is it?");
    MsgDisp("主人公","Geez, I won't tell you that!
You're going to be late to your meet and
greet.");
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("S120500002_05_200");
    MsgDisp("Hiiragi","That's true.
Okay then, let's go.");
    MsgDisp("主人公","(Hehe!
Please treat me well,
｛柊＊＊＊｝! )");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
