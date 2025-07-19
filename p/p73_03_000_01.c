BGMStop();
ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This is my first time making a dress...
I like it but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,5,3,3,#1,#1,0,0);
    VoicePlay("P730300001_03_000");
    MsgDisp("Honda","Waa, it's a real dress, huh?
And model too!");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Thank you.
You came to see it huh?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("P730300001_03_010");
    MsgDisp("Honda","Yeah. When you're making clothes, you have
to be passionate or you can't do it. You
have to patient with this kind of work?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P730300001_03_020");
    MsgDisp("Honda","You'll be wearing and walking in the
fruits of your labour, there's no way I
can miss that.");
    MsgDisp("主人公","That's p-pressureー...
I'll do my best.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("P730300001_03_030");
    MsgDisp("Honda","Then, I'll be cheering you on from a good
seat.");
    MsgDisp("主人公","(Alright, let's give a wonderful show!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This is my first time making a dress...
I like it but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,4,4,3,#1,#1,0,0);
    VoicePlay("P730300001_03_040");
    MsgDisp("Honda","Amazing, it's lovely...");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Really?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("P730300001_03_050");
    MsgDisp("Honda","Yeah, it wouldn't be strange if you got
scouted by a pro soon.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1,1);
    VoicePlay("P730300001_03_060");
    MsgDisp("Honda","But, just don't forget this, okay?
I'm your number one fan!");
    MsgDisp("主人公","Hehe, thank you.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("P730300001_03_070");
    MsgDisp("Honda","It's already time.
I look forward to your model walk.
Then, do your best!");
    MsgDisp("主人公","(Alright, let's live up to ｛本多＊＊｝'s
expectations!')");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChClose(3,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
