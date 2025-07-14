BGMStop();
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're showing traditional
wedding dresses. I think I was able to
make it pretty but...)");
    VoicePlay("P730200002_02_000");
    MsgDisp("Sassa?","Uwo...
seriously...");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,0,0,0,#1,#1,0,0);
    VoicePlay("P730200002_02_010");
    MsgDisp("Sassa","It's nice.
You're a bride this yearー");
    MsgDisp("主人公","Yeah. It's the handicraft's club
tradition, the last cultural festival
we'll do wedding dresses.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("P730200002_02_020");
    MsgDisp("Sassa","Phew, the destructive power is huge.");
    MsgDisp("主人公","Destructive power?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P730200002_02_030");
    MsgDisp("Sassa","Yeah, 
you've already blown us all away.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P730200002_02_040");
    MsgDisp("Sassa","You look so good that I don't care about
all the things I was going to talk to you
about.");
    MsgDisp("主人公","Thank you...");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("P730200002_02_050");
    MsgDisp("Sassa","Don't worry about anything.
If you show up on stage like that, smiling
warmly, you've already won.");
    MsgDisp("主人公","(Thak you for helping me gain confidence,
｛颯砂＊＊｝!
Alrーiight, let's do our best!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(2,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're showing traditional
wedding dresses. I think I was able to
make it pretty but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,4,0,0,#1,#1,0,0);
    VoicePlay("P730200002_02_060");
    MsgDisp("Sassa","Is that a bride?");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝. This year we're doing
wedding dresses.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1);
    VoicePlay("P730200002_02_070");
    MsgDisp("Sassa","You've already won overall, it's been
decided.");
    MsgDisp("主人公","Won overall?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P730200002_02_080");
    MsgDisp("Sassa","Sorry to everyone else.
but when you're this lovely and cute,
you're already overall victorious.");
    MsgDisp("主人公","It's not a matter of win or lose?
But, thank you.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("P730200002_02_090");
    MsgDisp("Sassa","Ah, it's starting.");
    MsgDisp("主人公","Thanks to ｛颯砂＊＊｝, I have some
confidence. Thank you. I'm off then.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P730200002_02_100");
    MsgDisp("Sassa","Yeah, go with the intention of getting a
winning run.");
    MsgDisp("主人公","(Hehe, I think I feel better now.
Alーright, let;s do our best!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(2,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
