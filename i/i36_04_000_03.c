BGOpen("ar100",0);
ChLayout(1);
ChNanaType(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    VoicePlay("I360400003_47_000");
    MsgDisp("Woman Customer","Um, miss.
The sugar pot is empty...");
    MsgDisp("主人公","My apologies!
I'll bring you a new one right away.");
    MsgClose();
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0);
    VoicePlay("I360400003_04_000");
    MsgDisp("Nanatsumori","Thanks for the food.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Are you heading home?");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("I360400003_04_010");
    MsgDisp("Nanatsumori","Yeah.
...Hey.");
    MsgDisp("主人公","Yes?");
    VoicePlay("I360400003_04_020");
    MsgDisp("Nanatsumori","I could see the bottom of the sugar pot at
my table too, so be careful.
See ya.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    Wait(30,0);
    SEPlay("EV_SE_DOOR_014");
    MsgDisp("主人公","...He's right.
｛七ツ森＊｝ really did
me a favor by telling me that...");
    MsgDisp("主人公","(I might be a little out of it.
Let's check the tables more...)");
    break ;
    case 4:
    case 5:
    VoicePlay("I360400003_47_010");
    MsgDisp("Woman Customer","Excuse me.
I don't think there's any sugar here...");
    MsgDisp("主人公","My apologies!
I'll bring you a new one right away.");
    VoicePlay("I360400003_04_030");
    MsgDisp("Nanatsumori","My, my...");
    MsgClose();
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    VoicePlay("I360400003_04_040");
    MsgDisp("Nanatsumori","Excuse me.");
    MsgDisp("主人公","Yes, coming!");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE",0,0.6);
    SEWait();
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Thank you for waiting.");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("I360400003_04_050");
    MsgDisp("Nanatsumori","The countdown for sugar running out here
started too, you know?");
    MsgDisp("主人公","Huh∋
I'm sorry I didn't notice...");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("I360400003_04_060");
    MsgDisp("Nanatsumori","Well, I didn't need any so it's fine,
though.");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("I360400003_04_070");
    MsgDisp("Nanatsumori","Sugar is essential, especially for a
coffee shop like this.
Make sure you lift the lids and check.");
    MsgDisp("主人公","(Haa...
I guess I'm a little distracted.
I'll have to check the tables more often.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
