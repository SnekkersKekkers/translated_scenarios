BGOpen("ar100",0);
ChLayout(1);
ChNanaType(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","Ah, I need to tend to the plants
soon...");
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    SEPlay("EV_SE_DOOR_014");
    Wait(20,0);
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    Wait(80,0);
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0);
    VoicePlay("I360400002_04_000");
    MsgDisp("Nanatsumori","Hey.");
    MsgDisp("主人公","Welcome!");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,4,1);
    VoicePlay("I360400002_04_010");
    MsgDisp("Nanatsumori","Your nose.
Something's on it.");
    MsgDisp("主人公","Hm?
Ah... it's some soil.");
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,1,1);
    VoicePlay("I360400002_04_020");
    MsgDisp("Nanatsumori","How'd you get dirt on your nose in a cafe?");
    MsgDisp("主人公","I was taking care of the plants earlier,
so I guess that's when it happened.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("I360400002_04_030");
    MsgDisp("Nanatsumori","I see... So that's why I thought the
storefront looked pretty good. Good, good.");
    MsgDisp("主人公","(I did it!
I'm happy to be complimented!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Ah, I need to tend to the plants
soon...");
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    SEPlay("EV_SE_DOOR_014");
    Wait(20,0);
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    Wait(80,0);
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0);
    VoicePlay("I360400002_04_040");
    MsgDisp("Nanatsumori","Hello.");
    MsgDisp("主人公","Welcome!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I360400002_04_050");
    MsgDisp("Nanatsumori","Pft!");
    MsgDisp("主人公","Uh.
Why did you start laughing after you saw
my face?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("I360400002_04_060");
    MsgDisp("Nanatsumori","Excuse me a bit.");
    MsgClose();
    SEPlay("EV_SE_FOOT_039");
    ChClose(4,0,30);
    ChLayout(0);
    ChNanaType(1);
    ChOpen(4,35,0,0,3,#1,#1,0,0);
    SEWait();
    VoicePlay("I360400002_04_070");
    MsgDisp("Nanatsumori","There, got it.");
    MsgDisp("主人公","?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0,0.5);
    ChClose(4,0,30);
    ChLayout(1);
    ChNanaType(1);
    ChOpen(4,35,0,3,3,#1,#1,0,0);
    SEWait();
    ChMotion(4,1,1);
    VoicePlay("I360400002_04_080");
    MsgDisp("Nanatsumori","There was dirt on your nose...
I wonder how that happened.");
    MsgDisp("主人公","Ah... Maybe when I was tending to the
plants around the store earlier. Thanks.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("I360400002_04_090");
    MsgDisp("Nanatsumori","Got it...
That explains the beauty I see.
The flowers.");
    MsgDisp("主人公","Really?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("I360400002_04_100");
    MsgDisp("Nanatsumori","Yeah. They'll grow up well if you're the
one taking care of them. You're good.");
    MsgDisp("主人公","(I'm so happy to get such a good
compliment!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
