BGMStop();
BGOpen("sc605",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ScrFadeIn(0);
    VoicePlay("P830100000_48_000");
    MsgDisp("School Girl","Could you make a lost property
announcement?");
    MsgDisp("主人公","Yes, I got it!");
    VoiceEVSPlay(1);
    VoicePlay("P830100000_01_000");
    MsgDisp("Kazama?","｛主人公｝.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Ah, ｛風真＊＊｝.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("P830100000_01_010");
    MsgDisp("Kazama","I came to hand this in.
It's a smartphone that was dropped in the
hallway.");
    MsgDisp("主人公","Ah, this must be it! The person who
dropped it must be so relieved. Thank you,
｛風真＊＊｝.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P830100000_01_020");
    MsgDisp("Kazama","That's good.
You look as happy as if it was yours being
found.");
    MsgDisp("主人公","Yeah, I was super worried.
I'll hand it over to them.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P830100000_01_030");
    MsgDisp("Kazama","Yeah, quickly relieve them of their
worries.");
    MsgDisp("主人公","Yeah, I'll see you later!");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    VoicePlay("P830100000_48_010");
    MsgDisp("School Girl","Just now, there was a mobile phone in lost
property, right?");
    MsgDisp("主人公","Yes, it was found in the hallway.");
    VoicePlay("P830100000_01_040");
    MsgDisp("Kazama?","You saved me.
That's mine.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,2,3,#1,#1,0,0);
    MsgDisp("主人公","Ah... now that I think about it, I thought
I had seen it before.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("P830100000_01_050");
    MsgDisp("Kazama","Shouldn't you have recognized it earlier?");
    MsgDisp("主人公","Sorry.
I just thought I shouldn't just touch and
use things as I please.");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("P830100000_01_060");
    MsgDisp("Kazama","Oi, seriously, you...");
    MsgDisp("主人公","Hehe, well it was properly locked, you
know?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("P830100000_01_070");
    MsgDisp("Kazama","I see.
Hey, what do you mean by \"hehe\"?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("P830100000_01_080");
    MsgDisp("Kazama","That was closeー.");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
