BGMStop();
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're showing tradtional
wedding dresses. I think I was able to
make it pretty but...)");
    MsgDisp("主人公","Ah,｛風真＊＊｝.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,2,2,8,-1,7,0);
    ChMotion(1,3);
    VoicePlay("P730100002_01_000");
    MsgDisp("Kazama","Ha, the destructive power...");
    MsgDisp("主人公","Destructive?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    ChCheek(1,0);
    VoicePlay("P730100002_01_010");
    MsgDisp("Kazama","...Yeah,  it's so great that it's
silly to even gloss over it.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P730100002_01_020");
    MsgDisp("Kazama","Haa, you wearing a wedding dress is
unrivalled.");
    MsgDisp("主人公","Really? I'm happy!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChCheek(1,0);
    VoicePlay("P730100002_01_030");
    MsgDisp("Kazama","Yeah, it's a shame I'm in uniform.");
    MsgDisp("主人公","Next time, should I make a tuxedo for
｛風真＊＊｝?");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P730100002_01_040");
    MsgDisp("Kazama","Too bad the tuxedo
wouldn't make it in time.");
    MsgDisp("主人公","Hehe, 
I'll have to go by myself for today!");
    MsgDisp("主人公","(Thanks to ｛風真＊＊｝, 
I think my nerves have lessened.
This is my last runway, let's enjoy it.)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're showing tradtional
wedding dresses. I think I was able to
make it pretty but...)");
    MsgDisp("主人公","Ah,｛風真＊＊｝, did you come to watch?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,4,2,-1,-1,7,0);
    VoicePlay("P730100002_01_050");
    MsgDisp("Kazama","I'm the type of person who 
saves what they enjoy for later...");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P730100002_01_060");
    MsgDisp("Kazama","But I'm glad I came.");
    MsgDisp("主人公","Really?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P730100002_01_070");
    MsgDisp("Kazama","There was no need to wait until later. Now
is good. Right now, at this very moment, I
like the way you look like a bride.");
    MsgDisp("主人公","｛風真＊＊｝...
Thank you.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3,1);
    ChCheek(1,0);
    VoicePlay("P730100002_01_080");
    MsgDisp("Kazama","Rather than a runway,
wouldn't it be better to just go 
down the aisle like this?");
    SEPlay("EV_SE_038");
    SEWait();
    ChMotion(1,0);
    MsgDisp("主人公","Ah, it's my turn on stage.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P730100002_01_090");
    MsgDisp("Kazama","Just think of it as a rehearsal,
and enjoy yourself?");
    MsgDisp("主人公","Hehe, yeah!");
    MsgDisp("主人公","((That's right, this is the last one.
Let's have fun!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
