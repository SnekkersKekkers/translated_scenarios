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
    VoicePlay("P830100001_48_000");
    MsgDisp("School Girl","Excuse me, I'd like to borrow a trolley
please.");
    MsgDisp("主人公","Yeーs");
        MsgDisp("主人公","(Phew, this year I'm in charge of
supplies.
I'm super busy, huh...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,0,2,#1,#1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("P830100001_01_000");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝, what's wrong?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("P830100001_01_010");
    MsgDisp("Kazama","Are you enjoying yourself properly?");
    MsgDisp("主人公","Yeah, of course I'm enjoying myself.
I'm busy though.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P830100001_01_020");
    MsgDisp("Kazama","I see.
I'll buy the things you like in advance,
so when it's break time, let's eat it.");
    MsgDisp("主人公","Thank you!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P830100001_01_030");
    MsgDisp("Kazama","Then do your best, Manager-san.");
    MsgDisp("主人公","Hehe, yeーs.");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","(Phew, this year I'm in charge of
supplies.
I'm super busy, huh...)");
    VoicePlay("P830100001_48_010");
    MsgDisp("School Girl","Excuse me, I accidentally spilled some
water. I'd like to borrow a bucket and a
rag please!");
    MsgDisp("主人公","Yes, I'll bring it over now!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    VoicePlay("P830100001_01_040");
    MsgDisp("Kazama","I'll carry this over.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
Didn't you have something you needed to
do?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P830100001_01_050");
    MsgDisp("Kazama","Yeah, it's alright.
You seem busy, so I can just do it later.");
    ChEye(1,0);
    MsgDisp("主人公","I'm sorry, thank you.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    SEWait();
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,2,2,0,#1,0,0);
    ChMotion(1,1);
    VoicePlay("P830100001_01_060");
    MsgDisp("Kazama","Phew...
It's a tough job being the management
staff, huh?");
    MsgDisp("主人公","｛風真＊＊｝, thank you for
helping me.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P830100001_01_070");
    MsgDisp("Kazama","Yeah, yeah.
Later then, don't push yourself too hard.");
    MsgDisp("主人公","Y-Yeah.
Ah, ｛風真＊＊｝, didn't you
have some errands?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P830100001_01_080");
    MsgDisp("Kazama","I finished them.
I just came to see your cheerful face.");
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
