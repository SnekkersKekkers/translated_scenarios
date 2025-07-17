BGOpen("ar100",0);
ChLayout(1);
ChNanaType(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0);
    VoicePlay("I360400006_04_000");
    MsgDisp("Nanatsumori","See ya.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(4,0,30);
    Wait(30,0);
    SEPlay("EV_SE_DOOR_014");
    MsgDisp("主人公","Thank you very much!");
    SEStop("EV_SE_DOOR_014",2);
    MsgDisp("主人公","Alright, let's clean up.
... Hm?
What's this piece of paper?");
    MsgDisp("主人公","If it was left, it's probably trash.
Well, into the garbage bag...");
    MsgClose();
    BGMVol(0.5,2.5);
    SEPlay("EV_SE_DOOR_014",0,0.6);
    Wait(20,0);
    SEStop("EV_SE_DOOR_014",3);
    SEPlay("EV_SE_FOOT_025",1.2,0.8);
    Wait(110,0);
    ChNanaType(1);
    ChOpen(4,35,0,2,1,10,#1,0,0);
    VoicePlay("I360400006_04_010");
    MsgDisp("Nanatsumori","Excuse me, I feel like I just forgot
something at my table-");
    ChEye(4,5);
    ChMotion(4,1,1);
    VoicePlay("I360400006_04_020");
    MsgDisp("Nanatsumori","Ah!
Hey, was there a small bit of paper on
that table?");
    MsgDisp("主人公","Small paper...
Ah, you mean this?");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("I360400006_04_030");
    MsgDisp("Nanatsumori","Yikes...
Just barely safe.");
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("I360400006_04_040");
    MsgDisp("Nanatsumori","I wrote a note on the back of it, didn't
you see it?");
    MsgDisp("主人公","The back... ah, you're right.
Sorry...");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("I360400006_04_050");
    MsgDisp("Nanatsumori","Nah, it's my fault I forgot.
I'm glad I made it in time...");
    MsgDisp("主人公","(I guess I wasn't paying close enough
attention...
Let's check everything carefully.)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0);
    VoicePlay("I360400006_04_060");
    MsgDisp("Nanatsumori","Thanks for the food.
Well, see ya.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(4,0,30);
    Wait(30,0);
    SEPlay("EV_SE_DOOR_014");
    MsgDisp("主人公","Thank you very much!");
    SEStop("EV_SE_DOOR_014",2);
    MsgDisp("主人公","Alright, let's clean up.
... Hm?
What's this piece of paper?");
    MsgDisp("主人公","Something ｛七ツ森＊｝
left? But, if it's still here, I guess
it's trash. Well, into the garbage
bag...");
    MsgClose();
    BGMVol(0.5,2.5);
    SEPlay("EV_SE_DOOR_014",0,0.6);
    Wait(20,0);
    SEStop("EV_SE_DOOR_014",3);
    SEPlay("EV_SE_FOOT_025",1.2,0.8);
    Wait(110,0);
    ChNanaType(1);
    ChOpen(4,35,0,5,1,#1,#1,0,0);
    VoicePlay("I360400006_04_070");
    MsgDisp("Nanatsumori","Um, I feel like I just forgot something at
my table-");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Is it...");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("I360400006_04_080");
    MsgDisp("Nanatsumori","Ah, that!
That paper!
Thank goodness...");
    MsgDisp("主人公","It wasn't trash?");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("I360400006_04_090");
    MsgDisp("Nanatsumori","Check out the back.");
    MsgDisp("主人公","The back?
Ah... there's a time and place.");
    VoicePlay("I360400006_04_100");
    MsgDisp("Nanatsumori","Right.
It's an important note.");
    MsgDisp("主人公","I'm sorry.
I didn't check it properly...");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I360400006_04_110");
    MsgDisp("Nanatsumori","Nah, it's my fault for forgetting such an
important note.
Sorry, you saved me.");
    MsgDisp("主人公","(I guess I wasn't paying close enough
attention...
Let's check everything carefully.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
